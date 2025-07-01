#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <math.h>

struct vec2{
    float x;
    float y;
};

struct vec3{
    float x;
    float y;
    float z;
};

struct mat2{
    vec2 a;
    vec2 b;
};

struct mat3{
    vec3 a;
    vec3 b;
    vec3 c;
};

vec2 operator+(vec2 a, vec2 b){
    return vec2{a.x + b.x, a.y + b.y};
}

vec3 operator+(vec3 a, vec3 b){
    return vec3{a.x + b.x, a.y + b.y, a.z + b.z};
}

vec2 operator-(vec2 a, vec2 b){
    return vec2{a.x - b.x, a.y - b.y};
}

vec3 operator-(vec3 a, vec3 b){
    return vec3{a.x - b.x, a.y - b.y, a.z - b.z};
}

vec2 operator*(vec2 a, mat2 b){
    return vec2{a.x * b.a.x + a.y * b.a.y, a.x * b.b.x + a.y * b.b.y};
}

vec3 operator*(vec3 a, mat3 b){
    return vec3{
        a.x * b.a.x + a.y * b.a.y + a.z * b.a.z,
        a.x * b.b.x + a.y * b.b.y + a.z * b.b.z,
        a.x * b.c.x + a.y * b.c.y + a.z * b.c.z,
    };
}

//dot products
float operator*(vec2 a, vec2 b){
    return  a.x * b.x + a.y * b.y;
}

float operator*(vec3 a, vec3 b){
    return  a.x * b.x + a.y * b.y + a.z * b.z;
}

float length(vec2 a){
    return sqrt(a.x * a.x + a.y * a.y);
}

float length(vec3 a){
    return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

vec2 normalize(vec2 a){
    float len = length(a);
    return vec2{a.x/len, a.y/len};
}

vec3 normalize(vec3 a){
    float len = length(a);
    return vec3{a.x/len, a.y/len, a.z/len};
}

float min(float a, float b){
    return (a < b) ? a:b;
}

float max(float a, float b){
    return (a > b) ? a:b;
}

#endif