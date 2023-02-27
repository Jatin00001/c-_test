#include<iostream>
using namespace std;

int ntFabonacci(int n)
{
    int a = 0;
    int b = 1;
    int sum ; 
    for(int i = 1 ; i<=n ; i++)
    {
        cout<<a<<" ";
        if(i==n)
        {
            cout<<a<<endl;
        }
        sum = a+b;
        a = b ;
        b = sum;
    }
    cout<<a<<endl;
}

int main()
{
    int n ;
    cin>>n;
    cout<<ntFabonacci(n)<<endl;

    return 0;
}