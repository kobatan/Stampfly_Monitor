#pragma once
#include "E512W3D.hpp"
Mesh keiki2;
    // keiki2.vertex 8
    // keiki2.face 12
    // keiki2.uv_vertex 14
    // keiki2.uv_face 0
#if defined(ARDUINO)
void keiki2VertexAdd () {
    keiki2.vertexs.reserve(8);
    keiki2.vertexs.emplace_back(-1.0, -1.0, 1.0);
    keiki2.vertexs.emplace_back(-1.0, 1.0, 1.0);
    keiki2.vertexs.emplace_back(-1.0, -1.0, -1.0);
    keiki2.vertexs.emplace_back(-1.0, 1.0, -1.0);
    keiki2.vertexs.emplace_back(1.0, -1.0, 1.0);
    keiki2.vertexs.emplace_back(1.0, 1.0, 1.0);
    keiki2.vertexs.emplace_back(1.0, -1.0, -1.0);
    keiki2.vertexs.emplace_back(1.0, 1.0, -1.0);
}
void keiki2FaceAdd () {
    keiki2.faces.reserve(12);
    keiki2.faces.emplace_back(0, 1, 2);
    keiki2.faces.emplace_back(1, 3, 2);
    keiki2.faces.emplace_back(2, 3, 6);
    keiki2.faces.emplace_back(3, 7, 6);
    keiki2.faces.emplace_back(6, 7, 4);
    keiki2.faces.emplace_back(7, 5, 4);
    keiki2.faces.emplace_back(4, 5, 0);
    keiki2.faces.emplace_back(5, 1, 0);
    keiki2.faces.emplace_back(2, 6, 0);
    keiki2.faces.emplace_back(6, 4, 0);
    keiki2.faces.emplace_back(7, 3, 5);
    keiki2.faces.emplace_back(3, 1, 5);
}
void keiki2UVVertexAdd () {
}
void keiki2UVFaceAdd () {
}
#endif
void keiki2Init () {
#if !defined(ARDUINO)
    {
        keiki2.vertexs.reserve(8);
        float va[] = {-1.0,-1.0,1.0,-1.0,1.0,1.0,-1.0,-1.0,-1.0,-1.0,1.0,-1.0,1.0,-1.0,1.0,1.0,1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,-1.0,};
        for (int i = 0; i < 24; i += 3) {
            keiki2.addVertex(va[i], va[i+1], va[i+2]);
        }
    }
    {
        keiki2.faces.reserve(12);
        int fa[] = {0,1,2,1,3,2,2,3,6,3,7,6,6,7,4,7,5,4,4,5,0,5,1,0,2,6,0,6,4,0,7,3,5,3,1,5,};
        for (int i = 0; i < 36; i += 3) {
            keiki2.addFace(fa[i], fa[i+1], fa[i+2]);
        }
    }
#else
    keiki2VertexAdd();
    keiki2FaceAdd();
    keiki2UVVertexAdd();
    keiki2UVFaceAdd();
#endif
}
