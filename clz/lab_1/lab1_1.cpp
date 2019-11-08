#include <iostream>
using namespace std;

class Dist{                      // Distance Class

  int ft,in;                    // Feet and Inch

public:

  void input(){                // Get Input

    cout << "Enter feet: ";
    cin >> ft;
    cout << "Enter inch: ";
    cin >> in;

  }

  void output(){                // Display Data

    cout<<"Total Feet: "<<ft<<endl
        <<"Total Inch: "<<in<<endl;

  }

// Dist add(Dist d1){}

  Dist add( Dist d1, Dist d2){             // Add Two Distance

    Dist d3;

    d3.in = d1.in + d2.in;
    d3.ft = d1.ft + d2.ft + d3.in / 12;
    d3.in = d3.in % 12;

    return d3;

  }

// Dist add( Dist d1, Dist d2){             // Add Two Distance

//     in = d1.in + d2.in;
//     ft = d1.ft + d2.ft + in / 12;
//     in = in % 12;

//   }

//   d3.add(d1,d2)

};

/////////////////////   Main Function ////////////////////////


int main(){

  bool check = true;

  while (check){

    Dist d1,d2,d3;

      d1.input();
      d2.input();
      //d1.output();
      //d2.output();

      d3 = d3.add(d1, d2);      // Adding Two Distances

      d3.output();

      char c;

      cout << "Do You Wanna run this program again ?" << endl <<         // Run Again
              "Write 'y' is yes and 'n' if no..." << endl;

      cin >> c;
      if ( c == 'n'){
          check = false;
          cout << "Please Remember me Later  Byee........";
      }
      else if ( c == 'y'){
          cout << "Welcome Back Again....." << endl;
      }
      else{
          cout << "I dont think you are in a Mood" << endl <<
                  "Join me after some minutes..."<< endl;
          check = false;
      }
  }

  return 0;
}
