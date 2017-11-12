/* 
 * File:   main.cpp
 * Author: Marcus Burton
 * Created on November 11th
 * Purpose:  Calculating safe driving 
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
int getNumAccidents(string);
void findLowest(int,int,int,int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    cout<<"This program will determine which five geographic regions of the city is the safest"<<endl;
    //Declare Variables
    int North, South, East, West, Central;
    //Initialize Variables
    North = getNumAccidents("North");
    South = getNumAccidents("South");
    East = getNumAccidents("West");
    West = getNumAccidents("West");
    Central = getNumAccidents("Central");
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    findLowest(North,South,East,West,Central);
    //Exit the program
    return 0;
}
int getNumAccidents(string region)
{
    int accdnt;
    cout<<"How many accidents were reported in the "<<region<<" region?"<<endl;
    cin>>accdnt;
    while(!(accdnt>0))
    {
        cout<<"Invalid accidents!"<<endl;
        cin>>accdnt;
    }
    return accdnt;
}

void findLowest(int North, int South, int East, int West, int Central)
{
    while(!(North>0 || South >0 || East > 0 || West >0 || Central > 0))
    {
        cout<<"invalid number!"<<endl;
        break;
    }
    
    string win = "North";
    int low = North;
    if(South<low)
    {
        win = "South";
        low= South;
    }
    
    if(East<low)
    {
        win="East";
        low=East;
    }
    if(West<low)
    {
        win="West";
        low=West;
    }
    if(Central<low)
    {
        win="Central";
        low=Central;
    }
    
    cout<<win<<" has the safest driving! With a total of "<<low<<" accidents!"<<endl;
}

