#pragma once
#include "E512W3D.hpp"
Mesh keikiwakuM;
    // keikiwakuM.vertex 104
    // keikiwakuM.face 56
    // keikiwakuM.uv_vertex 1
    // keikiwakuM.uv_face 0
#if defined(ARDUINO)
void keikiwakuMVertexAdd () {
    keikiwakuM.vertexs.reserve(104);
    keikiwakuM.vertexs.emplace_back(-0.064329, -1.497472, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.498786, -0.01413, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.498805, 0.012029, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.066429, 1.49738, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.064329, 1.497472, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.498786, 0.01413, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.498805, -0.012029, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.066429, -1.49738, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.000704, -1.003869, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.165066, -0.990658, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.18233, -0.987626, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.334584, -0.946944, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.351059, -0.94096, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.493936, -0.874458, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.509122, -0.865705, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.86499, -0.510335, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.873765, -0.495161, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.004271, -0.009468, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.004283, 0.00806, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.874458, 0.493936, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.865705, 0.509122, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.510335, 0.86499, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.495161, 0.873765, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.352378, 0.940467, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.335911, 0.946474, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.183714, 0.987369, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.166454, 0.990425, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.000704, 1.003869, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.000704, 1.003869, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.165066, 0.990658, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.18233, 0.987626, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.334584, 0.946944, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.351059, 0.94096, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.493936, 0.874458, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.509122, 0.865705, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.86499, 0.510335, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.873765, 0.495161, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.004271, 0.009468, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.004283, -0.00806, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.874458, -0.493936, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.865705, -0.509122, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.510335, -0.86499, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.495161, -0.873765, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.352378, -0.940467, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.335911, -0.946474, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.183714, -0.987369, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.166454, -0.990425, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.000704, -1.003869, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.391683, -1.103619, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.410884, -1.096616, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.194091, -1.154868, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.214217, -1.151305, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.457805, -0.013744, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.457823, 0.0117, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.212602, -1.151604, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.192472, -1.155139, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.409346, -1.09719, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.390135, -1.104167, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.409346, 1.09719, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.390135, 1.104167, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.212602, 1.151604, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.192472, 1.155139, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.457805, 0.013744, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.457823, -0.0117, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.194091, 1.154868, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.214217, 1.151305, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.391683, 1.103619, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.410884, 1.096616, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.657954, -1.164835, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.678183, -1.153175, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.152223, 0.679799, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.163911, 0.659587, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.337754, -0.012612, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.33777, 0.010737, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.164835, -0.657954, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.153175, -0.678183, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.679799, 1.152223, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.659587, 1.163911, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.657954, 1.164835, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.678183, 1.153175, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.152223, -0.679799, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.163911, -0.659587, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.337754, 0.012612, 0.003937);
    keikiwakuM.vertexs.emplace_back(1.33777, -0.010737, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.164835, 0.657954, 0.003937);
    keikiwakuM.vertexs.emplace_back(-1.153175, 0.678183, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.679799, -1.152223, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.659587, -1.163911, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.85314, 0.764017, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.768337, 0.863546, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.699761, 0.719638, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.699761, 0.719638, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.772275, 0.854707, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.860695, 0.758377, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.709486, 0.7079, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.709486, 0.7079, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.856038, -0.766076, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.763625, -0.858582, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.706651, -0.709699, 0.003937);
    keikiwakuM.vertexs.emplace_back(0.706651, -0.709699, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.748811, -0.863639, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.843198, -0.773147, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.695517, -0.713124, 0.003937);
    keikiwakuM.vertexs.emplace_back(-0.695517, -0.713124, 0.003937);
}
void keikiwakuMFaceAdd () {
    keikiwakuM.faces.reserve(56);
    keikiwakuM.faces.emplace_back(49, 43, 48);
    keikiwakuM.faces.emplace_back(43, 44, 48);
    keikiwakuM.faces.emplace_back(57, 11, 56);
    keikiwakuM.faces.emplace_back(11, 12, 56);
    keikiwakuM.faces.emplace_back(86, 41, 87);
    keikiwakuM.faces.emplace_back(41, 42, 87);
    keikiwakuM.faces.emplace_back(84, 19, 85);
    keikiwakuM.faces.emplace_back(19, 20, 85);
    keikiwakuM.faces.emplace_back(65, 25, 64);
    keikiwakuM.faces.emplace_back(25, 26, 64);
    keikiwakuM.faces.emplace_back(55, 9, 54);
    keikiwakuM.faces.emplace_back(9, 10, 54);
    keikiwakuM.faces.emplace_back(82, 37, 83);
    keikiwakuM.faces.emplace_back(37, 38, 83);
    keikiwakuM.faces.emplace_back(80, 15, 81);
    keikiwakuM.faces.emplace_back(15, 16, 81);
    keikiwakuM.faces.emplace_back(67, 23, 66);
    keikiwakuM.faces.emplace_back(23, 24, 66);
    keikiwakuM.faces.emplace_back(78, 33, 79);
    keikiwakuM.faces.emplace_back(33, 34, 79);
    keikiwakuM.faces.emplace_back(76, 21, 77);
    keikiwakuM.faces.emplace_back(21, 22, 77);
    keikiwakuM.faces.emplace_back(59, 31, 58);
    keikiwakuM.faces.emplace_back(31, 32, 58);
    keikiwakuM.faces.emplace_back(74, 39, 75);
    keikiwakuM.faces.emplace_back(39, 40, 75);
    keikiwakuM.faces.emplace_back(72, 17, 73);
    keikiwakuM.faces.emplace_back(17, 18, 73);
    keikiwakuM.faces.emplace_back(51, 45, 50);
    keikiwakuM.faces.emplace_back(45, 46, 50);
    keikiwakuM.faces.emplace_back(61, 29, 60);
    keikiwakuM.faces.emplace_back(29, 30, 60);
    keikiwakuM.faces.emplace_back(70, 35, 71);
    keikiwakuM.faces.emplace_back(35, 36, 71);
    keikiwakuM.faces.emplace_back(68, 13, 69);
    keikiwakuM.faces.emplace_back(13, 14, 69);
    keikiwakuM.faces.emplace_back(1, 52, 2);
    keikiwakuM.faces.emplace_back(52, 53, 2);
    keikiwakuM.faces.emplace_back(0, 7, 8);
    keikiwakuM.faces.emplace_back(7, 47, 8);
    keikiwakuM.faces.emplace_back(5, 62, 6);
    keikiwakuM.faces.emplace_back(62, 63, 6);
    keikiwakuM.faces.emplace_back(3, 27, 4);
    keikiwakuM.faces.emplace_back(27, 28, 4);
    keikiwakuM.faces.emplace_back(52, 72, 53);
    keikiwakuM.faces.emplace_back(72, 73, 53);
    keikiwakuM.faces.emplace_back(62, 82, 63);
    keikiwakuM.faces.emplace_back(82, 83, 63);
    keikiwakuM.faces.emplace_back(88, 90, 89);
    keikiwakuM.faces.emplace_back(90, 91, 89);
    keikiwakuM.faces.emplace_back(92, 94, 93);
    keikiwakuM.faces.emplace_back(94, 95, 93);
    keikiwakuM.faces.emplace_back(96, 98, 97);
    keikiwakuM.faces.emplace_back(98, 99, 97);
    keikiwakuM.faces.emplace_back(100, 102, 101);
    keikiwakuM.faces.emplace_back(102, 103, 101);
}
void keikiwakuMUVVertexAdd () {
}
void keikiwakuMUVFaceAdd () {
}
#endif
void keikiwakuMInit () {
#if !defined(ARDUINO)
    {
        keikiwakuM.vertexs.reserve(104);
        float va[] = {-0.064329,-1.497472,0.003937,-1.498786,-0.01413,0.003937,-1.498805,0.012029,0.003937,-0.066429,1.49738,0.003937,0.064329,1.497472,0.003937,1.498786,0.01413,0.003937,1.498805,-0.012029,0.003937,0.066429,-1.49738,0.003937,0.000704,-1.003869,0.003937,-0.165066,-0.990658,0.003937,-0.18233,-0.987626,0.003937,-0.334584,-0.946944,0.003937,-0.351059,-0.94096,0.003937,-0.493936,-0.874458,0.003937,-0.509122,-0.865705,0.003937,-0.86499,-0.510335,0.003937,-0.873765,-0.495161,0.003937,-1.004271,-0.009468,0.003937,-1.004283,0.00806,0.003937,-0.874458,0.493936,0.003937,-0.865705,0.509122,0.003937,-0.510335,0.86499,0.003937,-0.495161,0.873765,0.003937,-0.352378,0.940467,0.003937,-0.335911,0.946474,0.003937,-0.183714,0.987369,0.003937,-0.166454,0.990425,0.003937,-0.000704,1.003869,0.003937,-0.000704,1.003869,0.003937,0.165066,0.990658,0.003937,0.18233,0.987626,0.003937,0.334584,0.946944,0.003937,0.351059,0.94096,0.003937,0.493936,0.874458,0.003937,0.509122,0.865705,0.003937,0.86499,0.510335,0.003937,0.873765,0.495161,0.003937,1.004271,0.009468,0.003937,1.004283,-0.00806,0.003937,0.874458,-0.493936,0.003937,0.865705,-0.509122,0.003937,0.510335,-0.86499,0.003937,0.495161,-0.873765,0.003937,0.352378,-0.940467,0.003937,0.335911,-0.946474,0.003937,0.183714,-0.987369,0.003937,0.166454,-0.990425,0.003937,0.000704,-1.003869,0.003937,0.391683,-1.103619,0.003937,0.410884,-1.096616,0.003937,0.194091,-1.154868,0.003937,0.214217,-1.151305,0.003937,-1.457805,-0.013744,0.003937,-1.457823,0.0117,0.003937,-0.212602,-1.151604,0.003937,-0.192472,-1.155139,0.003937,-0.409346,-1.09719,0.003937,-0.390135,-1.104167,0.003937,0.409346,1.09719,0.003937,0.390135,1.104167,0.003937,0.212602,1.151604,0.003937,0.192472,1.155139,0.003937,1.457805,0.013744,0.003937,1.457823,-0.0117,0.003937,-0.194091,1.154868,0.003937,-0.214217,1.151305,0.003937,-0.391683,1.103619,0.003937,-0.410884,1.096616,0.003937,-0.657954,-1.164835,0.003937,-0.678183,-1.153175,0.003937,1.152223,0.679799,0.003937,1.163911,0.659587,0.003937,-1.337754,-0.012612,0.003937,-1.33777,0.010737,0.003937,1.164835,-0.657954,0.003937,1.153175,-0.678183,0.003937,-0.679799,1.152223,0.003937,-0.659587,1.163911,0.003937,0.657954,1.164835,0.003937,0.678183,1.153175,0.003937,-1.152223,-0.679799,0.003937,-1.163911,-0.659587,0.003937,1.337754,0.012612,0.003937,1.33777,-0.010737,0.003937,-1.164835,0.657954,0.003937,-1.153175,0.678183,0.003937,0.679799,-1.152223,0.003937,0.659587,-1.163911,0.003937,-0.85314,0.764017,0.003937,-0.768337,0.863546,0.003937,-0.699761,0.719638,0.003937,-0.699761,0.719638,0.003937,0.772275,0.854707,0.003937,0.860695,0.758377,0.003937,0.709486,0.7079,0.003937,0.709486,0.7079,0.003937,0.856038,-0.766076,0.003937,0.763625,-0.858582,0.003937,0.706651,-0.709699,0.003937,0.706651,-0.709699,0.003937,-0.748811,-0.863639,0.003937,-0.843198,-0.773147,0.003937,-0.695517,-0.713124,0.003937,-0.695517,-0.713124,0.003937,};
        for (int i = 0; i < 312; i += 3) {
            keikiwakuM.addVertex(va[i], va[i+1], va[i+2]);
        }
    }
    {
        keikiwakuM.faces.reserve(56);
        int fa[] = {49,43,48,43,44,48,57,11,56,11,12,56,86,41,87,41,42,87,84,19,85,19,20,85,65,25,64,25,26,64,55,9,54,9,10,54,82,37,83,37,38,83,80,15,81,15,16,81,67,23,66,23,24,66,78,33,79,33,34,79,76,21,77,21,22,77,59,31,58,31,32,58,74,39,75,39,40,75,72,17,73,17,18,73,51,45,50,45,46,50,61,29,60,29,30,60,70,35,71,35,36,71,68,13,69,13,14,69,1,52,2,52,53,2,0,7,8,7,47,8,5,62,6,62,63,6,3,27,4,27,28,4,52,72,53,72,73,53,62,82,63,82,83,63,88,90,89,90,91,89,92,94,93,94,95,93,96,98,97,98,99,97,100,102,101,102,103,101,};
        for (int i = 0; i < 168; i += 3) {
            keikiwakuM.addFace(fa[i], fa[i+1], fa[i+2]);
        }
    }
#else
    keikiwakuMVertexAdd();
    keikiwakuMFaceAdd();
    keikiwakuMUVVertexAdd();
    keikiwakuMUVFaceAdd();
#endif
}
