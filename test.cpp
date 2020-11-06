#include <iostream>
using namespace std;

long double fact(int x){
    long double res = 1;
    for (int i = x; i > 1; i--){
        res *= i;
    }
    return res;
}
long double apow(double p, int x){
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
        for (int i = 1; i <= x; i++){
            res *= p;
        }
    }
    return res;
}

int main(){
    long double res;
    res = apow(18,5);
    cout << fixed << res << endl;
}