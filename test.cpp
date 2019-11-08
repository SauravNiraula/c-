#include <iostream>
using namespace std;

// template <class T,int size>
// class Stack{
//     T *a;
// public:
//     Stack(){
        
//     }
//     Stack(int *arr){
//         a = new int [size];
//         for (int i = 0 ; i < 5 ; i++){
//             a[i] = arr[i];
//         }
//     }
//     T get();
//     void operator +(Stack &s1);

// };
// template <class T,int size>
// T Stack <T,size>::get(){
//     for (int i = 0 ; i < size ; i++){
//         cout << a[i];
//     }
//     return 0;
// }
// template <class T,int size>
// void Stack <T,size>::operator +(Stack &s1){
//     for( int i = 0 ; i < size ; i++){
//         s1.a[i] += a[i];
//     }
// }


// int main(){
//     int arr[5] = {12,12,12,24,32};
//     Stack <int, 5> s1(arr);

//     Stack <int, 5> s2(arr);
//     s1+s2;
//     s2.get();
// }


class a{
    int z;
public:
    a(){
        z=5;
    }
    virtual void show(){};
};
class b:public a{
    float x;
public:
    b(){
        x=5.45646;
    }
};
class c:public a{
   string v;
public:
    c(){
        v="sdf";
    } 
};

int main(){
    // a *first;
    // b *s,g;
    // c x;
    // first = &g;
    // if(s = dynamic_cast<b*>(first)){
    //     cout << "yes";
    // }
    // cout << typeid(456).name();

    const int i = 0;
    const_cast<int&> (i) = 12;
    cout << i;

}