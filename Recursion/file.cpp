#include <iostream>
#include <cmath>
using namespace std;

void PrintNumberInRange (int From, int To) {
    if (From >= To) {
        cout << From << endl;
        PrintNumberInRange(From - 1, To);
    }
}


void Power (int Number, int exp) {
    if (exp >= 1) {
        cout << pow(Number, exp) << endl;
        Power(Number, exp - 1);
    }
}

int main () {

    // PrintNumberInRange(10, 1);
    Power(2, 5);

    return 0;
}