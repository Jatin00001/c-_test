#include<bits/stdc++.h>
using namespace std ;

bool power_of(int n)
{
    if(n==0)
    {
        return 0;
    }
    int power = 1;

    for(int i = 0; i<=30 ; i++)
    {
        if(n==power)
        {
            return true;
        }
        if(power < INT_MAX/2)
        {
            power = power * 2;
        }

    }
    return 0;
}

bool frombitlevelcheck(int n)
{
    int c = 0;
    while(n != 0)
    {
        int bits = n & 1 ;
        
        cout<<bits<<" ";
        if(bits == 1)
        {
            c++;
        }
        n = n>>1;

    }
    if(c==1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;cout<<"Enter the number for checking its power of 2 or not ? -->  ";
    cin>>n;

    // if(power_of(n))
    // {
    //     cout<<"Yes Its power of 2 ";
    // }
    // else{
    //     cout<<"NOt a power of 2 ";
    // }

    if(frombitlevelcheck(n))
    {
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }



    return 0;
}
