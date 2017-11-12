/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 11th       
 * Purpose:                                   
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      // for decimal precision
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float celsius(float);
//Execution Begins Here!
int main(int argc, char** argv) {
    
    float F;
    cout<<"This program will convert Fahrenheit to Celsius from 0 degrees to 20"<<endl;
    cout<<"Fahrenheit\t"<<"Celsius"<<endl;
    for(int i=0;i<=20;i++)
    {
        F=i;
        cout<<F<<"\t\t"<<celsius(i)<<endl;
    }
    return 0;
}

float celsius(float F)
{
    float C;
    C= .555*(F-32);
    return C;
}
