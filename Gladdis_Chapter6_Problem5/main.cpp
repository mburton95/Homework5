/* 
 * File:   main.cpp
 * Author: Marcus Burton
 * Created: November 11th 10:50PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float fallingDistance(float);
//Execution Begins Here!
int main(int argc, char** argv) {
    cout<<"Time\t\t"<<"distance in meters"<<endl;
    for(int i = 1;i<=10;i++)
    {
        cout<<i<<"s\t\t"<<fallingDistance(i)<<" meters"<<endl;
    }
    return 0;
}

float fallingDistance(float time)
{
    float d = 1.0/2.0*9.8*time*time;
    return d;
}