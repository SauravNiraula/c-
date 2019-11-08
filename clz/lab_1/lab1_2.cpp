#include <iostream>
using namespace std;

class Num{          // Numbers Class

    int n[4],min,max;

    public:

        // Num(int m, int n, int o){           // Constructor

        //     a = m;
        //     b = n;
        //     c = o;

        // }

        Num(){              // Constructor
            max = 0;
            min = 0;
        }
        
        void input(){

            cout<<"Enter Three Numbers To Find Maximum And Minimum Among Them"<<endl;

            for (int i = 0 ; i < 3 ; i++){

                cin>>n[i];

            }

            

        }

        void output(){

            if (max == 0 && min == 0){

                cout<<"The Numbers are: "<<n[0]<<"\t"<<n[1]<<"\t"<<n[2]<<endl;
            
            }
            else{

                cout<<"Maximum Number is: "<<max<<endl<<"Minimun number is: "<<min<<endl;

            }
            
        }

        int minnum(){          // Find Minumum value

            min = n[0];

            for (int i = 0 ; i < 3 ; i++ ){

                if ( n[i] < min ){

                    min = n[i];

                }

            }

            return min;
        }

        int maxnum(){          // Find Maximum value

            max = n[0];

            for (int i = 0 ; i < 3 ; i++ ){

                if ( n[i] > max ){

                    max = n[i];

                }

            }

            return max;
        }
 

};

/////////////////////   Main Function ////////////////////////


int main(){

    // Num n1(2,3,4);
    // n1.output();

    bool check = true;

    while(check){
    
        Num n1;
        n1.input();
        n1.output();

        n1.maxnum();
        n1.minnum();

        n1.output();

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
