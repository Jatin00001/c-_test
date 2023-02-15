#include<iostream>
using namespace std;


int sum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += i ;
    }
    return sum;
}
int sumrecursion(int n)
{
    if(n==0)
    {
        return 0;
    }
    // int sum = n;
    // sum =  sum + (sumrecursion(n-1));
    return n + sumrecursion(n-1);
}
int main()
{
    int n;
    cin>>n;
    // int sum = 0;
    // for(int i = 1; i<=n;i++)
    // {
    //     sum +=i;
    // }
    // cout<<sum;
    // cout<<"sum from n normal function "<<sum(n);
    cout<<sumrecursion(n)<<" form recursion ";
}