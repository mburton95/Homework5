/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 11th       
 * Purpose:                                   
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <ctime>        //for random number genrator
#include <iostream>     //Input/Output Stream Library
#include <ctime>        //for random number genrator
#include <cmath>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float presentValue(float,float,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    float FV;
    float I;
    int numYR;
    cout<<"This program will tell you the present value you need for a future value"<<endl;
    cout<<"Please enter the value you want, then the interest rate, then the number of years you plan to wait"<<endl;
    cin>>FV;
    cin>>I;
    cin>>numYR;
    float Pres=presentValue(FV,I,numYR);
    cout<<"You must deposit $"<<Pres<<endl;
}


float presentValue(float FV,float I, int numYR )
{
    float Pres;
    Pres = FV/(pow((1+I), numYR));
    return Pres;
}

