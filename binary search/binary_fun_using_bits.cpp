#include<iostream>
#include<math.h>
using namespace std;

int binary()
{
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    int power = 1;
    while(n!=0)
    {
        int bit = n & 1;
		ans  = (bit * (power)) + ans ; 
		power = power * 10;
		n = n >> 1;
    }
    return ans;
}
int main()
{
    cout<<"binary is "<<binary();
    return 0;
}