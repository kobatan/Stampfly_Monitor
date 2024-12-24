#pragma once
#include "E512W3D.hpp"
Mesh keikiwakuU;
    // keikiwakuU.vertex 34
    // keikiwakuU.face 32
    // keikiwakuU.uv_vertex 1
    // keikiwakuU.uv_face 0
#if defined(ARDUINO)
void keikiwakuUVertexAdd () {
    keikiwakuU.vertexs.reserve(34);
    keikiwakuU.vertexs.emplace_back(0.0, 1.514853, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.295533, 1.485746, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.579709, 1.399542, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.841608, 1.259555, 0.0);
    keikiwakuU.vertexs.emplace_back(-1.071163, 1.071163, 0.0);
    keikiwakuU.vertexs.emplace_back(-1.259555, 0.841608, 0.0);
    keikiwakuU.vertexs.emplace_back(-1.399542, 0.579709, 0.0);
    keikiwakuU.vertexs.emplace_back(-1.485746, 0.295533, 0.0);
    keikiwakuU.vertexs.emplace_back(-1.514853, 0.0, 0.0);
    keikiwakuU.vertexs.emplace_back(1.514853, 0.0, 0.0);
    keikiwakuU.vertexs.emplace_back(1.485746, 0.295533, 0.0);
    keikiwakuU.vertexs.emplace_back(1.399542, 0.579709, 0.0);
    keikiwakuU.vertexs.emplace_back(1.259555, 0.841608, 0.0);
    keikiwakuU.vertexs.emplace_back(1.071163, 1.071163, 0.0);
    keikiwakuU.vertexs.emplace_back(0.841608, 1.259555, 0.0);
    keikiwakuU.vertexs.emplace_back(0.579709, 1.399542, 0.0);
    keikiwakuU.vertexs.emplace_back(0.295533, 1.485746, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.0, 0.990895, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.193314, 0.971855, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.379199, 0.915468, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.550512, 0.823899, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.700669, 0.700669, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.823899, 0.550512, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.915468, 0.379199, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.971855, 0.193314, 0.0);
    keikiwakuU.vertexs.emplace_back(-0.990895, 0.0, 0.0);
    keikiwakuU.vertexs.emplace_back(0.990895, 0.0, 0.0);
    keikiwakuU.vertexs.emplace_back(0.971855, 0.193314, 0.0);
    keikiwakuU.vertexs.emplace_back(0.915468, 0.379199, 0.0);
    keikiwakuU.vertexs.emplace_back(0.823899, 0.550512, 0.0);
    keikiwakuU.vertexs.emplace_back(0.700669, 0.700669, 0.0);
    keikiwakuU.vertexs.emplace_back(0.550512, 0.823899, 0.0);
    keikiwakuU.vertexs.emplace_back(0.379199, 0.915468, 0.0);
    keikiwakuU.vertexs.emplace_back(0.193314, 0.971855, 0.0);
}
void keikiwakuUFaceAdd () {
    keikiwakuU.faces.reserve(32);
    keikiwakuU.faces.emplace_back(9, 10, 26);
    keikiwakuU.faces.emplace_back(10, 27, 26);
    keikiwakuU.faces.emplace_back(28, 27, 11);
    keikiwakuU.faces.emplace_back(27, 10, 11);
    keikiwakuU.faces.emplace_back(29, 28, 12);
    keikiwakuU.faces.emplace_back(28, 11, 12);
    keikiwakuU.faces.emplace_back(30, 29, 13);
    keikiwakuU.faces.emplace_back(29, 12, 13);
    keikiwakuU.faces.emplace_back(31, 30, 14);
    keikiwakuU.faces.emplace_back(30, 13, 14);
    keikiwakuU.faces.emplace_back(32, 31, 15);
    keikiwakuU.faces.emplace_back(31, 14, 15);
    keikiwakuU.faces.emplace_back(33, 32, 16);
    keikiwakuU.faces.emplace_back(32, 15, 16);
    keikiwakuU.faces.emplace_back(17, 33, 0);
    keikiwakuU.faces.emplace_back(33, 16, 0);
    keikiwakuU.faces.emplace_back(18, 17, 1);
    keikiwakuU.faces.emplace_back(17, 0, 1);
    keikiwakuU.faces.emplace_back(19, 18, 2);
    keikiwakuU.faces.emplace_back(18, 1, 2);
    keikiwakuU.faces.emplace_back(20, 19, 3);
    keikiwakuU.faces.emplace_back(19, 2, 3);
    keikiwakuU.faces.emplace_back(21, 20, 4);
    keikiwakuU.faces.emplace_back(20, 3, 4);
    keikiwakuU.faces.emplace_back(22, 21, 5);
    keikiwakuU.faces.emplace_back(21, 4, 5);
    keikiwakuU.faces.emplace_back(23, 22, 6);
    keikiwakuU.faces.emplace_back(22, 5, 6);
    keikiwakuU.faces.emplace_back(24, 23, 7);
    keikiwakuU.faces.emplace_back(23, 6, 7);
    keikiwakuU.faces.emplace_back(25, 24, 8);
    keikiwakuU.faces.emplace_back(24, 7, 8);
}
void keikiwakuUUVVertexAdd () {
}
void keikiwakuUUVFaceAdd () {
}
#endif
void keikiwakuUInit () {
#if !defined(ARDUINO)
    {
        keikiwakuU.vertexs.reserve(34);
        float va[] = {0.0,1.514853,0.0,-0.295533,1.485746,0.0,-0.579709,1.399542,0.0,-0.841608,1.259555,0.0,-1.071163,1.071163,0.0,-1.259555,0.841608,0.0,-1.399542,0.579709,0.0,-1.485746,0.295533,0.0,-1.514853,0.0,0.0,1.514853,0.0,0.0,1.485746,0.295533,0.0,1.399542,0.579709,0.0,1.259555,0.841608,0.0,1.071163,1.071163,0.0,0.841608,1.259555,0.0,0.579709,1.399542,0.0,0.295533,1.485746,0.0,-0.0,0.990895,0.0,-0.193314,0.971855,0.0,-0.379199,0.915468,0.0,-0.550512,0.823899,0.0,-0.700669,0.700669,0.0,-0.823899,0.550512,0.0,-0.915468,0.379199,0.0,-0.971855,0.193314,0.0,-0.990895,0.0,0.0,0.990895,0.0,0.0,0.971855,0.193314,0.0,0.915468,0.379199,0.0,0.823899,0.550512,0.0,0.700669,0.700669,0.0,0.550512,0.823899,0.0,0.379199,0.915468,0.0,0.193314,0.971855,0.0,};
        for (int i = 0; i < 102; i += 3) {
            keikiwakuU.addVertex(va[i], va[i+1], va[i+2]);
        }
    }
    {
        keikiwakuU.faces.reserve(32);
        int fa[] = {9,10,26,10,27,26,28,27,11,27,10,11,29,28,12,28,11,12,30,29,13,29,12,13,31,30,14,30,13,14,32,31,15,31,14,15,33,32,16,32,15,16,17,33,0,33,16,0,18,17,1,17,0,1,19,18,2,18,1,2,20,19,3,19,2,3,21,20,4,20,3,4,22,21,5,21,4,5,23,22,6,22,5,6,24,23,7,23,6,7,25,24,8,24,7,8,};
        for (int i = 0; i < 96; i += 3) {
            keikiwakuU.addFace(fa[i], fa[i+1], fa[i+2]);
        }
    }
#else
    keikiwakuUVertexAdd();
    keikiwakuUFaceAdd();
    keikiwakuUUVVertexAdd();
    keikiwakuUUVFaceAdd();
#endif
}
