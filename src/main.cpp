#include "../include/pch.h"
#include "../include/bicalc.h"
using namespace std;

int main() {
    int x,n,repeat = 1;
    double p;

    do {
        cout << "Welcome to Binomial Calculator v.0 ! \n(C) 2020 Christopher Digno" << endl;
        cout << "n = ";
        cin >> n;
        cout << "0 ≤ x ≤ ";
        cin >> x;
        cout << "p in decimal: ";
        cin >> p;

        Bicalc o_calc(x,n,p);
        o_calc.compute();
        o_calc.printres();

        cout << "Do you want to repeat the process? (0/1) \n> ";
        cin >> repeat;
    } while (repeat == 1);
}