//
//  BicyclePrototypes.h
//  Bicycle
//
//  Created by Chris Miller on 3/15/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#ifndef BicyclePrototypes_h
#define BicyclePrototypes_h

#include <stddef.h>

size_t GetSpeed();
size_t GetMinSpeed();
size_t GetMaxSpeed();
void SetSpeed();
void SetSpeed(size_t s);

// Lab5 Function Prototypes
void DefaultSetSpeed(size_t s = 20);
void Swap(size_t&, size_t&);
void SwapValues(size_t, size_t);
void DistanceTravelled(size_t x);
size_t GetSpeedAccessCounter();
void GetSelectedSpeed();

// Lab6 Function Prototypes
void DisplayMenu();
void GetSelection();
void ImplementSelection();
// void MenuSelection();
size_t MenuSelection();
bool CheckContinue();
void SelectModel();

// Implement the template for double values
template <class ID>
ID IntDoubleTemplate(ID number)
{
    return number;
};

#endif /* BicyclePrototypes_h */
