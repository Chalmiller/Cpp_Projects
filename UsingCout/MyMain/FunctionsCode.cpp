//
//  FunctionsCode.cpp
//  MyMain
//
//  Created by Chris Miller on 2/24/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include "MyHeader.h"

void DisplayTableUsingCout()
{
    cout << "Output displayed by function "
    << "DisplayTableUsingCout() \n\n";
    
    // ****** Second Part ******
    cout << "Display a table\n\n";
    
    int n = 1;
    cout << "number\tsquare\tcube\n";
    cout << n << '\t' << '\t' << n * n << '\t' << '\t'
    << n * n * n << "\n";
    n++; // n=2
    cout << n << '\t' << '\t' << n * n << '\t' << '\t'
    << n * n * n << "\n";
    n++; // n=3
    cout << n << '\t' << '\t' << n * n << '\t' << '\t'
    << n * n * n << "\n\n";
    
    int m = 1;
    cout << "number\tsquare\tcube\n";
    cout << setw(2) << right << pow(m, 1) << '\t' << '\t' << pow(m, 2) << '\t' << '\t'
    << pow(m, 3) << "\n";
    m++; // n=2
    cout << setw(2) << right << pow(m, 1) << '\t' << '\t' << pow(m, 2) << '\t' << '\t'
    << pow(m, 3) << "\n";
    m++; // n=3
    cout << setw(2) << right << pow(m, 1) << '\t' << '\t' << pow(m, 2) << '\t' << '\t'
    << pow(m, 3) << "\n\n";
    
    // ****** Third Part ******
    cout << "Add a Second Table\n\n";
    
    int p = 5;
    int q = 43;
    int o = 104;
    
    cout << left << setw(7) << "Karen" << right << setw(8) << p << endl;
    cout << left << setw(7) << "Ben" << right << setw(8) << q << endl;
    cout << left << setw(7) << "Patricia" << right << setw(7) << o << endl;
} // End of DisplayTableUsingCout()

void DisplayUsingCout()
{
    cout << "Output displayed by function "
    << "DisplayUsingCout() \n\n";
    
    // ****** First Part ******
    cout << "Output displayed using cout\n\n";
    
    // 1 – using one ‘cout‘ statement, with the numbers as one string;
    cout << "1 2 3 4\n\n";
    // 2 - using one ‘cout‘ statement, with four cascaded string-inputs;
    cout << "1 " << "2 " << "3 " << "4\n\n";
    // 3 - repeat, using integer numbers as four inputs (you must insert
    cout << 1 << " " << 2 << " " << 3 << " " << 4 << " \n\n";
    // 4 - repeat, using characters;
    cout << char(49) << " " << char(50) << " " << char(51) << " " << char(52) << " \n\n";
    // 5 - using four individual ‘cout’ statements, and using only one string at a time
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4\n\n";
} // End of DisplayUsingCout()

void DisplayTriangleRectangle()
{
    // ****** Fourth Part ******
    cout << "\nDisplay a Triangle\n\n";
    
    cout << "*\n**\n***\n****\n*****\n";
    
    /****** Fifth Part ******/
    cout << "\nDisplay a Rectangle\n\n";
    
    cout << "^ ------------------\n"
    <<      "a |                |\n"
    <<      "| |                |\n"
    <<      "v ------------------\n"
    <<      " <--------b------->\n\n";
    
    // ****** Sixth Part ******
    
    cout << "\nRedisplay the Rectangle\n\n";
    
    cout << R"(
    ^ ------------------
    | |                |
    a |                |
    | |                |
    v ------------------
    <--------b------->
    )";
} // End of DisplayTriangleRectangle()

void Circle()
{
    // ****** Seventh Part ******
    cout << "Display the Circle\n\n";
    
    cout << R"(
    **
    *        *
    *            *
    *              *
    *       ---r---*
    *              *
    *            *
    *        *
    **
    
    )";
    
    double radius = {5.23};
    const double PI = 3.1415926;
    
    double length;
    double area;
    
    length = 2 * PI * radius;
    area = PI * pow(radius, 2);
    
    cout << "Radius\tLength\tArea\n\n";
    cout << fixed << showpoint << setprecision(2)
    << " \t" << radius
    << "\t" << length
    << "\t" << area << "\n\n";
}
