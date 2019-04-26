//
//  main.cpp
//  Grades3
//
//  Created by Chris Miller on 4/26/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include <iostream>
#include "Grades3.h"
#include <array>
using namespace std;

int main(int argc, const char * argv[]) {
        
//    for (auto i : Carr)
//    {
//        cout << "Values of the array Carr " << i << endl;
//    }
    
//    size_t pArr[Grades3::size]{};
//    size_t *p;
//    p = pArr;
//    Grades3 Cobj;
//    
//    Cobj.InitCarray(p, Grades3::size);
    
    array<size_t, Grades3::size> CPPArr = {};
    
    Grades3 CPPobj;
//    CPPobj.InitCarray(CPPArr, Grades3::size);
    CPPobj.InitCPPArray(CPPArr);
    
//    for (auto i : CPPArr)
//    {
//        cout << "range for loop: " << i << endl;
//    }
    
//    for (size_t i{}; i < Grades3::size;  i++ )
//    {
//        cout << "size_t classical for loop: " << Carr[i] << endl;
//    }
//
//    for(auto i = begin(Carr); i != end(Carr); ++i)
//    {
//        cout << "classical iterator for loop: " << *i << endl;
//    }
//
//    for (size_t i : Carr)
//    {
//        cout << "range for loop with size_t: " << i << endl;
//    }
//
//    for (auto i : Carr)
//    {
//        cout << "range for loop with auto: " << i << endl;
//    }
//
//    for (auto i = end(Carr)-1; i >= begin(Carr); i--)
//    {
//        cout << "classical reverse iterator for loop: " << *i << endl;
//    }
    
    return 0;
}
