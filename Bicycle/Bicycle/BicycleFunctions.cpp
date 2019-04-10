//
//  BicycleFunctions.cpp
//  Bicycle
//
//  Created by Chris Miller on 3/15/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include "BicycleDeclarations.h"
#include "BicycleLibIncludes.h"
#include <iostream>
using namespace std;

size_t GetSpeed()
{
    speedAccessCounter += 1;
    
    return speed;
} // End of GetSpeed()

size_t GetMinSpeed()
{
//    MINspeed = {15};
    return MINspeed;
} // End of GetMinSpeed()

size_t GetMaxSpeed()
{
    return MAXspeed;
} // End of GetMaxSpeed()

void SetSpeed()
{
    size_t sp;
    
      // First Implementation of SetSpeed()
//    if (sp >= MINspeed && sp <= MAXspeed)
//    {
//        speed = sp;
//        cout << "\nLegal Speed ... set.\n";
//    } else {
//        cout << "\nSpeed ... is out of legal range ! Not set\n";
//    }
//
//    size_t sp1;
//    cout << "\nEnter a new current speed: ";
//    cin >> sp1;
//    cout << "\nThe test speed is: " << sp1 << "\n\n";
    
    // Second Implementation of SetSpeed()
    while(true)
    {
        cout << "\nPlease input the current speed: ";
        cin >> sp;

        if (!cin.good())
        {
            cin.clear();
            cin.ignore(10, '\n');
            cout << "\nIncorrect Input. Retry. \n\n";
            continue;
        } else {
            if (sp >= MINspeed && sp <= MAXspeed) {
                speed = sp;
                cout << "\nLegal Speed ... set.\n";
                cin.ignore(10, '\n');
                break;
            } else {
                cout << "\nSpeed ... is out of legal range ! Not set\n";
                cin.ignore(10, '\n');
                continue;
            }
        }
    }
    
    // Third Implementation of SetSpeed()
//    while(true){
//        try{
//            cout << "\nPlease input the current speed: ";
//            cin >> sp;
//
//            if (!cin.good()) {
//                throw 'c';
//            } else {
//                if (sp >= MINspeed && sp <= MAXspeed) {
//                    speed = sp;
//                    cout << "\nLegal Speed ... set.";
//                    cin.ignore(10, '\n');
//                    break;
//                } else {
//                    cout << "\nSpeed ... is out of legal range ! Not set";
//                    throw 'i';
//                }
//            }
//        }
//        catch(int) {
//            cout << "\nNot a positive integer. Please retry";
//            cin.ignore(10, '\n');
//            continue;
//        }
//        catch(char) {
//            cout << "\nNot a valid input. Please retry";
//            cin.clear();
//            cin.ignore(10, '\n');
//            continue;
//        }
//    }
} // End of SetSpeed()

void SetSpeed(size_t s)
{
    size_t sp = s;
    
    // First Implementation of SetSpeed(size_t s)
        if (sp >= MINspeed && sp <= MAXspeed)
        {
            speed = sp;
            cout << "\nLegal Speed ... set.\n";
        } else {
            cout << "\nSpeed ... is out of legal range ! Not set\n";
        }
} // End of SetSpeed(size_t s)

void DefaultSetSpeed(size_t s = 20)
{
    speed = s;
} // End of DefaultSetSpeed(size_t s = 20)

void Swap(size_t & a, size_t & b)
{
    size_t temp;
    
    temp = a;
    a = {b};
    b = {temp};
} // End of Swap(size_t & a, size_t & b)

void SwapValues(size_t a, size_t b)
{
    size_t temp;
    
    temp = a;
    a = {b};
    b = {temp};
}

void DistanceTravelled(size_t x)
{
    static size_t s{0};
    
    cout << "\nPre-incremented value: "
    << s << endl;

    s += x;

    cout << "\nPost-incremented value: "
    << s << endl;
} // End of DistanceTravelled(size_t x)

size_t GetSpeedAccessCounter()
{
    return speedAccessCounter;
} // End of GetSpeedAccessCounter()

void GetSelectedSpeed()
{
    
    char entry;
    size_t currSpeed = GetSpeed();
    
    while(true)
    {
        cout << "\nHow would you like to view the speed: \n"
        << "1. For mph, enter 'M'\n"
        << "2. For km/h, enter 'K'\n";
        cin >> entry;
        
        if (!cin.good())
        {
            cin.clear();
            cin.ignore(10, '\n');
            cout << "\nIncorrect Input. Retry. \n\n";
            continue;
        } else {
            if (entry == 'M') {
                cout << "\nThe current speed in mph is: \n"
                << currSpeed << "mph" << endl;
                
                cout << "\nThe current speed in mph with a set precision: \n"
                << fixed << showpoint << setprecision(3)
                << currSpeed << "mph" << endl;
                
                cout << "\nThe current speed in mph casted as an int is: \n"
                << int(currSpeed) << "mph" << endl;
                
                cout << "\nThe current speed in mph rounded is: \n"
                << int(currSpeed + 0.5) << "mph" << endl;
                
                cout << "\nThe ceil() of the current speed in mph  is: \n"
                << ceil(currSpeed) << "mph" << endl;
                
                cout << "\nThe floor() of the current speed in mph  is: \n"
                << floor(currSpeed) << "mph" << endl;
                
                cin.ignore(10, '\n');
                break;
            } else if (entry == 'K'){
                double toKmPerHour = 1.61;
                double speedInKmPerHour = currSpeed * toKmPerHour;
                cout << "\nThe current speed in km/h is: \n"
                << speedInKmPerHour << "km/h" << endl;
                
                cout << "\nThe current speed in km/h with a set precision: \n"
                << fixed << showpoint << setprecision(3)
                << speedInKmPerHour << "km/h" << endl;
                
                cout << "\nThe current speed in km/h casted as an int is: \n"
                << int(speedInKmPerHour) << "km/h" << endl;
                
                cout << "\nThe current speed in km/h rounded is: \n"
                << int(speedInKmPerHour + 0.5) << "km/h" << endl;
                
                cout << "\nThe ceil() of the current speed in km/h  is: \n"
                << ceil(speedInKmPerHour) << "km/h" << endl;
                
                cout << "\nThe floor() of the current speed in km/h  is: \n"
                << floor(speedInKmPerHour) << "km/h" << endl;
                cin.ignore(10, '\n');
                break;
            }
        }
    }
} // End of GetSelectedSpeed()

void DisplayMenu()
{
    string menu = R"(
    Selection Menu
    --------------
    
    1. Set Speed
    2. Get Speed
    3. Get MAX Speed
    4. Get MIN Speed
    5. GetSpeedAccessCounter
    6. GetSelectedSpeed
    7. Exit
    )";
    
    system("COLOR F1");
    cout << menu << endl;
} // End of DisplayMenu()

void GetSelection()
{
//    cout << "Inside GetSelection()";
    size_t select;
    
    while(true){
        try{
            cin >> select;
            cin.ignore(10, '\n');
            
            if (!cin.good()) {
                throw 'c';
            } else {
                if (select >= 1 && select <= 7) {
                    selection = select;
                    cout << "\nThank you for your selection.";
                    cin.ignore(10, '\n');
                    break;
                } else {
                    cout << "\nYour selection is not available.";
                    throw 'i';
                }
            }
        }
        catch(int) {
            cout << "\nNot a positive integer. Please retry";
            cin.ignore(10, '\n');
            continue;
        }
        catch(char) {
            cout << "\nNot a valid input. Please retry";
            cin.clear();
            cin.ignore(10, '\n');
            continue;
        }
    }
} // End of GetSelection()

void ImplementSelection()
{
    switch(selection) {
        case 1: SetSpeed();
            break;
        case 2: cout << GetSpeed() << endl;
            break;
        case 3: cout << GetMaxSpeed() << endl;
            break;
        case 4: cout << GetMinSpeed() << endl;
            break;
        case 5: cout << GetSpeedAccessCounter() << endl;
            break;
        case 6: GetSelectedSpeed();
            break;
    }
} // End of ImplementSelection()

//void MenuSelection()
//{
//    DisplayMenu();
//    GetSelection();
//    if (selection!= 7) {
//        ImplementSelection();
//    }
//} // End of MenuSelection()

size_t MenuSelection()
{
    DisplayMenu();
    GetSelection();
    if (selection!= 7) {
        ImplementSelection();
    }
    
    return selection;
} // End of MenuSelection()

bool CheckContinue()
{
    char resume;
    while(true)
    {
        cout << "\nWould you like to continue? (Y/N)\n";
        cin >> resume;
        cin.ignore(10, '\n');
        if (toupper(resume) == 'Y') {
            return true;
        } else {
            return false;
        }
    }
} // End of CheckContinue()

void SelectModel()
{
    size_t t;
    size_t type;
    
    string new_display = R"(
    Bike Type Selection
    -------------------
    1. Road
    2. Mountain
    3. Racing
    4. Folding
    5. Electric
    
    Enter the Bike Type:
    )";
    
    cout << new_display << endl;
    
    while(true){
        try{
            cin >> t;
            cin.ignore(10, '\n');
            
            if (!cin.good()) {
                throw 'c';
            } else {
                if (t >= 1 && t <= 5) {
                    type = t;
                    cout << "\nThank you for your selection.";
                    cin.ignore(10, '\n');
                    break;
                } else {
                    cout << "\nYour selection is not available.";
                    throw 'i';
                }
            }
        }
        catch(int) {
            cout << "\nNot a positive integer. Please retry";
            cin.ignore(10, '\n');
            continue;
        }
        catch(char) {
            cout << "\nNot a valid input. Please retry";
            cin.clear();
            cin.ignore(10, '\n');
            continue;
        }
    }
    
    BicycleModels bm = BicycleModels(type);
    
    switch(bm) {
        case Road:
            cout << "\nYou selected type " << "Road" << endl;
            break;
        case Mountain:
            cout << "\nYou selected type " << "Mountain" << endl;
            break;
        case Racing:
            cout << "\nYou selected type " << "Racing" << endl;
            break;
        case Folding:
            cout << "\nYou selected type " << "Folding" << endl;
            break;
        case Electric:
            cout << "\nYou selected type " << "Electric" << endl;
            break;
    }
}
