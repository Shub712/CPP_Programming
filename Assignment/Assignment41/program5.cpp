////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////
//  Function name : Mult
//  Description :   used to display the product of a number
//  Input :         Digit
//  Ouput :         Integer(To display on the console)
//  Author :        Shubham Kiran Pawar
//  Date :          10/12/2025
///////////////////////////////////////////////////////////////

int Mult(int iNo)
{
    static int iCnt = 1, itemp = 0, iAns = 1 ;

    if(iCnt <= iNo)
    {
        itemp = iNo % 10 ;
        iAns = iAns * itemp;
        iCnt++;
        iNo = iNo / 10;
        Mult(iNo);
    }
    cout<<"\n";
    return iAns;
    
}

///////////////////////////////////////////////////////////////
//
//  Entry point function of a application
//
///////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   int iRet = 0;

   cout<<"Enter The Number : \n";
   cin>>iValue;

   iRet = Mult(iValue);

   cout<<iRet;

    return 0;
}

///////////////////////////////////////////////////////////////
//  Test Cases: 
//  
//  Input : 523   Output : 30
//
//////////////////////////////////////////////////////////////