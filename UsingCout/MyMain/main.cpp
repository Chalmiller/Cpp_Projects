//
//  main.cpp
//  MyMain
//
//  Created by Chris Miller on 2/24/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include <iostream>
#include MyHeader.h

int main(int argc, const char * argv[]) {
    
    cout << "Verifying I'm in MyMain.cpp";
    
    DisplayUsingCout();
    DisplayTableUsingCout();
    DisplayTriangleRectangle();
    Circle();
    
    system("pause");
    return 0;
}
