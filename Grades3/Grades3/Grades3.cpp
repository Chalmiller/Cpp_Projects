//
//  Grades3.cpp
//  Grades3
//
//  Created by Chris Miller on 4/26/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include "Grades3.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;

void Grades3::InitCarray(size_t arr[], size_t size)
{
    // Array initialized at 0
    for (int i{}; i < size; i++)
    {
        cout << "Values of the array Carr " << arr[i] << endl;
    }

    // Array initialized with values from 0 -> 4
    for (int i{}; i < size; i++)
    {
        arr[i] = i;
        cout << "Values of the array Carr " << arr[i] << endl;
    }
}

//void Grades3::InitCarray(size_t *pArr, size_t size)
//{
//    for(size_t i{}; i < size; i++)
//    {
//        cout << *pArr++;
//    }
//    
//    for (size_t i{}; i < size; i++)
//    {
//        *pArr++ = i;
//    }
//}

void Grades3::InitCPPArray(array<size_t, size> &arr)
{
    for (int i{}; i < size; i++)
    {
        cout << "Values of the cpp_array " << arr[i] << endl;
    }
    
    for (int i{}; i < size; i++)
    {
        arr[i] = i;
        cout << "Values of the cpp_array " << arr[i] << endl;
    }
}
