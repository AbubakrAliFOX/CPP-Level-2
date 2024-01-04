#include <iostream>
using namespace std;

void Func1 ();

void Func4 () {
    cout << "From 4" << endl;
} 


void Func3 () {
    cout << "From 3" << endl;
    Func4();
} 


void Func2 () {
    cout << "From 2" << endl;
    Func3();
} 


void Func1 () {
    cout << "From 1" << endl;
    Func2();
} 

int main () {

    Func1();

    return 0;
}