/* 
 * File:   main.cpp
 * Author: Marcus Burton
 * Created on November 11th 2017 11:05PM
 * Purpose:  Calculating kinetic energy
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float kineticEnergy(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    float mass;
    float vel;
    cout<<"This program calculates the kinetic energy of an object in motion"<<endl;
    cout<<"Please enter the value of mass in KG for your object"<<endl;
    cin>>mass;
    cout<<"Please enter the velocity in meters per second of your object"<<endl;
    cin>>vel;
    cout<<kineticEnergy(mass, vel);
}
float kineticEnergy(float mass, float vel)
{
    float KE;
    KE=.5*mass*vel*vel;
    return KE;
}
