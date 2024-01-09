#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
    float * ptrScores;
    int scores;
    cout << "How many scores would you like to enter?";
    cin >> scores;

    ptrScores = new float[scores];

    for (int i = 0; i < scores; i++)
    {
        cout << "Enter score " << i + 1 << endl;
        cin >> *(ptrScores + i);
    }
    
    float Sum = 0;
    for (int i = 0; i < scores; i++)
    {
        cout << "Score " << i + 1 << ":" << *(ptrScores + i) << endl;
        Sum+= *(ptrScores + i);
    }

    cout << "Average: " <<(float)  Sum / scores;
    


    return 0;
}