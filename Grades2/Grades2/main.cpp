//
//  main.cpp
//  Grades2
//
//  Created by Chris Miller on 4/19/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include <iostream>
#include "Grades2.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    size_t objectNumber = {1};
    size_t *pNumber{&objectNumber};
    
    ++(*pNumber);
//    Grades2 myClass = Grades2("Programming", objectNumber);
//
//    myClass.SelectClass();
//    objectNumber += 1;
//
//    Grades2 mySecondClass = Grades2("CIS", objectNumber);
//    
//    mySecondClass.SelectClass();
//    mySecondClass.DisplayClassInfo();
    
    Grades2 myThirdClass = Grades2("CIT", objectNumber);
    myThirdClass.SelectClass();
//    Grades2 myThirdClassCopy = myThirdClass;
//
//    cout << "\nThird Copy Class Name: " << myThirdClassCopy.GetClassName()
//    << "\nClass Object ID: " << *pNumber << endl;
//
//    const Grades2 myFourthClass("C", objectNumber);
//    cout << "\nFourth Class Name: " << myFourthClass.GetClassName() << endl;
    
    
    return 0;
}
