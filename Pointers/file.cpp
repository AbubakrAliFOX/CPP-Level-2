#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void swap (int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int a = 10, b = 39;

    cout << "Before swapping: " << a << " " << b << endl;
    
    swap(&a,&b);
    
    cout << "After swapping: " << a << " " << b << endl;

    cout << &a << endl;
    cout << &b << endl;
    return 0;
}