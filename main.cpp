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
    cin >> size; //collects employee count

    Employee* employees = new Employee[size]; //dynamic employee array

    for(int i = 0; i < size; i++) { //populates employee structs within the array
        cout << "Information for employee #" << i + 1 << endl;
        cout << "------------------------------" << endl;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Total sales count: ";
        cin >> employees[i].numSales;
        employees[i].sales = new double[employees[i].numSales]; //the sales history array for each employee
        for(int j = 0; j < employees[i].numSales; j++) { //populates the history array
            cout << "Contract value of sale #" << j + 1 << " (in $'s): ";
            cin >> employees[i].sales[j];
        }
    }

    cout << "<<<Sales Database>>>"; //prints out the clean version of the employee information
    for(int i = 0; i < size; i++) {
        cout << "Employee #" << i << endl;
        cout << "    -Name: " << employees[i].name << endl;
        cout << "    -Total Sales: " << employees[i].numSales << endl;
        cout << "    -Sales History: " << endl;
        for(int j = 0; j < employees[i].numSales; j++) {
            cout << "        -  $";
            cout << employees[i].sales[j] << endl;
        }
    }

    for(int i = 0; i < size; i++){ //this cleans up all the sub arrays within each employee struct
        delete[] employees[i].sales;
    }

    delete[] employees; //deletes the allocated mem for the employee struct array
}