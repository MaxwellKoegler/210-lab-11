//Maxwell Koegler | COMSC 210 | lab 11

#include <string>
#include <iostream>

using namespace std;

//this struct stores recent deals and quota information of employees
struct Employee {
    string name;
    int numSales;
    double* sales;
};


int main() {
    int size;
    cout << "How many sales employees would you like in your database? ";
    cin >> size;

    Employee* employees = new Employee[size];

    for(int i = 0; i < size; i++) {
        cout << "Information for employee # " << size << endl;
        cout << "------------------------------" << endl;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Total sales count: ";
        cin >> employees[i].numSales;
        for(int j = 0; i < employees[i].numSales; j++) {
            
        }

    }
}