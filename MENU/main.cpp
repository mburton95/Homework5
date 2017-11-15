/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 25th, 2017, 9:05 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      // for decimal precision
#include <cmath>
#include <cstdlib>      // for rand nad srand
#include <time.h>  
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void prob1();
float calculateretail(float, float);

void prob2();
int getsales(int);
void findHighest(int,int,int,int );

void prob3();
int getNumAccidents(string);
void findLowest3(int,int,int,int,int);


void prob4();
float fallingDistance(float);


void prob5();
float kineticEnergy(float, float);


void prob6();
float celsius(float);

void prob7();
int toss()
{
    
    int num;
    srand(time(0)); //random number generator
    num=1+ (rand()%2);//number between 1 and 2
    return num;//the num. yeah.


}


void prob8();
float presentValue(float,float,int);


void prob9();
float futureValue(float,float,int);


void prob10();
void getScore(int &);
void calcAverage(int,int,int,int,int);
int findLowest(int,int,int,int,int);


void menu();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
     int choice;
    //Loop the Menu and Problems
    do{
        
        menu();
        cout<<"Hit a number not between 1 and 10 to exit"<<endl;
        cin>>choice;
        
        switch(choice){
            case 1:prob1();break;
           case 2:prob2();break;
           case 3:prob3();break;
           case 4:prob4();break;
           case 5:prob5();break;
           case 6:prob6();break;
           case 7:prob7();break;
           case 8:prob8();break;
           case 9:prob9();break;
            case 10:prob10();break;
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<11);
    
    
    return 0;
}

void prob1()
{
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
    
   
    
}

float calculateretail(float cost, float markup)
{
    float mark = markup/100;
    float up = cost * mark;
    float final = up + cost;
    return final;
}
void prob2()
{
    int NE,SE,NW,SW;
    NE=0;
    SE=0;
    NW=0;
    SW=0;
    cout<<"Enter the sales for the NorthEast Division"<<endl;
    NE=getsales(NE);
    cout<<"Enter the sales for the SouthEast Division"<<endl;
    SE=getsales(SE);
    cout<<"Enter the sales for the NorthWest Division"<<endl;
    NW=getsales(NW);
    cout<<"Enter the sales for the SouthWest Division"<<endl;
    SW=getsales(SW);
    cout<<endl;
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    findHighest(NE,SE,NW,SW);
}
int getsales(int sales)
{
    
    
    cin>>sales;
    while(!(sales > 0))
    {
        cout<<"invalid input!"<<endl;
        cin>>sales;
    }
    
    return sales;
            
}

void findHighest(int NE, int SE, int NW, int SW)
{
    while (!(NE>0 || SE >0 || NW > 0 || SW > 0))
    {
        cout<<"Invalid input!"<<endl;
        break;
    }
    string Win = "NorthEast;";
    int high = NE;
    if(SE>high)
    {
        Win = "SouthEast";
        high=SE;
    }
    if(NW>high)
    {
        Win="NorthWest";
        high=NW;
    }
    if(SW>high)
    {
        Win="SouthWest";
        high=SW;
        
    }
    cout<<Win<<" has the highest sales! of $"<<high<<endl;
    
    
}

void prob3()
{
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
    findLowest3(North,South,East,West,Central);
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

void findLowest3(int North, int South, int East, int West, int Central)
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

void prob4()
{
     cout<<"Time\t\t"<<"distance in meters"<<endl;
    for(int i = 1;i<=10;i++)
    {
        cout<<i<<"s\t\t"<<fallingDistance(i)<<" meters"<<endl;
    }
     
}
float fallingDistance(float time)
{
    float d = 1.0/2.0*9.8*time*time;
    return d;
}
void prob5()
{
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
void prob6()
{
    float F;
    cout<<"This program will convert Fahrenheit to Celsius from 0 degrees to 20"<<endl;
    cout<<"Fahrenheit\t"<<"Celsius"<<endl;
    for(int i=0;i<=20;i++)
    {
        F=i;
        cout<<F<<"\t\t"<<celsius(i)<<endl;
    }
    
}

float celsius(float F)
{
    float C;
    C= .555*(F-32);
    return C;
}

void prob7()
{
    int number,times;
    int heads=0;
    int tails=0;
    cout<<"How many times shall you toss the coin(choose a value higher than 100,000 for best odds..?"<<endl;
    cin>>times;
    for(int i=0;i<times;i++)
    {
        number=toss();
        if(number==1)
        {
            cout<<"Heads"<<endl;
            heads++;
        }
        else
        {
            cout<<"tails"<<endl;
            tails++;
                    
        }
    }
    cout<<"Heads total: "<<heads<<endl;
    cout<<"tails total: "<<tails<<endl;
    system("pause");
}

void prob8()
{
    float FV;
    float I;
    int numYR;
    cout<<"This program will tell you the present value you need for a future value"<<endl;
    cout<<"Please enter the value you want, then the interest rate, then the number of years you plan to wait"<<endl;
    cin>>FV;
    cin>>I;
    I = I/100;
    cin>>numYR;
    cout<<fixed<<setprecision(2)<<showpoint;
    float Pres=presentValue(FV,I,numYR);
    
    cout<<"You must deposit $"<<Pres<<endl;
}
float presentValue(float FV,float I, int numYR )
{
    float Pres;
    Pres = FV/(pow((1+I), numYR));
    return Pres;
}

void prob9()
{
  //Declare Variables
    float PV;
    float IR;
    float months;
    //Initialize Variables
    cout<<"Please enter your present value"<<endl;
    cin>>PV;
    cout<<"Please enter interest rate"<<endl;
    cin>>IR;
    IR = IR/100;
    cout<<"Please enter number of months"<<endl;
    cin>>months;
    cout<<fixed<<setprecision(2)<<showpoint;
    float FV=futureValue(PV,IR,months);
    cout<<" At $"<<PV<<" Present value,"<<
            " "<<IR<<" Interest rate, and at "<<months<<"Months is.. "<<
            " $"<<FV<<"!!"<<endl;   
}
float futureValue(float PV, float IR, int months)
{
    float FV = PV * pow(1+IR,months);
    return FV;
}

void prob10()
{
    int score1,score2,score3,score4,score5;
    
    //Initialize Variables
    cout<<"Please enter value for test 1"<<endl;
    getScore(score1);
    cout<<"Please enter value for test 2"<<endl;
    getScore(score2);
    cout<<"Please enter value for test 3"<<endl;
    getScore(score3);
    cout<<"Please enter value for test 4"<<endl;
    getScore(score4);
    cout<<"Please enter value for test 5"<<endl;
    getScore(score5);
    //Input Data/Variables
    cout<<score1<<" "<<score2<<endl;
    //Process or map the inputs to the outputs
    calcAverage(score1,score2,score3,score4,score5);
    //Display/Output all pertinent variables
}
    void getScore(int &score)
{
    
    cin>>score;
    while(score<0 || score >100)
    {
        cout<<"error, please try again"<<endl;
        cin>>score;
    }
    
}
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    int total = findLowest(score1,score2,score3,score4,score5);
    int avg = total/4;
    cout<<"The average of the scores is "<<avg<<endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int total;
    int lowest = score1;
    if(score2<lowest)
    {
        lowest=score2;
    }
    if(score3<lowest)
    {
        lowest=score3;
    }
    if(score4<lowest)
    {
        lowest=score4;
    }
    if(score5<lowest)
    {
        lowest=score5;
    }
    total=score1+score2+score3+score4+score5-lowest;
    cout<<"The lowest score is "<<lowest<<endl;
    return total;
}
void menu(){
    //Input Data/Variables
    cout<<"\n\n\n\nChoose from the Menu"<<endl;
    cout<<"1. Problem 1 Population"<<endl;
    cout<<"2  for the Winning Division problem"<<endl;
    cout<<"3  for Safest Driving problem"<<endl;
    cout<<"4. for the Falling Distance problem"<<endl;
    cout<<"5. for kinetic energy problem"<<endl;
    cout<<"6. for celsius converter"<<endl;
    cout<<"7. for CoinToss Program"<<endl;
    cout<<"8. For the Present Value Loan problem"<<endl;
    cout<<"9. For the future value compound interest problem"<<endl;
    cout<<"10. For the Lowest Score Test Drop problem"<<endl;
}