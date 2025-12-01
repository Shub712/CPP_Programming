#include <iostream>
using namespace std;

float Summation(float Arr[], int iSize)
{
    int iCnt =0;
    float fSum =0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        fSum = fSum + Arr[iCnt];
    }
    return fSum;
}

int main()
{
    float Brr[]={10.5f,20.2f,30.3f,40.4f,50.5f};
    float fRet = 0;

    fRet = Summation(Brr, 5);

    cout<<"Summation is : "<<fRet<<"\n";

    return 0;
}