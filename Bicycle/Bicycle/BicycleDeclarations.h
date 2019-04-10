//
//  BicycleDeclarations.h
//  Bicycle
//
//  Created by Chris Miller on 3/15/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#ifndef BicycleDeclarations_h
#define BicycleDeclarations_h

#include <stddef.h>

size_t speed;
const size_t MINspeed {10};
const size_t MAXspeed {20};
size_t speedAccessCounter {0};
size_t selection;
enum BicycleModels{Road=1, Mountain=2, Racing=3, Folding=4, Electric=5};

#endif /* BicycleDeclarations_h */
