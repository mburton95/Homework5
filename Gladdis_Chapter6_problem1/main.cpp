/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 11th       
 * Purpose: Menu for all problems                              
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      // for decimal precision
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float calculateretail(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
   
    
    //Declare Variables
    float cost;
    float markup;
    //Initialize Variables
    cost=0.0;
    markup=0.0;
    //Input Data/Variables
    cout<<"Please enter the cost of the item"<<endl;
    cin>>cost;
    while(!(cost>0))
    {
        cout<<"Invalid Input. Must be a positive number!"<<endl;
        cout<<"Please re-enter the cost"<<endl;
        cin>>cost;
    }
    cout<<"Please enter the markup percentage"<<endl;
    cin>>markup;
    while(!(markup>0))
    {
        cout<<"Invalid input. Must be a positive number!"<<endl;
        cout<<"Please re-enter the markup value"<<endl;
        cin>>markup;
    }
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
     float final =calculateretail(cost, markup);
     cout<<fixed<<setprecision(2);
     cout<<"The final retail price is $"<<final<<endl;
    
   
    
    //Exit the program
    return 0;
}

float calculateretail(float cost, float markup)
{
    float mark = markup/100;
    float up = cost * mark;
    float final = up + cost;
    return final;
}