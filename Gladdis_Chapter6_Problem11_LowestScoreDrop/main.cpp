/* 
 * File:   main.cpp
 * Author: Marcus Burton
 * Created on November 14th 2017      
 * Purpose:  program that calculates the avg of group test scores
 * where the lowest score is dropped
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void getScore(int &);
void calcAverage(int,int,int,int,int);
int findLowest(int,int,int,int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
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
    
    //Exit the program
    return 0;
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
