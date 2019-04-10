//
//  ConsoleApplications.cpp
//  ConsoleApplications
//
//  Created by Chris Miller on 2/24/19.
//  Copyright © 2019 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include "LibIncludes.h"
using namespace std;

void sales()
{
    double base;
    double sales;
    double percentage;
    double wage;

    cout << "Please enter the following values: \n"
    << "Base Salary: ";
    cin >> base;
    cout << "\nSales Revenue: ";
    cin >> sales;
    cout << "\nCommission Percentage: ";
    cin >> percentage;
    cin.ignore(10, '\n');
    
     wage = (base + (percentage*sales));
    
    cout << "The total wage for the salesperson will be: $"
    << fixed << showpoint << setprecision(2)
    << wage << endl;
} // End of sales() method

void manufacturing()
{
    // dimension variables
    double length, width, height, volume;
    // analytical calculation variables
    double cost, charge, profit;
    
    cout << "Please enter the following dimensions sequentially: length, width, height, and volume\n";
    cin >> length >> width >> height >> volume;
    cin.ignore(10, '\n');
    
    cost = volume * 0.23;
    charge = volume * 0.5;
    profit = charge - cost;
    
    cout << "The cost, charge and profit for manufacturing the crate are as follows: "
    << fixed << showpoint << setprecision(2)
    << "\ncost: " << cost
    << "\ncharge: " << charge
    << "\nprofit:" << profit << endl;
} // End of manufacturing() method

void FlatWasher()
{
    // Dimension variables
    double d_1, d_2, thickness, density;
    // Evaluated variables
    double r_1, r_2, volume, mass;
    
    cout << "Please enter your washers dimensions sequentially: d_1, d_2, thickness, and density: \n";
    cin >> d_1 >> d_2 >> thickness >> density;
    cin.ignore(10, '\n');
    
    // Convert the input diameters to radius
    r_1 = d_1/2.0;
    r_2 = d_2/2.0;
    // Calculate the volume of the hollow cylinder
    volume = M_PI * thickness * (pow(r_2, 2.0) - pow(r_1, 2.0));
    // Evaluate the mass from the given values
    mass = density * volume;
    
    cout << "The mass of the washer is: \n"
    << fixed << setprecision(2)
    << mass << endl;
} // End of FlatWasher() method

void Distance()
{
    // User input variables
    double x_1, x_2, y_1, y_2;
    // Return variable
    double distance;
    
    cout << "Please enter the following dimensions sequentially: x_1, x_2, y_1, and y_2\n";
    cin >> x_1 >> x_2 >> y_1 >> y_2;
    cin.ignore(10, '\n');
    
    distance = sqrt(pow((x_2-x_1), 2.00) + pow((y_2-y_1), 2.00));
    
    cout << "The distance between the points input is: \n"
    << fixed << setprecision(2)
    << distance << endl;
} // End of Distance() method

void Extract()
{
    size_t input_number, extract_value;
    
    input_number = 12345;
    
    extract_value = input_number%10;
    
    cout << "The least-significant-value of 12345 is: "
    << extract_value << endl;
} // End of Extract() method

void SecondsConversion()
{
    size_t hours, minutes, seconds, hour_rmvl;
    size_t input_value;
    
    cout << "Please enter the quantity of seconds you would like to convert: \n";
    cin >> input_value;
    cin.ignore(10, '\n');
    
    hours = input_value/60/60;
    hour_rmvl = input_value - (hours*60*60);
    minutes = hour_rmvl/60;
    seconds = hour_rmvl - (minutes*60);
    
    cout << "The input seconds quantity breaks down to: \n"
    << hours << " hours " << minutes << " minutes and " << seconds << " seconds \n";
} // End of SecondsConversion() method

void DaysConversion()
{
    size_t days, weeks, months, input_days, month_rmvl;
    
    cout << "Please enter the the number of days you would like to convert: \n";
    cin >> input_days;
    cin.ignore(10, '\n');
    
    /* This value assumes a convential month of exactly 4 weeks.
     Otherwise a map could be made correlating the exact number of days
     to each month.
     */
    months = input_days/7/4;
    month_rmvl = input_days - (months*4*7);
    weeks = month_rmvl/7;
    days = month_rmvl - (weeks*7);
    
    cout << "The input quantity of days breaks down to: \n"
    << months << " months " << weeks << " weeks and " << days << " days \n";
} // End of DaysConversion() method

void GetChange()
{
    double purchase, payment, change, dollars, quarters, dimes, nickels, pennies, change_pennies;
    
    cout << "Please enter the purchase cost: \n";
    cin >> purchase;
    cout << "Please enter the payment recevied: \n";
    cin >> payment;
    cin.ignore(10, '\n');
    
    change = payment - purchase;
    change_pennies = change*100;
    
    dollars = static_cast<int>(change_pennies/100);
    quarters = static_cast<int>((change_pennies - (dollars*100))/25);
    dimes = static_cast<int>((change_pennies - (dollars*100) - (quarters*25))/10);
    nickels = static_cast<int>((change_pennies - (dollars*100) - (quarters*25) - (dimes*10))/5);
    pennies = static_cast<int>(change_pennies - (dollars*100) - (quarters*25) - (dimes*10) - (nickels*5));
    
    cout << "Purchase: " << left << setw(8) << right << setw(8) << purchase
    << "\nPayment: " << left << setw(8) << right << setw(7) << payment
    << "\nChange: " << left << setw(8) << right << setw(10) << change
    << "\nDollars: " << left << setw(8) << right << setw(6) << dollars
    << "\nQuarters: " << left << setw(8) << right << setw(5) << quarters
    << "\nDimes: " << left << setw(8) << right << setw(8) << dimes
    << "\nNickels: " << left << setw(8) << right << setw(6) << nickels
    << "\nPennies: " << left << setw(8) << right << setw(6) << pennies
    << endl;
} // End of GetChange() method

void RollWallpaper()
{
    int wall_length, wall_width, wall_height, roll_area, wall_area;
    double rolls_required;
    int roll_length = 396, roll_width=21;
    
    cout << "Please enter the your wall dimensions in feet - length, width, then height: \n";
    cin >> wall_length >> wall_width >> wall_height;
    cin.ignore(10, '\n');
    
    // Convert to inches
    wall_length*=12;
    wall_width*=12;
    wall_height*=12;
    
    roll_area = roll_length * roll_width;
    wall_area = 2*(wall_length * wall_height) + 2*(wall_width*wall_height);
    
    rolls_required = (wall_area/roll_area)+1;
    
    cout << "Your wall space requires the following quantity of rolls to cover: \n"
    << rolls_required << endl;
} // End of RollWallpaper() method

void ProcessIntNumber()
{
    size_t input_value, digit_1, digit_2, digit_3, digit_4, digit_5, temp, swapped_input;
    
    cout << "Please enter a series of numbers: \n";
    cin >> input_value;
    cin.ignore(10, '\n');
    
    digit_1 = input_value/10000;
    digit_2 = (input_value - (digit_1*10000))/1000;
    digit_3 = (input_value - (digit_1*10000) - (digit_2*1000))/100;
    digit_4 = (input_value - (digit_1*10000) - (digit_2*1000) - (digit_3*100))/10;
    digit_5 = input_value%10;
    
    cout << "The input value breaks down to: \n"
    << digit_1 << " " << digit_2 << " " << digit_3 << " " << digit_4 << " " << digit_5 << endl;
    
    // Swap digit 1 for 3
    temp = digit_3;
    digit_3 = digit_1;
    digit_1 = temp;
    
    // Swap digit 2 for 5. Variable temp is reused to preserve memory.
    temp = digit_5;
    digit_5 = digit_2;
    digit_2 = temp;
    
    swapped_input = digit_1*10000 + digit_2*1000 + digit_3*100 + digit_4*10 + digit_5;
    
    cout << "The swapped input value is: \n"
    << swapped_input << endl;
    
    if (digit_1 == digit_5 && digit_2 == digit_4) {
        cout << "The number " << swapped_input
        << " is a palindrome.\n" << endl;
    } else {
        cout << "The number " << swapped_input
        << " is not a palindrome.\n" << endl;
    }
} // End of ProcessIntNumber() method
