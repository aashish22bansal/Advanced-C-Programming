#include<iostream>
#include<conio.h>
using namespace std;

template <class X, class Y> Y big(X a, Y b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout<<"The output for the first function is: "<<big(3,4.4)<<endl;
    cout<<"The output for the second function call is: "<<big(56,6.4)<<endl;
    getch();
    return 0;
}