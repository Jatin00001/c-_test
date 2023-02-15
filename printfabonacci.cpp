#include<bits/stdc++.h>
using namespace std;

void fab(int n){
    if(n==0)
    {
        cout<<"0";
    }
    int a = 0;
    int b = 1 ;
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        cout<<a<<" ";
        sum = a+b;
        a = b;
        b = sum;
    }

    
}

int refab(int n)
{
    if(n==0)
    {
        return 0;
    }
    int a=0;
    int b = 1;
    int sum = a+b ; 
    cout<<a<<" ";
    int ans =refab(n-1);
    return ans;
}

int main()
{
    int n;cin>>n;
    // int a =0 ;
    // int b = 1;
    // int nextvalue = 0;
    // for(int i = 1 ; i <=n ; i++)
    // {
    //     cout<<a<<" ";
    //     nextvalue = a+b;
    //     a = b ;
    //     b = nextvalue ; 
    // }
    cout<<"from normal function - ";fab(n);
    cout<<endl;
    // cout<<"from recursion -      -"<<refab(n,0,0,0);



    return 0;
}