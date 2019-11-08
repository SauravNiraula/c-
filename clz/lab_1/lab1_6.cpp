#include <iostream>
// #include <cstring>
// #include <ctype>
using namespace std;

class Employee{

  static int total,mcnt,ecnt;     // Total Employees, Manager and Engineers Count
  string name,empid,desig;      // Employees Name, Id  and Designation
  bool c = true;          // check whether Employee :: check is executed

public:

    Employee(){

      total++;

    }

    void input(){

      cout << "Please Enter ID of Employee : ";
      cin >> empid;
      cout << "Please Enter Name of Employee : ";
      cin >> name;
      cout << "Please Enter His/Her Designation" << endl <<
              "Manager" << endl <<
              "Engineer" << endl <<
              "Others" << endl <<
              "::: ";
      cin >> desig;
      //
      // for (int j = 0; j <= strlen(desig) ; j++ )
      //   desig[i] = toupper(desig[i]);
      // cout << endl;

      cout << endl;

    }

    void output(){

      if ( c ){

        cout << "Employee ID: " << empid << endl << "Employee Name: " << name << endl <<
                "Designation: " << desig << endl << endl;

      }

      else{

        cout << "No of Engineers: " << ecnt << endl <<
                "No of Managers: " << mcnt << endl <<
                "Others: " << (total - ecnt - mcnt) << endl <<
                "Total No of Employees:: " << total << endl;

      }

    }

    void check(){

      if ( desig == "engineer" || desig == "ENGINEER" || desig == "Engineer"){

        ecnt++;

      }

      if ( desig == "manager" || desig == "MANAGER" || desig == "Manager"){

        mcnt++;

      }

      c = false;

    }

};

int Employee :: total = 0;
int Employee :: ecnt = 0;
int Employee :: mcnt = 0;

////////// Main Function //////////

int main(){

  int N;     // No of Employees

  cout << "Enter No of Employees" << endl;
  cin >> N;
  cout << endl;

  Employee employees[N];

  cout << "Enter details of all " << N << " Employees" << endl << endl;

  for ( int i = 0 ; i < N ; i++ ){
    employees[i].input();
    employees[i].output();
    employees[i].check();
  }

  employees[0].output();

  return 0;
}
