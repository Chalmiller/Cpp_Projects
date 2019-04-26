//
//  Grades1.h
//  Grades
//
//  Created by Chris Miller on 4/10/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#ifndef Grades1_h
#define Grades1_h
#include <string>
using namespace std;

class Grades1
{
    private:
    string className;
    static size_t gradeCounter;
    bool CheckIfLegalName(string);
    
    public:
//        string GetClassName();
    Grades1(string, size_t);
//    Grades1(string s, size_t):className(s){};
    size_t classNumber;
    const string GetClassName();
    static string GetClassName(Grades1);
    static size_t GetGradeCounter();
    
    string SetClassName();
};

#endif /* Grades1_h */
