#pragma once
#include "E512W3D.hpp"
Mesh keikimagN;
    // keikimagN.vertex 28
    // keikimagN.face 18
    // keikimagN.uv_vertex 1
    // keikimagN.uv_face 0
#if defined(ARDUINO)
void keikimagNVertexAdd () {
    keikimagN.vertexs.reserve(28);
    keikimagN.vertexs.emplace_back(-1.26614, 1.351415, 0.0);
    keikimagN.vertexs.emplace_back(-1.361569, 1.255214, 0.0);
    keikimagN.vertexs.emplace_back(-1.349622, -1.267919, -0.0);
    keikimagN.vertexs.emplace_back(-1.257007, -1.35979, -0.0);
    keikimagN.vertexs.emplace_back(1.265528, -1.352032, -0.0);
    keikimagN.vertexs.emplace_back(1.362181, -1.254597, -0.0);
    keikimagN.vertexs.emplace_back(1.352424, 1.265139, 0.0);
    keikimagN.vertexs.emplace_back(1.254205, 1.36257, 0.0);
    keikimagN.vertexs.emplace_back(1.144175, -1.134996, -0.0);
    keikimagN.vertexs.emplace_back(1.144175, -1.134996, -0.0);
    keikimagN.vertexs.emplace_back(1.134996, 1.144175, 0.0);
    keikimagN.vertexs.emplace_back(1.134996, 1.144175, 0.0);
    keikimagN.vertexs.emplace_back(-1.144175, 1.134996, 0.0);
    keikimagN.vertexs.emplace_back(-1.144175, 1.134996, 0.0);
    keikimagN.vertexs.emplace_back(-1.134996, -1.144175, -0.0);
    keikimagN.vertexs.emplace_back(-1.134996, -1.144175, -0.0);
    keikimagN.vertexs.emplace_back(0.120516, 1.835244, 0.0);
    keikimagN.vertexs.emplace_back(0.080826, 1.835244, 0.0);
    keikimagN.vertexs.emplace_back(0.080826, 1.607462, 0.0);
    keikimagN.vertexs.emplace_back(-0.118483, 1.835244, 0.0);
    keikimagN.vertexs.emplace_back(-0.152133, 1.835244, 0.0);
    keikimagN.vertexs.emplace_back(-0.152133, 1.541026, 0.0);
    keikimagN.vertexs.emplace_back(-0.112444, 1.541026, 0.0);
    keikimagN.vertexs.emplace_back(-0.112444, 1.767514, 0.0);
    keikimagN.vertexs.emplace_back(0.084278, 1.541026, 0.0);
    keikimagN.vertexs.emplace_back(0.120516, 1.541026, 0.0);
    keikimagN.vertexs.emplace_back(-0.152133, 1.767065, 0.0);
    keikimagN.vertexs.emplace_back(0.120516, 1.607181, 0.0);
}
void keikimagNFaceAdd () {
    keikimagN.faces.reserve(18);
    keikimagN.faces.emplace_back(4, 5, 8);
    keikimagN.faces.emplace_back(5, 9, 8);
    keikimagN.faces.emplace_back(6, 7, 10);
    keikimagN.faces.emplace_back(7, 11, 10);
    keikimagN.faces.emplace_back(0, 1, 12);
    keikimagN.faces.emplace_back(1, 13, 12);
    keikimagN.faces.emplace_back(2, 3, 14);
    keikimagN.faces.emplace_back(3, 15, 14);
    keikimagN.faces.emplace_back(25, 27, 24);
    keikimagN.faces.emplace_back(27, 18, 24);
    keikimagN.faces.emplace_back(20, 26, 19);
    keikimagN.faces.emplace_back(26, 23, 19);
    keikimagN.faces.emplace_back(26, 21, 23);
    keikimagN.faces.emplace_back(21, 22, 23);
    keikimagN.faces.emplace_back(17, 18, 16);
    keikimagN.faces.emplace_back(18, 27, 16);
    keikimagN.faces.emplace_back(18, 19, 24);
    keikimagN.faces.emplace_back(19, 23, 24);
}
void keikimagNUVVertexAdd () {
}
void keikimagNUVFaceAdd () {
}
#endif
void keikimagNInit () {
#if !defined(ARDUINO)
    {
        keikimagN.vertexs.reserve(28);
        float va[] = {-1.26614,1.351415,0.0,-1.361569,1.255214,0.0,-1.349622,-1.267919,-0.0,-1.257007,-1.35979,-0.0,1.265528,-1.352032,-0.0,1.362181,-1.254597,-0.0,1.352424,1.265139,0.0,1.254205,1.36257,0.0,1.144175,-1.134996,-0.0,1.144175,-1.134996,-0.0,1.134996,1.144175,0.0,1.134996,1.144175,0.0,-1.144175,1.134996,0.0,-1.144175,1.134996,0.0,-1.134996,-1.144175,-0.0,-1.134996,-1.144175,-0.0,0.120516,1.835244,0.0,0.080826,1.835244,0.0,0.080826,1.607462,0.0,-0.118483,1.835244,0.0,-0.152133,1.835244,0.0,-0.152133,1.541026,0.0,-0.112444,1.541026,0.0,-0.112444,1.767514,0.0,0.084278,1.541026,0.0,0.120516,1.541026,0.0,-0.152133,1.767065,0.0,0.120516,1.607181,0.0,};
        for (int i = 0; i < 84; i += 3) {
            keikimagN.addVertex(va[i], va[i+1], va[i+2]);
        }
    }
    {
        keikimagN.faces.reserve(18);
        int fa[] = {4,5,8,5,9,8,6,7,10,7,11,10,0,1,12,1,13,12,2,3,14,3,15,14,25,27,24,27,18,24,20,26,19,26,23,19,26,21,23,21,22,23,17,18,16,18,27,16,18,19,24,19,23,24,};
        for (int i = 0; i < 54; i += 3) {
            keikimagN.addFace(fa[i], fa[i+1], fa[i+2]);
        }
    }
#else
    keikimagNVertexAdd();
    keikimagNFaceAdd();
    keikimagNUVVertexAdd();
    keikimagNUVFaceAdd();
#endif
}
