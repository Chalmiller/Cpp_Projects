//
//  main.cpp
//  Grades
//
//  Created by Chris Miller on 4/10/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include <iostream>
#include "Grades1.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Grades1 myClass = Grades1("", 40);
    Grades1 myNewClass = Grades1("New C++ Class", 65);
    Grades1 myThirdClass = Grades1("Java", 43);
    
    string badStr = "non-sense\n";
    string goodStr = "C++";
    
    
//    myNewClass.classNumber = 65;
    
    myClass.SetClassName();
    
//    cout << myClass.GetClassName() << endl;
//    cout << "classNumber1: " << myClass.classNumber << endl;
//    cout << myNewClass.GetClassName() << endl;
//    cout << "classNumber2: " << myNewClass.classNumber << endl;
//    cout << myThirdClass.GetClassName() << endl;
//    cout << "classNumber3: " << myThirdClass.classNumber << endl;
//    cout << "GetGradeCounter: " << myClass.GetGradeCounter() << endl;
//
//    cout << "Inside main(): className from the overloaded function = " << Grades1::GetClassName(myThirdClass) << endl;
//
//    cout << badStr << "Testing CheckIfLegalName(): " << boolalpha << myClass.CheckIfLegalName(badStr) << endl;
//    cout << goodStr << endl << "Testing CheckIfLegalName(): " << boolalpha << myClass.CheckIfLegalName(goodStr) << endl;

    return 0;
}
