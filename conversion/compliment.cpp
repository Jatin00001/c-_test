#include<iostream>

using namespace std;

int compliment(int &a)
{
    int mask = 0;
    int m = a;
    // cout<<a<<endl;
    while (m)
    {
        mask = (mask<<1) | 1;
        m = m >>1;
    }
    int ans =  a;
    return ~ans & mask;
    
}

int main()
{
    int n = 5;
    cout<<compliment(n);


    return 0;
}