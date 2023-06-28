#include<iostream>
using namespace std;

int count(int n)
{
    int counting = 0;
    while (n)
    {
        int bits = n&1;
        if(bits==1)
            counting++;
        
    }
    return counting;
    
}

int main()
{
    int n=5;
    cout<<count(n)<<endl;


    return 0;
}