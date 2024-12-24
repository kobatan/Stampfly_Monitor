#include <Arduino.h>
#include <M5core2.h>
#include <WiFi.h>
#include <esp_now.h>
#include <esp_wifi.h>

#include "E512W3D.hpp"
#include "3d_data/keiki.hpp"
#include "3d_data/cube.hpp"
#include "3d_data/keikiD.hpp"
#include "3d_data/keikiU.hpp"
#include "3d_data/plane.hpp"
#include "3d_data/keikiwakuU.hpp"
#include "3d_data/keikiwakuD.hpp"
#include "3d_data/keikiwakuM.hpp"
#include "3d_data/keikimag.hpp"
#include "3d_data/keikimagN.hpp"
#include "3d_data/keikimagS.hpp"
#include "3d_data/keikiCenter.hpp"

typedef struct __attribute__((__packed__)) {		// テレメトリーデータ
	uint8_t head[2] = {88, 88};
  float Elapsed_time;						// Time
  float Interval_time;					// delta Time
  float roll_angle;							// Roll_angle
  float pitch_angle;						// Pitch_angle
  float yaw_angle;							// Yaw_angle
  float roll_rate;							// roll rate
  float pitch_rate;							// pitch rate
  float yaw_rate;								// yaw rate
  float roll_angle_reference;		// Roll_angle_reference
  float pitch_angle_reference;	// Pitch_angle_reference
  float roll_rate_reference;		// roll ref
  float pitch_rate_reference;		// pitch ref
  float yaw_rate_reference; 		// yaw ref
  float thrust_command;					// thruxt command
  float voltage;								// Voltage
  float accel_x_raw;						// Accel_x_raw
  float accel_y_raw;						// Accel_y_raw
  float accel_z_raw;						// Accel_z_raw
  float Alt_velocity;						// Alt Velocity
  float Z_dot_ref;							// Z_dot_ref
  float FrontLeft_motor_duty;		// FrontLeft_motor_duty
  float RearRight_motor_duty;		// RearRight_motor_duty
  float Alt_ref;								// Alt_ref
  float Altitude2;							// Altitude2
  float Altitude;								// Sense_Alt
  float Az;											// Az
  float Az_bias;								// Az_bias
  uint8_t Alt_flag;							// Alt_flag
  uint8_t Mode;									// drone Status
	int16_t RangeFront;						// tof front

	uint8_t cnt_mode;							// コントロールモード stable/sports
	float compass_deg;						// コンパス
	int16_t deltaX;								// オプティカルフロー dX
	int16_t deltaY;								// オプティカルフロー dY
	float Altitude3;							// 気圧計の高度
} telemetry_data_t;

telemetry_data_t td;

volatile uint8_t Received_flag             = 0;
volatile uint8_t Channel                   = 0;
//uint8_t Addr1[6] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
uint8_t Addr2[6] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

TFT_eSprite sprite = TFT_eSprite(&M5.Lcd);		// LCD表示用
TFT_eSprite sprite2 = TFT_eSprite(&M5.Lcd);
TFT_eSprite sprite3 = TFT_eSprite(&M5.Lcd);
E512W3DWindow w;															// 3D表示用
Object3D camera;
Object3D a, b, c,d,e,f,g,h,k,l;

// 受信コールバック
void OnDataRecv(const uint8_t *mac_addr, const uint8_t *recv_data, int data_len) {

	if (recv_data[7] == 0xaa && recv_data[8] == 0x55 && recv_data[9] == 0x16 && recv_data[10] == 0x88) {
		Received_flag = 1;
		Channel       = recv_data[0];
		Addr2[0]      = recv_data[1];
		Addr2[1]      = recv_data[2];
		Addr2[2]      = recv_data[3];
		Addr2[3]      = recv_data[4];
		Addr2[4]      = recv_data[5];
		Addr2[5]      = recv_data[6];
		Serial.printf("Receive Channel:%d MAC[%02X:%02Xd:%02X:%02X:%02X]\n", Channel, Addr2[0], Addr2[1], Addr2[2], Addr2[3], Addr2[4], Addr2[5]);
	} else {
		if(recv_data[0] == 88 && recv_data[1] == 88){
			memcpy((uint8_t *)&td, recv_data, data_len);
			Received_flag = 1;
		}
	}
}

Vector3 pos = Vector3(-2, 1, 0); 			// 	3D表示位置
Vector3 sc = Vector3(2.8, 2.8, 2.8); 	//  3D大きさ

void keiki_setup(){

	M5.Lcd.setRotation(3);
//	M5.Axp.ScreenBreath(9);			// 画面の明るさ n=7:暗い～15:明るい
	M5.Lcd.setBrightness(128);	// 画面の明るさ n=0:消灯～255:全灯

	e512w3d.width = 200;//320;
	e512w3d.height = 200;//240;
	w.sx = 0;
	w.sy = 0;
	w.width = 200;//e512w3d.width;
	w.height = 200;//e512w3d.height;

	keikiInit();
	keikiDInit();
	keikiUInit();
	keikiwakuUInit();
	keikiwakuDInit();
	keikiwakuMInit();
	keikimagInit();
	keikimagNInit();
	keikimagSInit();
	keikiCenterInit();

	a.mesh = &keiki;
	a.render_type = RenderType::PolygonColor;
	a.color = color565(255, 255, 255);

	b.mesh = &keikiU;
	b.render_type = RenderType::PolygonColor;	
	b.color = color565(0, 177, 255);

	c.mesh = &keikiD;
	c.render_type = RenderType::PolygonColor;		
	c.color = color565(135, 58, 48);
		
	a.addChild(b);
	a.addChild(c);
	a.position = pos;
	a.scale = sc;

	d.mesh = &keikiwakuU;
	d.render_type = RenderType::PolygonColor;		
	d.color = color565(0, 177, 255);
 
	e.mesh = &keikiwakuD;
	e.render_type = RenderType::PolygonColor;		
	e.color = color565(135, 58, 48);

	f.mesh = &keikiwakuM;
	f.position = Vector3(0, 0, 0.1f);
	f.scale = Vector3(0.98f, 0.98f, 0.98f);
	f.render_type = RenderType::PolygonColor;		
	f.color = color565(255, 255, 255);
		
	d.addChild(e);
	d.addChild(f);
	d.position = pos;
	d.scale = sc;

	g.mesh = &keikimag;
	g.render_type = RenderType::PolygonColor;
	g.color = color565(255, 255, 255);

	h.mesh = &keikimagS;
	h.render_type = RenderType::PolygonColor;
	h.color = color565(0, 255, 0);

	k.mesh = &keikimagN;
	k.render_type = RenderType::PolygonColor;
	k.color = color565(255, 0, 0);

	g.addChild(h);
	g.addChild(k);
	g.position = pos;	
	g.scale = sc;
	
	l.mesh = &keikiCenter;
	l.render_type = RenderType::PolygonColor;
	l.color = color565(255, 0, 0);
	l.position = pos + Vector3(0,0,1);
	l.scale = sc * 0.8;

	w.addChild(a);
	w.addChild(d);
	w.addChild(g);
	w.addChild(l);

	camera.position.x = pos.x;
	camera.position.y = pos.y;
	camera.position.z = pos.z + 15;

	w.setCamera(camera);
	w.setDirectionalLight(0, 0, -1);
	w.ambient = 0.2;

	e512w3d.add(w);
	e512w3d.begin();
}

void draw_Hbar(int x,int y,int w,int h,float min, float max, float val){	// 水平バー表示
	uint16_t col = BLUE;
	float l = (float) w * (val - min) / (max - min);
	if(l<0) l=0; 
	sprite.drawRect(x, y, w, h, WHITE);
	if(val < 3.3f) col = RED;
	sprite.fillRect(x+1, y+1, (int32_t)l, h-2, col);
}

static float old_x = 60, old_y = 50;

void draw_flow(){			// オプティカルフロー値から移動距離を描く
	float x,y;
	sprite3.fillScreen(BLACK);
	sprite3.drawRect(0, 0, sprite3.width()-1, sprite3.height()-1 , WHITE);
	x = old_x + td.deltaX/10;
	y = old_y + td.deltaY/10;
	if(x < 0 || x > 120) x = 60;
	if(y < 0 || y > 100) y = 50;
	sprite3.drawLine(old_x,old_y,x,y,WHITE);
	old_x = x;
	old_y = y;
	sprite3.pushSprite(200,100);
}

const String state[7] = {"  INIT","AVERAGE"," FLIGHT ","PARKING","  LOG","LANDING","  FLIP"};
const String cntmode[2] = {"STABLE","SPORTS"};	// Mode
const String altmode[2] = {"MANUAL"," AUTO"};		// Altitude

void telem_disp(){
	int x = 0;
	int y = 0;
	int sy = 21;

	//---- 画面右上エリア --------------------------
	sprite.fillScreen(BLACK);
	sprite.setCursor(x,y);
	sprite.printf("BAT:%3.2fV", td.voltage);
	y += sy;
	draw_Hbar(x, y, 120, 12, 2.7f, 4.35f, td.voltage);
	y += sy-3;
	sprite.setCursor(x,y);
	sprite.printf("ALT:%4.2fm", td.Altitude);	
	y += sy;
	sprite.setCursor(x,y);
	sprite.printf("BAR:%4.2fm", td.Altitude3);
	y += sy;
	sprite.setCursor(x,y);
	sprite.printf("FRT:%dmm", td.RangeFront);

	sprite.pushSprite(200,0);
	
	//---- 画面下エリア ----------------------------
	sprite2.fillScreen(BLACK);
	sprite2.fillRect(  0,0,105,20,GREENYELLOW);
	sprite2.fillRect(106,0,105,20,GREEN);
	sprite2.fillRect(212,0,105,20,YELLOW);
	sprite2.setTextColor(BLACK);
	sprite2.setCursor(20,3);
	sprite2.print("STATE     MODE     ALT");

	sprite2.setTextColor(GREENYELLOW);
	sprite2.setCursor(12,24);
	sprite2.print(state[td.Mode]);				// ドローンの状態

	sprite2.setTextColor(GREEN);
	sprite2.setCursor(124,24);
	sprite2.print(cntmode[td.cnt_mode]);	// コントロールモード

	sprite2.setTextColor(YELLOW);
	sprite2.setCursor(230,24);
	sprite2.print(altmode[td.Alt_flag]);	// 高度維持モード

	sprite2.pushSprite(0,200);

	//---- 画面右中エリア ----------------------------
	draw_flow();	// オプティカルフロー移動描画
}

void keiki_disp(){					// 機体の傾きを3Dで描く
	if (e512w3d.isFixedTime()) {
		a.rotation = Quaternion::angleAxis(-td.pitch_angle,	Vector3(1, 0, 0));	// Pitch 回転
		a.rotation *= Quaternion::angleAxis(td.roll_angle/2,Vector3(0, 0, 1));	// Roll 回転
		d.rotation = Quaternion::angleAxis(td.roll_angle,		Vector3(0, 0, 1));	// Roll 回転   
		g.rotation = Quaternion::angleAxis(td.compass_deg,	Vector3(0, 0, 1)); 	// コンパス回転

	//	e512w3d.clear();
		w.begin();
		w.draw(a);
		w.draw(b);
		w.draw(c);
		w.draw(d);
		w.draw(e);
		w.draw(f);
		w.draw(g);
		w.draw(h);
		w.draw(k);
		w.draw(l);
		e512w3d.pushScreen();
	}
}

void setup () {
	M5.begin();
	M5.IMU.Init(); 
 	WiFi.mode(WIFI_STA);
	WiFi.disconnect();
	
	// ESP-NOW初期化
	if (esp_now_init() == ESP_OK) {
		esp_now_unregister_recv_cb();
		esp_now_register_recv_cb( OnDataRecv );	// 受信コールバック関数指定
		Serial.println("ESPNow Init Success");
	} else {
		Serial.println("ESPNow Init Failed");
		ESP.restart();
	}

	sprite.setColorDepth(8);				// 画面右上エリア設定
  sprite.setTextSize(2);
  sprite.createSprite(120,100);
	
	sprite3.setColorDepth(8);				// 画面右中エリア設定
  sprite3.setTextSize(2);
  sprite3.createSprite(120,100);

 	sprite2.setColorDepth(8);				// 画面下エリア設定
  sprite2.setTextSize(2);
  sprite2.createSprite(320,40);
 
	keiki_setup(); 									// 画面左エリア　3D画面設定

	keiki_disp();										// 3D計器 表示
	telem_disp();										// テレメトリーデータを表示
}

void loop () {	
	M5.update();
	if(Received_flag == 1){		// テレメトリーデータ受信したら再描画
		keiki_disp();						// 3D計器 表示
		telem_disp();						// テレメトリーデータを表示
		Received_flag = 0;
	}
}
