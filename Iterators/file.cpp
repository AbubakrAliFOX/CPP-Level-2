#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
    vector<int> scores = {10, 20, 30, 40, 50};

    vector<int>::iterator iter;

    for (iter = scores.begin(); iter != scores.end(); iter++) {
        cout << *iter << endl;
    }
    


    return 0;
}