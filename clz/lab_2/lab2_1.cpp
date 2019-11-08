#include <iostream>
using namespace std;

class Dog;
class Person{

  string nop;     // Name of Person

public:

  void input(){

    cout << "Please Enter name of Person: ";
    cin >> nop;
    cout << endl;

  }

  void output(){

    cout << "Name of Person is: " << nop << endl;

  }

  friend void swap(Person&, Dog&);      // Friend Function to swap name

};

class Dog{

  string nod;     // Name of Dog

public:

  void input(){

    cout << "Please Enter name of Dog: ";
    cin >> nod;
    cout << endl;

  }

  void output(){

    cout << "Name of Dog is: " << nod << endl;

  }

  friend void swap(Person&, Dog&);      // Friend Function to swap name

};

void swap(Person &p, Dog &d){

  string temp;

  temp = d.nod;
  d.nod = p.nop;
  p.nop = temp;

}

////////// Main Function ///////////

int main(){

  Person person;
  Dog dog;

  person.input();
  dog.input();

  person.output();
  dog.output();

  swap(person, dog);

  cout << endl << "After Swapping ........................." << endl << endl;

  person.output();
  dog.output();

  return 0;
}
