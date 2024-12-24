#pragma once
#include "E512W3D.hpp"
Mesh plane;
    // plane.vertex 4
    // plane.face 2
    // plane.uv_vertex 4
    // plane.uv_face 0
#if defined(ARDUINO)
void planeVertexAdd () {
    plane.vertexs.reserve(4);
    plane.vertexs.emplace_back(-1.0, -1.0, -0.0);
    plane.vertexs.emplace_back(1.0, -1.0, -0.0);
    plane.vertexs.emplace_back(-1.0, 1.0, 0.0);
    plane.vertexs.emplace_back(1.0, 1.0, 0.0);
}
void planeFaceAdd () {
    plane.faces.reserve(2);
    plane.faces.emplace_back(0, 1, 2);
    plane.faces.emplace_back(1, 3, 2);
}
void planeUVVertexAdd () {
}
void planeUVFaceAdd () {
}
#endif
void planeInit () {
#if !defined(ARDUINO)
    {
        plane.vertexs.reserve(4);
        float va[] = {-1.0,-1.0,-0.0,1.0,-1.0,-0.0,-1.0,1.0,0.0,1.0,1.0,0.0,};
        for (int i = 0; i < 12; i += 3) {
            plane.addVertex(va[i], va[i+1], va[i+2]);
        }
    }
    {
        plane.faces.reserve(2);
        int fa[] = {0,1,2,1,3,2,};
        for (int i = 0; i < 6; i += 3) {
            plane.addFace(fa[i], fa[i+1], fa[i+2]);
        }
    }
#else
    planeVertexAdd();
    planeFaceAdd();
    planeUVVertexAdd();
    planeUVFaceAdd();
#endif
}
