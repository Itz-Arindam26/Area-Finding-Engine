#include <bits/stdc++.h>
using namespace std;

void triarea()
{
    float b, h;
    cout << "Triangle Area Finding Engine Activated\n"<< '\n';
    cout << "Enter the value of base of Triangle(in cm):\n";
    cin >> b;
    cout << "Enter the value of height of Triangle(in cm):\n";
    cin >> h;
    float area;
    area = 0.5 * b * h;
    cout << "The area of the triangle is " << area << "sq.cm\n";
    cout << "Triangle Area Finding Engine's Action Terminated\n";
}
void sqarea()
{
    float s;
    cout << "Square Area Finding Engine Activated\n"<< '\n';
    cout << "Enter the value of a side of Square(in cm):\n";
    cin >> s;
    float area;
    area = pow(s, 2);
    cout << "The area of the square is " << area << "sq.cm\n";
    cout << "Square Area Finding Engine's Action Terminated\n";
}
void rectarea()
{
    float l, b;
    cout << "Rectangle Area Finding Engine Activated\n"<< '\n';
    cout << "Enter the value of length of Rectangle(in cm):\n";
    cin >> l;
    cout << "Enter the value of width of Rectangle(in cm):\n";
    cin >> b;
    float area;
    area = b * l;
    cout << "The area of the rectangle is " << area << "sq.cm\n";
    cout << "Rectangle Area Finding Engine's Action Terminated\n";
}
void paraarea()
{
    float h, b;
    cout << "Paralellogram/Rhombus Area Finding Engine Activated\n"<< '\n';
    cout << "Enter the value of base of Paralellogram/Rhombus(in cm):\n";
    cin >> b;
    cout << "Enter the value of height of Paralellogram/Rhombus(in cm):\n";
    cin >> h;
    float area;
    area = b * h;
    cout << "The area of the Paralellogram/Rhombus is " << area << "sq.cm\n";
    cout << "Paralellogram/Rhombus Area Finding Engine's Action Terminated\n";
}
void cirarea()
{
    float r;
    cout << "Circle Area Finding Engine Activated\n"<< '\n';
    cout << "Enter the value of radius of circle(in cm):\n";
    cin >> r;
    const float pi = 3.1415;
    float area;
    area = pow(r,2) * pi;
    cout << "The area of the circle is " << area << "sq.cm\n";
    cout << "Circle Area Finding Engine's Action Terminated\n";
}
void trapearea()
{
    float a, b, h;
    cout << "Trapezium Area Finding Engine Activated\n"<< '\n';
    cout << "Enter the value of first parallel side of Trapezium(in cm):\n";
    cin >> a;
    cout << "Enter the value of second parallel side of Trapezium(in cm):\n";
    cin >> b;
    cout << "Enter the value of height of Trapezium(in cm):\n";
    cin >> h;
    float add;
    add = a + b;
    float area;
    area = add * h;
    cout << "The area of the Trapezium is " << area << "sq.cm\n";
    cout << "Trapezium Area Finding Engine's Action Terminated\n";
}
int main()
{
    cout << "AREA FINDING ENGINE || BY ARINDAM SAMANTA\n"<< '\n'<< "It is a engine which can find area of a triangle,specific quadrilaterals and a circle...\n"<< "For finding area of:\n"<< "1. Triangle - Write capital T\n"<< "2. Square - Write capital S\n"<< "3. Rectangle - Write capital R\n"<< "4. Paralellogram/Rhombus - Write capital P\n"<< "4. Trapezium - Write capital Z\n"<< "5. Circle - Write capital C\n"<< "After giving input as per your need,Do as per said and Insert the Character correctly firstly for avoiding errors.You need not to write units..\n";
    char fig;
    cout << "Insert Your shapes's letter:\n";
    cin >> fig;
    if (fig == 'T')
    {
        triarea();
    }
    else if (fig == 'S')
    {
        sqarea();
    }
    else if (fig == 'R')
    {
        rectarea();
    }
    else if(fig == 'P')
    {
        paraarea();
    }
    else if(fig == 'Z')
    {
        trapearea();
    }
    else if(fig == 'C')
    {
        cirarea();
    }
    else{
        cout<<"There is any mistake by your side or 404 ERROR...\n";
    }

    return 0;
}