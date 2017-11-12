/* 
 * File:   main.cpp
 * Author: Marcus Burton   
 * Created on November 11th       
 * Purpose: To simulate coin toss odds1                                  
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <ctime>        //for random number
#include <cstdlib>      // for rand nad srand
#include <time.h>        
#include <string>

using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

int toss()
{
    
    int num;
    srand(time(0)); //random number generator
    num=1+ (rand()%2);//number between 1 and 2
    return num;//the num. yeah.


}
//Execution Begins Here!
int main(int argc, char** argv) {
    int number,times;
    int heads=0;
    int tails=0;
    cout<<"How many times shall you toss the coin..?"<<endl;
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
    
    return 0;
}



