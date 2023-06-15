#include<iostream>

using namespace std;

int count(int b)
{
    if(b==0)
        return 0;
    count(b-1);
    cout<<b<<" ";
    
}

int main(){
    int n=10;
    count(n);
    // cout<<n;
    return 0;
}