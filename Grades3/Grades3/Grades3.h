//
//  Grades3.h
//  Grades3
//
//  Created by Chris Miller on 4/26/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#ifndef Grades3_h
#define Grades3_h
#include <string>

using namespace std;

class Grades3
{
public:
    const static size_t size{5};
//    void InitCarray (size_t [], size_t);
    void InitCarray(size_t *, size_t);
    void InitCPPArray(array<size_t, size> &arr);
};

#endif /* Grades3_h */
