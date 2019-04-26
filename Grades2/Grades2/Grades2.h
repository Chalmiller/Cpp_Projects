//
//  Grades2.h
//  Grades2
//
//  Created by Chris Miller on 4/19/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#ifndef Grades2_h
#define Grades2_h
#include <string>

using namespace std;

class Grades2
{
private:
    string className;
//    static size_t gradeCounter;
    bool CheckIfLegalName(string);
    void SetClassInfo();
    struct Course
    {
        string college;
        string semester;
        string time;
    };
    Course program;
    
public:
    size_t objectID;
    void SelectClass();
    void DisplayClassInfo();
    string GetClassName();
    Grades2(string, size_t);
    ~Grades2();
    //    Grades1(string s, size_t):className(s){};
//    size_t classNumber;
//    const string GetClassName();
//    static string GetClassName(Grades1);
//    static size_t GetGradeCounter();
    string SetClassName();
};

#endif /* Grades2_h */
