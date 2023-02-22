#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=10;
    int power = 1;
    int ans = 0;
    while (n!=0) 
    {
        int bit = n & 1 ;
        // ans = (bit * pow(10,i))+ans;
        //i++;
        ans = (bit * (power) ) + ans ; 
        power = power * 10;
        n = n >> 1;

    }
    cout<<"Answer is "<<ans<<endl;

    return 0;

    
}