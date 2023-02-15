#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    for(int i = 2; i<=sqrt(n);i++){
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;cin>>n;
    if(isprime(n))
    {
        cout<<"its prime "<<n;
    }
    else{
        cout<<"not a prime "<<n;
    }
    cout<<"sqrt of n is "<<sqrt(n);

    return 0;
}