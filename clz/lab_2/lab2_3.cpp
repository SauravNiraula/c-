#include <iostream>
using namespace std;

class Complex{

    int a,b;            // a+ib = Complex Number

    public:

        Complex(int a, int b){          // Constructor

            this->a = a;
            this->b = b;

        }
    
        Complex(){

            a = 0;
            b = 0;
        }

        void output(){

            cout << a << " + i" << b << endl << endl;

        }

        Complex operator + (Complex c1){

            Complex c2;

            c2.a = a + c1.a ;
            c2.b = b + c1.b ;

            return c2;
        }

        Complex operator - (Complex c1){

            Complex c2;

            c2.a = a - c1.a ;
            c2.b = b - c1.b ;

            return c2;
        }

};

////////// Main Function //////////

int main(){

    bool check = true;
    int a,b,*c,e,f,i;            // Complex NO  'a + ib' , useless pointer and integers
    // Complex *p1, *p2;
    char op;                    // Operation to Perform

    while( check ) {
        
        for (i = 0 ; i < 2 ; i++){
            
            cout << "Enter Complex Number 'a+ib'" << endl << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << endl;

            c = &i;

            if ( *c == 0){          // ISn't it Funny??


                e = a;
                f = b;

            }

        }

        
        Complex ans,c1(e, f),c2(a, b);            // ans = finak answer object
        


        c1.output();
        c2.output();


        //     if ( i == 0 ){
                
                
        //         Complex c1(a,b);
        //         p2 = &c1;
            
        //     }
        //     else {

        //         Complex c2(a,b);
        //         p2 = &c2;
                
        //     }

        // }

        // p1->output();
        // p2->output();

    

        cout << "Choose What you wanna perform : " << endl <<
                "Press '+' for Addition"  << endl <<
                "press '-' for Subtraction"  << endl <<
                "press '*' for Multiplication"  << endl <<
                "press '/' for Division"  << endl <<
                "     : " ;
        cin >> op;

        cout << endl;

        switch (op)
        {
        case '+':           // Addition Condition
            ans = c1 + c2;
            ans.output();
            break;

        case '-':           // Subtraction Condition
            ans = c1 - c2;
            ans.output();
            break;

        case '*':           // Multiplication Condition
            cout << "Feature Not avilable ( Coming Soon !!! )" << endl;
            break;

        case '/':           // Division Condition
            cout << "Feature Not avilable ( Coming Soon !!! )" << endl;
            break;
        
        default:
            cout << "Invalid Input !!!";
            exit(0);
        }

        // c1.output();
        // c2.output();

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