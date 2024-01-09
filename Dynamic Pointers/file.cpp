#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
    int * ptrInt;
    float * ptrFlt;

    ptrInt = new int;
    ptrFlt = new float;


    *ptrInt = 33;
    *ptrFlt = 32.2;

    cout << * ptrInt << endl;
    cout << * ptrFlt << endl;
    
    delete ptrInt;
    delete ptrFlt;
    
    cout << * ptrInt << endl;
    cout << * ptrFlt << endl;
    return 0;
}