#include <iostream>
#include <fstream>
using namespace std;

void PrintFile(string FileName) {
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            cout << Line << endl;
        }

        MyFile.close();
    }
}

int main()
{
    PrintFile("index.js");


    return 0;
}