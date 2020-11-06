#include "../include/pch.h"
using namespace std;

int main() {
    int x,n;
    double p;

    cout << "Welcome to Binomial Calculator v.0 ! \n(C) 2020 Christopher Digno" << endl;
    cout << "n = ";
    cin >> n;
    cout << "0 ≤ x ≤ ";
    cin >> x;
    cout << "p in decimal: ";
    cin >> p;

    Bicalc o_calc(x,n,p);



}