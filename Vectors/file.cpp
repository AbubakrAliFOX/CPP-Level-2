#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int ReadNumber(string Msg)
{
    int Number;
    cout << Msg << endl;
    cin >> Number;

    return Number;
}

void AddToVector(int Number, vector<int> &Vector)
{
    Vector.push_back(Number);
}

void printVector (vector<int> &Vector) {
    for (int &i : Vector)
    {
        cout << i << endl;
    }
    
}

void FillVector()
{
    vector<int> Vector;
    char Answer;
    do
    {
        int Number = ReadNumber("Please Enter a Number: ");
        AddToVector(Number, Vector);
        cout << "Do you want to add more numbers? (y / n)" << endl;
        cin >> Answer;
    } while (Answer == 'y');

    printVector(Vector);
}

int main()
{
    FillVector();
    return 0;
}