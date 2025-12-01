// OOP approach (Generic)

#include <iostream>
using namespace std;

template<class T>
class Arithematic
{
    public :
        T iNo1 = 0;
        T iNo2 = 0;

    Arithematic(T A, T B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    T Addition()
    {
        T Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }

    T Substraction()
    {
        T Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }
    
};

int main()
{
    Arithematic aobj1(11,10);
    Arithematic aobj2(101,50);

    cout<<aobj1.Addition()<<"\n";        // Error(Not in us)
    cout<<aobj1.Substraction()<<"\n";   // Error(Not in us)

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction()<<"\n";

    return 0;
}