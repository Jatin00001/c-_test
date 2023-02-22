#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int num;
    cin>>num;
    cin>>n;
    int power = num;
    int i = 1;
    if(n==0)
    {
        cout<<"1"<<endl;
    }
    while(n!=0)
    {
        cout<<num<<" power x "<<i<< " is "<<power<<endl;
        power = power*num;
        n--;i++;
    }

    return 0;
}