#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
    int arr[] = {10, 20, 30 ,40, 50};
    int * pointer = arr;

    for (int i = 0; i < 5; i++)
    {
        cout << (pointer + i) << endl;
    }
    
    
    
    return 0;
}