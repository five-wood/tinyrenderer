//
// Created by Administrator on 2025/11/14.
//

#include "Model.h"

Model::Model(const std::string filename) {
    // TODO: 实现构造函数
}

int Model::nverts() const {
    return 0;
}

int Model::nfaces() const {
    return 0;
}

vec4 Model::vert(const int i) const {
    return vec4{};
}

vec4 Model::vert(const int iface, const int nthvert) const {
    return vec4{};
}

vec4 Model::normal(const int iface, const int nthvert) const {
    return vec4{};
}

vec4 Model::normal(const vec2 &uv) const {
    return vec4{};
}

vec2 Model::uv(const int iface, const int nthvert) const {
    return vec2{};
}

const TGAImage& Model::diffuse() const {
    return diffusemap;
}

const TGAImage& Model::specular() const {
    return specularmap;
}