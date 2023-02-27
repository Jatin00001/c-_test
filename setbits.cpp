#include<iostream>
using namespace std;

int setBit(int n)
{
    int ans  = 0;
    while (n!=0)
    {
        int bit = n & 1 ;
        if(bit == 1)
        {
            ans++;
        }
        n = n >> 1;

    }
    return ans;
    
}

int main()
{

    int a,b;
    cout<<"Enter First value :- "<<endl;
    cin>>a;
    cout<<"Enter second value :- "<<endl;
    cin>>b;

    cout<<"Setbits is :-  "<<setBit(a)+setBit(b)<<endl;

    return 0 ;

}