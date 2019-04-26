//
//  Grades1.cpp
//  Grades
//
//  Created by Chris Miller on 4/10/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include "Grades1.h"
#include <iostream>
#include <string>
using namespace std;


//string Grades1::GetClassName()
//{
//    return className;
//}

size_t Grades1::gradeCounter;

const string Grades1::GetClassName()
{
//    className = "Java";
    return className;
}

Grades1::Grades1(string s, size_t n)
{
    className = {s};
    classNumber = {n};
}

size_t Grades1::GetGradeCounter()
{
//    classNumber = {50};
    return gradeCounter = 5;
}

string Grades1::GetClassName(Grades1 obj)
{
    return obj.className;
}

bool Grades1::CheckIfLegalName(string s)
{
    if (s == "C++" || s == "C#")
    {
        return true;
    } else {
        return false;
    }
}

string Grades1::SetClassName()
{
    string name;
    
    while(true)
    {
        cout << "Please enter a class name: ";
        cin >> name;
        
        bool goodName = CheckIfLegalName(name);
        cout << "Received a " << boolalpha << goodName << noboolalpha << endl;
        
        if (goodName == true){
            className = name;
            cout << "\nClass Name ... set.\n";
            cin.ignore(10, '\n');
            break;
        } else {
            cout << "\nIllegal Course Name. Not set\n";
            cin.ignore(10, '\n');
            continue;
        }
        
//        if (!cin.good())
//        {
//            cin.clear();
//            cin.ignore(10, '\n');
//            cout << "\nIncorrect Input. Retry. \n\n";
//            continue;
//        } else {
//            if (cin.good()) {
//                className = name;
//                cout << "\nClass Name ... set.\n";
//                cin.ignore(10, '\n');
//                break;
//            } else {
//                cout << "\nUser input is invalid Not set\n";
//                cin.ignore(10, '\n');
//                continue;
//            }
//        }
        
    }
    
    return className;
}
