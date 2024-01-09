#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void PrintFileToVector(string FileName, vector<string> &vFileContent) {
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            vFileContent.push_back(Line);
        }

        MyFile.close();
    }
}

int main()
{
    vector<string> vFileContent;
    PrintFileToVector("index.js", vFileContent);

    for (auto &Line : vFileContent)
    {
        cout << Line << endl;
    }
    


    return 0;
}