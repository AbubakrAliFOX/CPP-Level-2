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
void SaveVectorToFile (string FileName, vector <string> vFileContent) {
    fstream MyFile;

    MyFile.open(FileName, ios::out);
    if(MyFile.is_open()) {
        for (string &Line : vFileContent)
        {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }
        
    }
}

int main()
{
    vector<string> vFileContent;
    
    PrintFileToVector("index.js", vFileContent);

    for (string &Line : vFileContent)
    {
        cout << Line << endl;
    }
    
    // From v to file
    vector<string> vNames = {"Ahmad", "Khaled", "Mohammed", "Tara", "Neji", "Abdulla"};
    SaveVectorToFile("Names.txt", vNames);


    return 0;
}