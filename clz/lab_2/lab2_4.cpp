#include <iostream>
using namespace std;

class Time{

    int hr,min,sec;
    bool *h,*m,*se;

public:
    Time(int a,int b,int c){
        this->hr = a;
        this->min = b;
        this->sec = c;
    }

    Time(){

    }

    void output(){
        cout << "Hour  :- "<< hr << endl << "Minute:- "<< min << endl <<"Second:- " << sec << "\n\n";
    }

    Time operator + (Time t){
        Time s;

        s.sec = t.sec + sec;
        s.min = t.min + min + s.sec / 60;
        s.sec = s.sec % 60;
        s.hr = t.hr + hr + s.min / 60;
        s.min = s.min % 60;
        s.hr = s.hr % 24;

        return s;
    }

    Time operator - (Time t){
        Time s;
        bool hor = true;
        bool moin = true;
        bool soec = true;

        if ( hr < t.hr ){
            s.hr = min - t.min + 24;
        }
        else{
            hor = false;
            s.hr = hr - t.hr;
        }

         if (min < t.min){
            s.min = min - t.min + 60;
        }
        else{
            s.min = min - t.min;
            moin = false;
        }
        
        if (sec < t.sec){
            s.sec = sec - t.sec + 60;
        }
        else{
            s.sec = sec - t.sec;
            soec = false;
        }
        h = &hor;
        m = &moin;
        se = &soec;

        return s;
    }

    void operator < (Time t){
        bool hr = *h;
        bool sec = *se;
        bool min = *m;
        if( hr = true ) cout << "Time is Smaller...\n\n";
        else{
            if (min = true) cout << "Time is Smaller...\n\n";
            else{
                if (sec = true) cout << "Time is Smaller....\n\n";
                else    cout << "Time is not smaller...\n\n";
            }
        }
        
    }

};

////////// Main Function //////////

int main(){

    Time final;
    Time first(23,32,45);
    Time second(12,42,1);

    cout << "After Adding ..........\n\n";
    final = first + second;
    final.output();
    cout << "After Subtracting ..........\n\n";
    final = first - second;
    final.output();
    first < second;
    
return 0;
}