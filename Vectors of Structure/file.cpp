#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct stEmployee
{
    string Name;
    int Age, Salary;
};


stEmployee ReadData(string Msg)
{
    stEmployee Employee;
    cout << Msg << endl;

    cout << "Please Enter Name" << endl;
    cin >> Employee.Name;
    cout << "Please Enter Age" << endl;
    cin >> Employee.Age;
    cout << "Please Enter Salary" << endl;
    cin >> Employee.Salary;

    return Employee;
}

void AddToVector(stEmployee CurrentEmployee, vector<stEmployee> &Employee)
{
    Employee.push_back(CurrentEmployee);
}

void printVector (vector<stEmployee> &Employee) {
    for (stEmployee &CurrentEmployee : Employee)
    {
        cout << "Name: " << CurrentEmployee.Name << endl;
        cout << "Age: " << CurrentEmployee.Age << endl;
        cout << "Salary: " << CurrentEmployee.Salary << endl;
        cout << "\n \n";
    }
    
}

void FillVector()
{
    vector<stEmployee> Employee;
    char Answer;
    do
    {
        stEmployee CurrentEmployee = ReadData("Please enter the employee's data: ");
        AddToVector(CurrentEmployee, Employee);
        cout << "Do you want to add more numbers? (y / n)" << endl;
        cin >> Answer;
    } while (Answer == 'y');

    printVector(Employee);
}

int main()
{
    FillVector();
    return 0;
}