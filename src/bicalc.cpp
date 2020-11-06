#include "../include/pch.h"
using namespace std;

Bicalc::Bicalc(int x, int y, double p){
    this->x = x;
    this->n = n;
    this->p = p;
    this->q = 1-p;
}

long double Bicalc::fact(int x){
    long double res = 1;
    for (int i = x; i > 1; i--){
        res *= i;
    }
    return res;
}

long double Bicalc::comb(int n,int r){
    long double res;
    res = fact(n) / (fact(n - r) * fact(r));
    return res;
}

long double Bicalc::pow(double p, int x){
    long double res = 1;
    if (x == 0){
        res = 1;
    }
    else if (x == 1){
        res = p;
    }
    else if (x < 0){
        res = 696969;
    }
    else {
        for (int i = i; i <= x; i++){
            res *= p;
        }
    }
    return res;
}

void Bicalc::compute(){
    long double resvec_buffer;
    for (int i = 0; i <= x; i++){
        
    }
}