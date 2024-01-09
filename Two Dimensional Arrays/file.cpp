#include <iostream>
#include <cmath>
using namespace std;

void MultiplicationTable(int Number)
{
    int Table[100][100];

    for (int i = 1; i <= Number; i++)
    {
        for (int j = 1; j <= Number; j++)
        {
            
            Table[i-1][j-1] = (i) * (j);
            
        }
    }
}

void PrintTable(int Number)
{
    int Table[100][100];

    for (int i = 0; i < Number; i++)
    {
        for (int j = 0; j < Number; j++)
        {
            cout << Table[i][j] << endl;
        }
        cout << endl;
    }
}

int main()
{

    MultiplicationTable(10);
    PrintTable(10);

    return 0;
}