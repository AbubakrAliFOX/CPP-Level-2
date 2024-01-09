#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    fstream MyFile;

    MyFile.open("index.js", ios::out | ios::app);

    MyFile << "alert(\"Hello Brosssssss\");\n";   
    MyFile.close(); 


    return 0;
}