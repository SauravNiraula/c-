#include <iostream>
using namespace std;

class US;
class Nepal{

  float amt,dol;     // Amount in rs and $
  float drrate = 101.36;      //Rupees to Dollar conversion rate

public:

  void input(){

    cout << "Enter Rupees: ";
    cin >> amt;
    cout << endl;

    dol = amt / drrate;

  }

  float dollar(){
    return dol;
  }

  float rupee(){
    return amt;
  }

  friend bool operator < ( US &, Nepal &);
  friend bool operator > ( US &, Nepal &);
  friend bool operator == ( US &, Nepal &);

};

class US{

  float dol,amt;       // Amount in $ and rs
  float rdrate = 101.36;      // Dollar to Rupees conversion rate

public:

  void input(){

    cout << "Enter Dollar: ";
    cin >> dol;
    cout << endl;

    amt = dol * rdrate;

  }

  float dollar(){
    return dol;
  }

  float rupee(){
    return amt;
  }


  friend bool operator < ( US &, Nepal &);
  friend bool operator > ( US &, Nepal &);
  friend bool operator == ( US &, Nepal &);

};

bool operator < (US &A, Nepal &B){

  if ( A.amt < B.amt ){

    return true;
    
  }
  else { return false ;}

}

bool operator > (US &A, Nepal &B){

  if ( A.amt <= B.amt ){

    return false;
    
  }
  else { return true ;}

}

bool operator == (US &A, Nepal &B){

  if ( A.amt == B.amt ){

    return true;
    
  }
  else { return false ;}

}

////////// Main Function //////////

int main(){

  bool check;
  US dollar;
  Nepal rupees;
  Nepal chk;      // To Check
  char prompt;

  rupees.input();
  dollar.input();

  cout << "Choose Which operation u prefer" << endl <<
          "'<'  Or '>' Or '=' ?" << endl << 
          "    : ";
  cin >> prompt;

  if ( prompt == '<'){

    check = dollar < rupees;

  }

  else if ( prompt == '>'){

    check = dollar > rupees;

  }

  else if ( prompt == '='){

    check = dollar == rupees;

  }

  else { 
    
    cout << "Invalid Input !!!!! " << endl; 
    exit(0);

  }

  if ( check == 0){

    cout << "True" << endl;

  }
  else {

    cout << "False" << endl;

  }

  // cout << dollar.dollar() << endl << rupees.dollar() << endl 
  //       << dollar.rupee() << endl << rupees.rupee() << endl;

  return 0;
}