/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 25th, 2017, 9:05 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
int getsales(int);
void findHighest(int,int,int,int );
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
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
    //Exit the program
    return 0;
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
