#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void PrintFileToVector(string FileName, vector<string> &vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }

        MyFile.close();
    }
}
void SaveVectorToFile(string FileName, vector<string> vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out);
    if (MyFile.is_open())
    {
        for (string &Line : vFileContent)
        {
            if (Line != "")
            {
                MyFile << Line << endl;
            }
        }
    }
}

void PrintFile(string FileName)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }

        MyFile.close();
    }
}

void DeleteFromFile(string FileName, string Record)
{
    fstream MyFile;
    vector<string> vNames;
    PrintFileToVector(FileName, vNames);

    for (string &Line : vNames) 
    {
        if (Line == Record) {
            Line = "";
        }
    }

    SaveVectorToFile(FileName, vNames);
}

void FindAndUpdate(string FileName, string Record, string NewRecord)
{
    fstream MyFile;
    vector<string> vNames;
    PrintFileToVector(FileName, vNames);

    for (string &Line : vNames) 
    {
        if (Line == Record) {
            Line = NewRecord;
        }
    }

    SaveVectorToFile(FileName, vNames);
}

int main()
{

    PrintFile("Names.txt");

    // DeleteFromFile("Names.txt", "Neji");

    // cout << "\n \n After deleting: \n \n";
    // PrintFile("Names.txt");

    FindAndUpdate("Names.txt", "Tara", "Jojo");

    cout << "\n \n After upadting: \n \n";
    PrintFile("Names.txt");


    return 0;
}