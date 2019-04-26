//
//  Grades2.cpp
//  Grades2
//
//  Created by Chris Miller on 4/19/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include "Grades2.h"
#include <iostream>
#include <string>
using namespace std;


Grades2::Grades2(string className, size_t objectID)
{
    className = {className};
    objectID = {objectID};
    
    cout << "Parameter-constructor called for object.." << objectID << endl;
    cout << "and the class name is .." << className << endl;
}

bool Grades2::CheckIfLegalName(string s)
{
    if (s == "C++" || s == "C#")
    {
        return true;
    } else {
        return false;
    }
}

string Grades2::SetClassName()
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

void Grades2::SetClassInfo()
{
    restartCollege:
        cout << "Enter College Name; Mission or WestValley: ";
        getline(cin, program.college);
    
        if (program.college == "")
        {
            cout << "No Selection ? ";
            goto restartCollege;
        }
        if ((program.college != "Mission") && (program.college != "West Valley"))
        {
            cout << "Illegal selection ! ";
            goto restartCollege;
        }
    
    restartSemester:
        cout << "Enter College Semester; Fall or Spring: ";
        getline(cin, program.semester);
    
        if (program.semester == "")
        {
            cout << "No Selection ? ";
            goto restartSemester;
        }
        if ((program.semester != "Fall") && (program.semester != "Spring"))
        {
            cout << "Illegal selection ! ";
            goto restartSemester;
        }
    
    restartTime:
    cout << "Enter College Time; Day or Evening: ";
        getline(cin, program.time);
    
        if (program.time == "")
        {
            cout << "No Selection ? ";
            goto restartTime;
        }
        if ((program.time != "Day") && (program.time != "Evening"))
        {
            cout << "Illegal selection ! ";
            goto restartTime;
        }
    
}

void Grades2::DisplayClassInfo()
{
    cout << "\nCollege Name: " << program.college
    << "\nCurrent Semester: " << program.semester
    << "\nTime of Courses: " << program.time
    << "\nClass Name: " << SetClassName() << endl;
}

string Grades2::GetClassName()
{
    return Grades2::className;
}

void Grades2::SelectClass()
{
    className = SetClassName();
    
    cout << "For the second object the name from the user is "
    << className << endl;
    
    SetClassInfo();
}

Grades2::~Grades2()
{
    cout << "Destructor called for object "
    << objectID << endl;
}
