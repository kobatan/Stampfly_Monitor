#pragma once
#include "E512W3D.hpp"
Mesh keikimagV;
    // keikimagV.vertex 16
    // keikimagV.face 8
    // keikimagV.uv_vertex 1
    // keikimagV.uv_face 0
#if defined(ARDUINO)
void keikimagVVertexAdd () {
    keikimagV.vertexs.reserve(16);
    keikimagV.vertexs.emplace_back(-1.26614, 1.351415, 0.0);
    keikimagV.vertexs.emplace_back(-1.361569, 1.255214, 0.0);
    keikimagV.vertexs.emplace_back(-1.349622, -1.267919, -0.0);
    keikimagV.vertexs.emplace_back(-1.257007, -1.35979, -0.0);
    keikimagV.vertexs.emplace_back(1.265528, -1.352032, -0.0);
    keikimagV.vertexs.emplace_back(1.362181, -1.254597, -0.0);
    keikimagV.vertexs.emplace_back(1.352424, 1.265139, 0.0);
    keikimagV.vertexs.emplace_back(1.254205, 1.36257, 0.0);
    keikimagV.vertexs.emplace_back(1.144175, -1.134996, -0.0);
    keikimagV.vertexs.emplace_back(1.144175, -1.134996, -0.0);
    keikimagV.vertexs.emplace_back(1.134996, 1.144175, 0.0);
    keikimagV.vertexs.emplace_back(1.134996, 1.144175, 0.0);
    keikimagV.vertexs.emplace_back(-1.144175, 1.134996, 0.0);
    keikimagV.vertexs.emplace_back(-1.144175, 1.134996, 0.0);
    keikimagV.vertexs.emplace_back(-1.134996, -1.144175, -0.0);
    keikimagV.vertexs.emplace_back(-1.134996, -1.144175, -0.0);
}
void keikimagVFaceAdd () {
    keikimagV.faces.reserve(8);
    keikimagV.faces.emplace_back(4, 5, 8);
    keikimagV.faces.emplace_back(5, 9, 8);
    keikimagV.faces.emplace_back(6, 7, 10);
    keikimagV.faces.emplace_back(7, 11, 10);
    keikimagV.faces.emplace_back(0, 1, 12);
    keikimagV.faces.emplace_back(1, 13, 12);
    keikimagV.faces.emplace_back(2, 3, 14);
    keikimagV.faces.emplace_back(3, 15, 14);
}
void keikimagVUVVertexAdd () {
}
void keikimagVUVFaceAdd () {
}
#endif
void keikimagVInit () {
#if !defined(ARDUINO)
    {
        keikimagV.vertexs.reserve(16);
        float va[] = {-1.26614,1.351415,0.0,-1.361569,1.255214,0.0,-1.349622,-1.267919,-0.0,-1.257007,-1.35979,-0.0,1.265528,-1.352032,-0.0,1.362181,-1.254597,-0.0,1.352424,1.265139,0.0,1.254205,1.36257,0.0,1.144175,-1.134996,-0.0,1.144175,-1.134996,-0.0,1.134996,1.144175,0.0,1.134996,1.144175,0.0,-1.144175,1.134996,0.0,-1.144175,1.134996,0.0,-1.134996,-1.144175,-0.0,-1.134996,-1.144175,-0.0,};
        for (int i = 0; i < 48; i += 3) {
            keikimagV.addVertex(va[i], va[i+1], va[i+2]);
        }
    }
    {
        keikimagV.faces.reserve(8);
        int fa[] = {4,5,8,5,9,8,6,7,10,7,11,10,0,1,12,1,13,12,2,3,14,3,15,14,};
        for (int i = 0; i < 24; i += 3) {
            keikimagV.addFace(fa[i], fa[i+1], fa[i+2]);
        }
    }
#else
    keikimagVVertexAdd();
    keikimagVFaceAdd();
    keikimagVUVVertexAdd();
    keikimagVUVFaceAdd();
#endif
}
