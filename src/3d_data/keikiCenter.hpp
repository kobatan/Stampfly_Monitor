#pragma once
#include "E512W3D.hpp"
Mesh keikiCenter;
    // keikiCenter.vertex 114
    // keikiCenter.face 108
    // keikiCenter.uv_vertex 4
    // keikiCenter.uv_face 0
#if defined(ARDUINO)
void keikiCenterVertexAdd () {
    keikiCenter.vertexs.reserve(114);
    keikiCenter.vertexs.emplace_back(-0.399761, -0.020916, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.387999, -0.098504, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.361326, -0.172306, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.320768, -0.239486, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.267884, -0.297464, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.204704, -0.344009, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.133658, -0.377335, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.057475, -0.39616, 1.032672);
    keikiCenter.vertexs.emplace_back(0.020916, -0.399761, 1.032672);
    keikiCenter.vertexs.emplace_back(0.098504, -0.387999, 1.032672);
    keikiCenter.vertexs.emplace_back(0.172306, -0.361326, 1.032672);
    keikiCenter.vertexs.emplace_back(0.239486, -0.320768, 1.032672);
    keikiCenter.vertexs.emplace_back(0.297464, -0.267884, 1.032672);
    keikiCenter.vertexs.emplace_back(0.344009, -0.204704, 1.032672);
    keikiCenter.vertexs.emplace_back(0.377335, -0.133658, 1.032672);
    keikiCenter.vertexs.emplace_back(0.39616, -0.057475, 1.032672);
    keikiCenter.vertexs.emplace_back(0.399761, 0.020916, 1.032672);
    keikiCenter.vertexs.emplace_back(0.0, 0.987628, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.459716, -0.024053, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.44619, -0.113277, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.415517, -0.198148, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.368876, -0.275404, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.30806, -0.342076, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.235405, -0.395603, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.153703, -0.433927, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.066095, -0.455575, 1.032672);
    keikiCenter.vertexs.emplace_back(0.024053, -0.459716, 1.032672);
    keikiCenter.vertexs.emplace_back(0.113277, -0.44619, 1.032672);
    keikiCenter.vertexs.emplace_back(0.198148, -0.415517, 1.032672);
    keikiCenter.vertexs.emplace_back(0.275404, -0.368876, 1.032672);
    keikiCenter.vertexs.emplace_back(0.342076, -0.30806, 1.032672);
    keikiCenter.vertexs.emplace_back(0.395603, -0.235405, 1.032672);
    keikiCenter.vertexs.emplace_back(0.433927, -0.153703, 1.032672);
    keikiCenter.vertexs.emplace_back(0.455575, -0.066095, 1.032672);
    keikiCenter.vertexs.emplace_back(0.459716, 0.024053, 1.032672);
    keikiCenter.vertexs.emplace_back(0.0, 0.987628, 1.032672);
    keikiCenter.vertexs.emplace_back(0.055476, 0.842891, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.055476, 0.842891, 1.032672);
    keikiCenter.vertexs.emplace_back(0.786877, -0.021021, 1.032672);
    keikiCenter.vertexs.emplace_back(0.788948, 0.024053, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.792679, 0.021021, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.794749, -0.024053, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.39796, 0.018279, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.457645, 0.021021, 1.032672);
    keikiCenter.vertexs.emplace_back(0.39796, -0.018279, 1.032672);
    keikiCenter.vertexs.emplace_back(0.457645, -0.021021, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.0, 1.774004, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.0, 1.774004, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.055476, 1.918742, 1.032672);
    keikiCenter.vertexs.emplace_back(0.055476, 1.918742, 1.032672);
    keikiCenter.vertexs.emplace_back(-0.0, 0.042519, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.008295, 0.041702, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.016271, 0.039283, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.023622, 0.035353, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.030066, 0.030066, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.035354, 0.023622, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.039283, 0.016271, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.041702, 0.008295, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.042519, -0.0, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.041702, -0.008295, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.039283, -0.016272, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.035354, -0.023623, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.030066, -0.030066, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.023622, -0.035354, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.016271, -0.039283, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.008295, -0.041702, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.0, -0.042519, 1.032604);
    keikiCenter.vertexs.emplace_back(0.008295, -0.041702, 1.032604);
    keikiCenter.vertexs.emplace_back(0.016271, -0.039283, 1.032604);
    keikiCenter.vertexs.emplace_back(0.023622, -0.035354, 1.032604);
    keikiCenter.vertexs.emplace_back(0.030066, -0.030066, 1.032604);
    keikiCenter.vertexs.emplace_back(0.035354, -0.023623, 1.032604);
    keikiCenter.vertexs.emplace_back(0.039283, -0.016272, 1.032604);
    keikiCenter.vertexs.emplace_back(0.041702, -0.008295, 1.032604);
    keikiCenter.vertexs.emplace_back(0.042519, -0.0, 1.032604);
    keikiCenter.vertexs.emplace_back(0.041702, 0.008295, 1.032604);
    keikiCenter.vertexs.emplace_back(0.039283, 0.016271, 1.032604);
    keikiCenter.vertexs.emplace_back(0.035354, 0.023622, 1.032604);
    keikiCenter.vertexs.emplace_back(0.030066, 0.030066, 1.032604);
    keikiCenter.vertexs.emplace_back(0.023622, 0.035353, 1.032604);
    keikiCenter.vertexs.emplace_back(0.016271, 0.039283, 1.032604);
    keikiCenter.vertexs.emplace_back(0.008295, 0.041702, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.0, 0.017611, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.003436, 0.017272, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.006739, 0.01627, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.009784, 0.014643, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.012453, 0.012453, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.014643, 0.009784, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.01627, 0.006739, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.017273, 0.003436, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.017611, -0.0, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.017273, -0.003436, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.01627, -0.006739, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.014643, -0.009784, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.012453, -0.012453, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.009784, -0.014643, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.006739, -0.01627, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.003436, -0.017273, 1.032604);
    keikiCenter.vertexs.emplace_back(-0.0, -0.017611, 1.032604);
    keikiCenter.vertexs.emplace_back(0.003436, -0.017273, 1.032604);
    keikiCenter.vertexs.emplace_back(0.006739, -0.01627, 1.032604);
    keikiCenter.vertexs.emplace_back(0.009784, -0.014643, 1.032604);
    keikiCenter.vertexs.emplace_back(0.012453, -0.012453, 1.032604);
    keikiCenter.vertexs.emplace_back(0.014643, -0.009784, 1.032604);
    keikiCenter.vertexs.emplace_back(0.01627, -0.006739, 1.032604);
    keikiCenter.vertexs.emplace_back(0.017272, -0.003436, 1.032604);
    keikiCenter.vertexs.emplace_back(0.017611, -0.0, 1.032604);
    keikiCenter.vertexs.emplace_back(0.017272, 0.003436, 1.032604);
    keikiCenter.vertexs.emplace_back(0.01627, 0.006739, 1.032604);
    keikiCenter.vertexs.emplace_back(0.014643, 0.009784, 1.032604);
    keikiCenter.vertexs.emplace_back(0.012453, 0.012453, 1.032604);
    keikiCenter.vertexs.emplace_back(0.009784, 0.014643, 1.032604);
    keikiCenter.vertexs.emplace_back(0.006739, 0.01627, 1.032604);
    keikiCenter.vertexs.emplace_back(0.003436, 0.017272, 1.032604);
}
void keikiCenterFaceAdd () {
    keikiCenter.faces.reserve(108);
    keikiCenter.faces.emplace_back(7, 25, 8);
    keikiCenter.faces.emplace_back(25, 26, 8);
    keikiCenter.faces.emplace_back(8, 26, 9);
    keikiCenter.faces.emplace_back(26, 27, 9);
    keikiCenter.faces.emplace_back(9, 27, 10);
    keikiCenter.faces.emplace_back(27, 28, 10);
    keikiCenter.faces.emplace_back(10, 28, 11);
    keikiCenter.faces.emplace_back(28, 29, 11);
    keikiCenter.faces.emplace_back(11, 29, 12);
    keikiCenter.faces.emplace_back(29, 30, 12);
    keikiCenter.faces.emplace_back(12, 30, 13);
    keikiCenter.faces.emplace_back(30, 31, 13);
    keikiCenter.faces.emplace_back(42, 43, 0);
    keikiCenter.faces.emplace_back(43, 18, 0);
    keikiCenter.faces.emplace_back(13, 31, 14);
    keikiCenter.faces.emplace_back(31, 32, 14);
    keikiCenter.faces.emplace_back(0, 18, 1);
    keikiCenter.faces.emplace_back(18, 19, 1);
    keikiCenter.faces.emplace_back(14, 32, 15);
    keikiCenter.faces.emplace_back(32, 33, 15);
    keikiCenter.faces.emplace_back(1, 19, 2);
    keikiCenter.faces.emplace_back(19, 20, 2);
    keikiCenter.faces.emplace_back(44, 45, 16);
    keikiCenter.faces.emplace_back(45, 34, 16);
    keikiCenter.faces.emplace_back(2, 20, 3);
    keikiCenter.faces.emplace_back(20, 21, 3);
    keikiCenter.faces.emplace_back(3, 21, 4);
    keikiCenter.faces.emplace_back(21, 22, 4);
    keikiCenter.faces.emplace_back(4, 22, 5);
    keikiCenter.faces.emplace_back(22, 23, 5);
    keikiCenter.faces.emplace_back(5, 23, 6);
    keikiCenter.faces.emplace_back(23, 24, 6);
    keikiCenter.faces.emplace_back(37, 36, 35);
    keikiCenter.faces.emplace_back(36, 17, 35);
    keikiCenter.faces.emplace_back(6, 24, 7);
    keikiCenter.faces.emplace_back(24, 25, 7);
    keikiCenter.faces.emplace_back(45, 38, 34);
    keikiCenter.faces.emplace_back(38, 39, 34);
    keikiCenter.faces.emplace_back(43, 40, 18);
    keikiCenter.faces.emplace_back(40, 41, 18);
    keikiCenter.faces.emplace_back(15, 33, 44);
    keikiCenter.faces.emplace_back(33, 45, 44);
    keikiCenter.faces.emplace_back(49, 48, 47);
    keikiCenter.faces.emplace_back(48, 46, 47);
    keikiCenter.faces.emplace_back(81, 50, 113);
    keikiCenter.faces.emplace_back(50, 82, 113);
    keikiCenter.faces.emplace_back(112, 80, 113);
    keikiCenter.faces.emplace_back(80, 81, 113);
    keikiCenter.faces.emplace_back(111, 79, 112);
    keikiCenter.faces.emplace_back(79, 80, 112);
    keikiCenter.faces.emplace_back(110, 78, 111);
    keikiCenter.faces.emplace_back(78, 79, 111);
    keikiCenter.faces.emplace_back(109, 77, 110);
    keikiCenter.faces.emplace_back(77, 78, 110);
    keikiCenter.faces.emplace_back(108, 76, 109);
    keikiCenter.faces.emplace_back(76, 77, 109);
    keikiCenter.faces.emplace_back(107, 75, 108);
    keikiCenter.faces.emplace_back(75, 76, 108);
    keikiCenter.faces.emplace_back(106, 74, 107);
    keikiCenter.faces.emplace_back(74, 75, 107);
    keikiCenter.faces.emplace_back(105, 73, 106);
    keikiCenter.faces.emplace_back(73, 74, 106);
    keikiCenter.faces.emplace_back(72, 73, 104);
    keikiCenter.faces.emplace_back(73, 105, 104);
    keikiCenter.faces.emplace_back(71, 72, 103);
    keikiCenter.faces.emplace_back(72, 104, 103);
    keikiCenter.faces.emplace_back(70, 71, 102);
    keikiCenter.faces.emplace_back(71, 103, 102);
    keikiCenter.faces.emplace_back(69, 70, 101);
    keikiCenter.faces.emplace_back(70, 102, 101);
    keikiCenter.faces.emplace_back(68, 69, 100);
    keikiCenter.faces.emplace_back(69, 101, 100);
    keikiCenter.faces.emplace_back(67, 68, 99);
    keikiCenter.faces.emplace_back(68, 100, 99);
    keikiCenter.faces.emplace_back(66, 67, 98);
    keikiCenter.faces.emplace_back(67, 99, 98);
    keikiCenter.faces.emplace_back(65, 66, 97);
    keikiCenter.faces.emplace_back(66, 98, 97);
    keikiCenter.faces.emplace_back(96, 64, 97);
    keikiCenter.faces.emplace_back(64, 65, 97);
    keikiCenter.faces.emplace_back(95, 63, 96);
    keikiCenter.faces.emplace_back(63, 64, 96);
    keikiCenter.faces.emplace_back(94, 62, 95);
    keikiCenter.faces.emplace_back(62, 63, 95);
    keikiCenter.faces.emplace_back(93, 61, 94);
    keikiCenter.faces.emplace_back(61, 62, 94);
    keikiCenter.faces.emplace_back(92, 60, 93);
    keikiCenter.faces.emplace_back(60, 61, 93);
    keikiCenter.faces.emplace_back(91, 59, 92);
    keikiCenter.faces.emplace_back(59, 60, 92);
    keikiCenter.faces.emplace_back(90, 58, 91);
    keikiCenter.faces.emplace_back(58, 59, 91);
    keikiCenter.faces.emplace_back(89, 57, 90);
    keikiCenter.faces.emplace_back(57, 58, 90);
    keikiCenter.faces.emplace_back(88, 56, 89);
    keikiCenter.faces.emplace_back(56, 57, 89);
    keikiCenter.faces.emplace_back(87, 55, 88);
    keikiCenter.faces.emplace_back(55, 56, 88);
    keikiCenter.faces.emplace_back(86, 54, 87);
    keikiCenter.faces.emplace_back(54, 55, 87);
    keikiCenter.faces.emplace_back(85, 53, 86);
    keikiCenter.faces.emplace_back(53, 54, 86);
    keikiCenter.faces.emplace_back(84, 52, 85);
    keikiCenter.faces.emplace_back(52, 53, 85);
    keikiCenter.faces.emplace_back(83, 51, 84);
    keikiCenter.faces.emplace_back(51, 52, 84);
    keikiCenter.faces.emplace_back(82, 50, 83);
    keikiCenter.faces.emplace_back(50, 51, 83);
}
void keikiCenterUVVertexAdd () {
}
void keikiCenterUVFaceAdd () {
}
#endif
void keikiCenterInit () {
#if !defined(ARDUINO)
    {
        keikiCenter.vertexs.reserve(114);
        float va[] = {-0.399761,-0.020916,1.032672,-0.387999,-0.098504,1.032672,-0.361326,-0.172306,1.032672,-0.320768,-0.239486,1.032672,-0.267884,-0.297464,1.032672,-0.204704,-0.344009,1.032672,-0.133658,-0.377335,1.032672,-0.057475,-0.39616,1.032672,0.020916,-0.399761,1.032672,0.098504,-0.387999,1.032672,0.172306,-0.361326,1.032672,0.239486,-0.320768,1.032672,0.297464,-0.267884,1.032672,0.344009,-0.204704,1.032672,0.377335,-0.133658,1.032672,0.39616,-0.057475,1.032672,0.399761,0.020916,1.032672,0.0,0.987628,1.032672,-0.459716,-0.024053,1.032672,-0.44619,-0.113277,1.032672,-0.415517,-0.198148,1.032672,-0.368876,-0.275404,1.032672,-0.30806,-0.342076,1.032672,-0.235405,-0.395603,1.032672,-0.153703,-0.433927,1.032672,-0.066095,-0.455575,1.032672,0.024053,-0.459716,1.032672,0.113277,-0.44619,1.032672,0.198148,-0.415517,1.032672,0.275404,-0.368876,1.032672,0.342076,-0.30806,1.032672,0.395603,-0.235405,1.032672,0.433927,-0.153703,1.032672,0.455575,-0.066095,1.032672,0.459716,0.024053,1.032672,0.0,0.987628,1.032672,0.055476,0.842891,1.032672,-0.055476,0.842891,1.032672,0.786877,-0.021021,1.032672,0.788948,0.024053,1.032672,-0.792679,0.021021,1.032672,-0.794749,-0.024053,1.032672,-0.39796,0.018279,1.032672,-0.457645,0.021021,1.032672,0.39796,-0.018279,1.032672,0.457645,-0.021021,1.032672,-0.0,1.774004,1.032672,-0.0,1.774004,1.032672,-0.055476,1.918742,1.032672,0.055476,1.918742,1.032672,-0.0,0.042519,1.032604,-0.008295,0.041702,1.032604,-0.016271,0.039283,1.032604,-0.023622,0.035353,1.032604,-0.030066,0.030066,1.032604,-0.035354,0.023622,1.032604,-0.039283,0.016271,1.032604,-0.041702,0.008295,1.032604,-0.042519,-0.0,1.032604,-0.041702,-0.008295,1.032604,-0.039283,-0.016272,1.032604,-0.035354,-0.023623,1.032604,-0.030066,-0.030066,1.032604,-0.023622,-0.035354,1.032604,-0.016271,-0.039283,1.032604,-0.008295,-0.041702,1.032604,-0.0,-0.042519,1.032604,0.008295,-0.041702,1.032604,0.016271,-0.039283,1.032604,0.023622,-0.035354,1.032604,0.030066,-0.030066,1.032604,0.035354,-0.023623,1.032604,0.039283,-0.016272,1.032604,0.041702,-0.008295,1.032604,0.042519,-0.0,1.032604,0.041702,0.008295,1.032604,0.039283,0.016271,1.032604,0.035354,0.023622,1.032604,0.030066,0.030066,1.032604,0.023622,0.035353,1.032604,0.016271,0.039283,1.032604,0.008295,0.041702,1.032604,-0.0,0.017611,1.032604,-0.003436,0.017272,1.032604,-0.006739,0.01627,1.032604,-0.009784,0.014643,1.032604,-0.012453,0.012453,1.032604,-0.014643,0.009784,1.032604,-0.01627,0.006739,1.032604,-0.017273,0.003436,1.032604,-0.017611,-0.0,1.032604,-0.017273,-0.003436,1.032604,-0.01627,-0.006739,1.032604,-0.014643,-0.009784,1.032604,-0.012453,-0.012453,1.032604,-0.009784,-0.014643,1.032604,-0.006739,-0.01627,1.032604,-0.003436,-0.017273,1.032604,-0.0,-0.017611,1.032604,0.003436,-0.017273,1.032604,0.006739,-0.01627,1.032604,0.009784,-0.014643,1.032604,0.012453,-0.012453,1.032604,0.014643,-0.009784,1.032604,0.01627,-0.006739,1.032604,0.017272,-0.003436,1.032604,0.017611,-0.0,1.032604,0.017272,0.003436,1.032604,0.01627,0.006739,1.032604,0.014643,0.009784,1.032604,0.012453,0.012453,1.032604,0.009784,0.014643,1.032604,0.006739,0.01627,1.032604,0.003436,0.017272,1.032604,};
        for (int i = 0; i < 342; i += 3) {
            keikiCenter.addVertex(va[i], va[i+1], va[i+2]);
        }
    }
    {
        keikiCenter.faces.reserve(108);
        int fa[] = {7,25,8,25,26,8,8,26,9,26,27,9,9,27,10,27,28,10,10,28,11,28,29,11,11,29,12,29,30,12,12,30,13,30,31,13,42,43,0,43,18,0,13,31,14,31,32,14,0,18,1,18,19,1,14,32,15,32,33,15,1,19,2,19,20,2,44,45,16,45,34,16,2,20,3,20,21,3,3,21,4,21,22,4,4,22,5,22,23,5,5,23,6,23,24,6,37,36,35,36,17,35,6,24,7,24,25,7,45,38,34,38,39,34,43,40,18,40,41,18,15,33,44,33,45,44,49,48,47,48,46,47,81,50,113,50,82,113,112,80,113,80,81,113,111,79,112,79,80,112,110,78,111,78,79,111,109,77,110,77,78,110,108,76,109,76,77,109,107,75,108,75,76,108,106,74,107,74,75,107,105,73,106,73,74,106,72,73,104,73,105,104,71,72,103,72,104,103,70,71,102,71,103,102,69,70,101,70,102,101,68,69,100,69,101,100,67,68,99,68,100,99,66,67,98,67,99,98,65,66,97,66,98,97,96,64,97,64,65,97,95,63,96,63,64,96,94,62,95,62,63,95,93,61,94,61,62,94,92,60,93,60,61,93,91,59,92,59,60,92,90,58,91,58,59,91,89,57,90,57,58,90,88,56,89,56,57,89,87,55,88,55,56,88,86,54,87,54,55,87,85,53,86,53,54,86,84,52,85,52,53,85,83,51,84,51,52,84,82,50,83,50,51,83,};
        for (int i = 0; i < 324; i += 3) {
            keikiCenter.addFace(fa[i], fa[i+1], fa[i+2]);
        }
    }
#else
    keikiCenterVertexAdd();
    keikiCenterFaceAdd();
    keikiCenterUVVertexAdd();
    keikiCenterUVFaceAdd();
#endif
}
