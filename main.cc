/*

    @Author Zane Lyvers
    @Date: 09/04/25
    @File: main.cc
    @Description: Output overloaded operator functions

*/

#include <iostream>
#include <iomanip>
#include "MyTime.h"
#include <cstdlib>

using namespace std;

int main(){
    MyTime timeToUse;
    cout << "Please enter the hours and minutes as integers" << endl;
    cin >> timeToUse;
    
    MyTime time5Hours(5, 0);
    MyTime timeResult;

    timeResult = timeToUse + time5Hours;
    cout << "Adding 5 hours to your time makes it: " << timeResult << endl;

    timeResult = timeToUse - time5Hours;
    cout << "Subtracting 5 hours from your time makes it:" << timeResult << endl;

    timeResult = timeToUse * 5;
    cout << "Multiplying your time by 5 makes it: " << timeResult << endl;

    timeResult = timeToUse / 5;
    cout << "Dividing your time by 5 makes it: " << timeResult << endl;

    cout << "Is your time the same as 3:00?" << endl;
    MyTime time3Hours(3, 0);
    if(timeToUse == time3Hours){
        cout << "Yeah" << endl;
    }
    else{
        cout << "Nope" << endl;
    }
}