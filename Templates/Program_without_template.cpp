#include<iostream>
#include<conio.h>
using namespace std;

int big(int a, int b)
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

double big(double a, double b)
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
    cout<<"The output for the first function is: "<<big(3,4)<<endl;
    cout<<"The output for the second function call is: "<<big(5.6,6.4)<<endl;
    getch();
    return 0;
}