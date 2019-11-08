#include <iostream>
using namespace std;
const float pi = 3.14;

class Shape
{                   // Class of Shapes
    int l, b, h, r; // Length Breadth/Base Height Raduis
    float a;        // Area
    char t;         // Type of Shape

public:
    Shape(char s)
    { // Constructor
        t = s;
    }

    void input()
    {
        if (t == 'c')
        { // 'c' = Circle
            cout << "Enter Radius of circle, r = ";
            cin >> r;
        }
        else if (t == 'r')
        { // 'r' = Rectangle
            cout << "Enter Length of Rectangle, l = ";
            cin >> l;
            cout << "Enter Breadth of Rectangle, b = ";
            cin >> b;
        }
        else if (t == 's')
        { // 's' = Square
            cout << "Enter Length of Square, l = ";
            cin >> l;
        }
        else if (t == 't')
        { // 't' = Triangle
            cout << "Enter Base of Triangle, b = ";
            cin >> b;
            cout << "Enter Height of Triangle, h = ";
            cin >> h;
        }
        else
        {
            cout << "Invalid Input!!!!!!";
        }
    }

    void area()
    {
        if (t == 'c')
        { // 'c' = Circle
            a = pi * r * r;
            cout << "Area of Circle = " << a << " m2" << endl;
        }
        else if (t == 'r')
        { // 'r' = Rectangle
            a = l * b;
            cout << "Area of Rectangle = " << a << " m2" << endl;
        }
        else if (t == 's')
        { // 's' = Square
            a = l * l;
            cout << "Area of Square = " << a << " m2" << endl;
        }
        else if (t == 't')
        { // 't' = Triangle
            a = (float)0.5 * b * h;
            cout << "Area of Triangle = " << a << " m2" << endl;
        }
    }
};

///////////////// Main Function /////////////////

int main()
{
    char z, c; // z = type of shape, c = Repeat again? yes:no;
    bool check = true;
    do
    {
        cout << "Enter ::" << endl
             << "1. 'c' for creating Circle" << endl
             << "2. 'r' for creating Rectangle" << endl
             << "3. 's' for creating Square" << endl
             << "4. 't' for creating Triangle" << endl
             << "   Input = ";
        cin >> z;
        if (z == 'c' || z == 'C')
        { // 'c' = Circle
            Shape sh1('c');
            sh1.input();
            sh1.area();
        }
        else if (z == 'r' || z == 'R')
        { // 'r' = Rectangle
            Shape sh1('r');
            sh1.input();
            sh1.area();
        }
        else if (z == 's' || z == 'S')
        { // 's' = Square
            Shape sh1('s');
            sh1.input();
            sh1.area();
        }
        else if (z == 't' || z == 'T')
        { // 't' = Triangle
            Shape sh1('t');
            sh1.input();
            sh1.area();
        }
        else
        {
            cout << "I dont think you are in a Mood" << endl
                 << "Join me after some minutes..." << endl;
            check = false;
            break;
        }
        cout << "Do You Wanna run this program again ?" << endl
             << // Run Again
            "Write 'y' is yes and 'n' if no..." << endl;
        cin >> c;
        if (c == 'n')
        {
            check = false;
            cout << "Please Remember me Later  Byee........";
        }
        else if (c == 'y')
        {
            cout << "Welcome Back Again....." << endl;
        }
        else
        {
            cout << "I dont think you are in a Mood" << endl
                 << "Join me after some minutes..." << endl;
            check = false;
        }
    } while (check); // Loop
    
    return 0;
}
