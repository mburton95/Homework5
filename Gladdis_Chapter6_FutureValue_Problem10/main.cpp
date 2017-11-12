/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 25th, 2017, 9:05 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float futureValue(float,float,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float PV;
    float IR;
    float months;
    //Initialize Variables
    cout<<"Please enter your present value"<<endl;
    cin>>PV;
    cout<<"Please enter interest rate"<<endl;
    cin>>IR;
    cout<<"Please enter number of months"<<endl;
    cin>>months;
    float FV=futureValue(PV,IR,months);
    cout<<" At $"<<PV<<" Present value,"<<
            " "<<IR<<" Interest rate, and at "<<months<<"Months is.."<<
            " $"<<FV<<"!!"<<endl;
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}

float futureValue(float PV, float IR, int months)
{
    float FV = PV * pow(1+IR,months);
    return FV;
}