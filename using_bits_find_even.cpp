#include<iostream>
using namespace std ;

bool isEven(int n)
{
    if(n & 1)
        return false;
    
    return true;
}

int main()
{
    int n; cin>>n;

    if(isEven(n))
    {
        cout<<"Even";
    }
    else    
        cout<<"Odd";

    return 0;
}