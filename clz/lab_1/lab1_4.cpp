#include <iostream>
using namespace std;

class Medicine{         // class of Medicine

    int sq,oq;          // sq = store quantity, oq = ordered quantity

    public:

        void input(){

            cout << "Enter Store Quantity ";
            cin >> sq;
            cout << "Enter Ordered Quantity ";
            cin >> oq;

        }

        void output(){

            if ( sq < oq ){
                cout << "Not Avilable..." << endl;
            }
            else if ( sq >= oq ){

                if ( sq <= 40 && oq > 16 ){
                    cout << "You can only order 16 medicines" << endl;
                }
                else{
                    cout << "Your order is accepted" << endl;
                }

            }
            else{
                cout << "Not valid!!!" << endl;
            }
        }
};

/////////// Main Function ///////////

int main(){

    bool check = true;

    while(check){

        Medicine omeprazol;
        omeprazol.input();
        omeprazol.output();

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
