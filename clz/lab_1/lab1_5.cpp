#include <iostream>
using namespace std;


class Employee{

  string name;     // Name Of Employee
  long unsigned int basicsal,netsal,grosssal;     // Basic Salary and Net Salary and Gross Salary
  const int da = 52;  const int it = 30;      // DA and Income Tax

public:

  // Employee(){     // Constructor

  //   sn = 0;

  // }n
  int sn;     // Employee Number

  void input(){

    cout << "Please Enter Name of Employee : ";
    cin >> name;
    cout << "Please Enter His/Her Basic Salary : Rs ";
    cin >> basicsal;
    cout << endl;

  }

  void output(){

    cout << "Employee no: " << sn << endl << "Employee Name: " << name << endl <<
            "Net Salary: " << netsal << endl << endl;


  }

  void comsal(){      // Computing Net Salary

    grosssal = ( basicsal * da / 100 ) + basicsal;
    netsal = grosssal - ( grosssal * it / 100 );

  }

};

/////////// Main Function ///////////

int main(){

    int N;     // No of Employees

    cout << "Enter No of Employees" << endl;
    cin >> N;

    Employee employees[N];

    for ( int i = 0 ; i < N ; i++ ){
      employees[i].input();
      employees[i].comsal();
      employees[i].sn = i + 1 ;
    }


    for ( int i = 0 ; i < N ; i++ ){
      employees[i].output();
    }

  return 0;
}
