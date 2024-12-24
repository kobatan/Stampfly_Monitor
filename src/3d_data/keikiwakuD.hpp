#pragma once
#include "E512W3D.hpp"
Mesh keikiwakuD;
    // keikiwakuD.vertex 34
    // keikiwakuD.face 32
    // keikiwakuD.uv_vertex 1
    // keikiwakuD.uv_face 0
#if defined(ARDUINO)
void keikiwakuDVertexAdd () {
    keikiwakuD.vertexs.reserve(34);
    keikiwakuD.vertexs.emplace_back(-0.0, -1.514853, 0.0);
    keikiwakuD.vertexs.emplace_back(0.295533, -1.485746, 0.0);
    keikiwakuD.vertexs.emplace_back(0.579709, -1.399542, 0.0);
    keikiwakuD.vertexs.emplace_back(0.841607, -1.259555, 0.0);
    keikiwakuD.vertexs.emplace_back(1.071163, -1.071164, 0.0);
    keikiwakuD.vertexs.emplace_back(1.259554, -0.841608, 0.0);
    keikiwakuD.vertexs.emplace_back(1.399542, -0.57971, 0.0);
    keikiwakuD.vertexs.emplace_back(1.485746, -0.295534, 0.0);
    keikiwakuD.vertexs.emplace_back(1.514853, -0.0, 0.0);
    keikiwakuD.vertexs.emplace_back(-1.514853, 0.0, 0.0);
    keikiwakuD.vertexs.emplace_back(-1.485746, -0.295533, 0.0);
    keikiwakuD.vertexs.emplace_back(-1.399542, -0.579709, 0.0);
    keikiwakuD.vertexs.emplace_back(-1.259555, -0.841607, 0.0);
    keikiwakuD.vertexs.emplace_back(-1.071164, -1.071163, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.841608, -1.259554, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.57971, -1.399542, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.295534, -1.485746, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.0, -0.990895, 0.0);
    keikiwakuD.vertexs.emplace_back(0.193314, -0.971855, 0.0);
    keikiwakuD.vertexs.emplace_back(0.379199, -0.915468, 0.0);
    keikiwakuD.vertexs.emplace_back(0.550512, -0.823899, 0.0);
    keikiwakuD.vertexs.emplace_back(0.700668, -0.700669, 0.0);
    keikiwakuD.vertexs.emplace_back(0.823899, -0.550512, 0.0);
    keikiwakuD.vertexs.emplace_back(0.915468, -0.379199, 0.0);
    keikiwakuD.vertexs.emplace_back(0.971855, -0.193314, 0.0);
    keikiwakuD.vertexs.emplace_back(0.990895, -0.0, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.990895, 0.0, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.971855, -0.193314, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.915468, -0.379199, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.823899, -0.550512, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.700669, -0.700668, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.550512, -0.823899, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.379199, -0.915468, 0.0);
    keikiwakuD.vertexs.emplace_back(-0.193314, -0.971855, 0.0);
}
void keikiwakuDFaceAdd () {
    keikiwakuD.faces.reserve(32);
    keikiwakuD.faces.emplace_back(9, 10, 26);
    keikiwakuD.faces.emplace_back(10, 27, 26);
    keikiwakuD.faces.emplace_back(28, 27, 11);
    keikiwakuD.faces.emplace_back(27, 10, 11);
    keikiwakuD.faces.emplace_back(29, 28, 12);
    keikiwakuD.faces.emplace_back(28, 11, 12);
    keikiwakuD.faces.emplace_back(30, 29, 13);
    keikiwakuD.faces.emplace_back(29, 12, 13);
    keikiwakuD.faces.emplace_back(31, 30, 14);
    keikiwakuD.faces.emplace_back(30, 13, 14);
    keikiwakuD.faces.emplace_back(32, 31, 15);
    keikiwakuD.faces.emplace_back(31, 14, 15);
    keikiwakuD.faces.emplace_back(33, 32, 16);
    keikiwakuD.faces.emplace_back(32, 15, 16);
    keikiwakuD.faces.emplace_back(17, 33, 0);
    keikiwakuD.faces.emplace_back(33, 16, 0);
    keikiwakuD.faces.emplace_back(18, 17, 1);
    keikiwakuD.faces.emplace_back(17, 0, 1);
    keikiwakuD.faces.emplace_back(19, 18, 2);
    keikiwakuD.faces.emplace_back(18, 1, 2);
    keikiwakuD.faces.emplace_back(20, 19, 3);
    keikiwakuD.faces.emplace_back(19, 2, 3);
    keikiwakuD.faces.emplace_back(21, 20, 4);
    keikiwakuD.faces.emplace_back(20, 3, 4);
    keikiwakuD.faces.emplace_back(22, 21, 5);
    keikiwakuD.faces.emplace_back(21, 4, 5);
    keikiwakuD.faces.emplace_back(23, 22, 6);
    keikiwakuD.faces.emplace_back(22, 5, 6);
    keikiwakuD.faces.emplace_back(24, 23, 7);
    keikiwakuD.faces.emplace_back(23, 6, 7);
    keikiwakuD.faces.emplace_back(25, 24, 8);
    keikiwakuD.faces.emplace_back(24, 7, 8);
}
void keikiwakuDUVVertexAdd () {
}
void keikiwakuDUVFaceAdd () {
}
#endif
void keikiwakuDInit () {
#if !defined(ARDUINO)
    {
        keikiwakuD.vertexs.reserve(34);
        float va[] = {-0.0,-1.514853,0.0,0.295533,-1.485746,0.0,0.579709,-1.399542,0.0,0.841607,-1.259555,0.0,1.071163,-1.071164,0.0,1.259554,-0.841608,0.0,1.399542,-0.57971,0.0,1.485746,-0.295534,0.0,1.514853,-0.0,0.0,-1.514853,0.0,0.0,-1.485746,-0.295533,0.0,-1.399542,-0.579709,0.0,-1.259555,-0.841607,0.0,-1.071164,-1.071163,0.0,-0.841608,-1.259554,0.0,-0.57971,-1.399542,0.0,-0.295534,-1.485746,0.0,-0.0,-0.990895,0.0,0.193314,-0.971855,0.0,0.379199,-0.915468,0.0,0.550512,-0.823899,0.0,0.700668,-0.700669,0.0,0.823899,-0.550512,0.0,0.915468,-0.379199,0.0,0.971855,-0.193314,0.0,0.990895,-0.0,0.0,-0.990895,0.0,0.0,-0.971855,-0.193314,0.0,-0.915468,-0.379199,0.0,-0.823899,-0.550512,0.0,-0.700669,-0.700668,0.0,-0.550512,-0.823899,0.0,-0.379199,-0.915468,0.0,-0.193314,-0.971855,0.0,};
        for (int i = 0; i < 102; i += 3) {
            keikiwakuD.addVertex(va[i], va[i+1], va[i+2]);
        }
    }
    {
        keikiwakuD.faces.reserve(32);
        int fa[] = {9,10,26,10,27,26,28,27,11,27,10,11,29,28,12,28,11,12,30,29,13,29,12,13,31,30,14,30,13,14,32,31,15,31,14,15,33,32,16,32,15,16,17,33,0,33,16,0,18,17,1,17,0,1,19,18,2,18,1,2,20,19,3,19,2,3,21,20,4,20,3,4,22,21,5,21,4,5,23,22,6,22,5,6,24,23,7,23,6,7,25,24,8,24,7,8,};
        for (int i = 0; i < 96; i += 3) {
            keikiwakuD.addFace(fa[i], fa[i+1], fa[i+2]);
        }
    }
#else
    keikiwakuDVertexAdd();
    keikiwakuDFaceAdd();
    keikiwakuDUVVertexAdd();
    keikiwakuDUVFaceAdd();
#endif
}
