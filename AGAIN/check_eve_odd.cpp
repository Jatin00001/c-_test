#include<iostream>

using namespace std;

void check_eve_odd(int& a)
{
    if(a&1)
        cout<<"its a odd number"<<endl;
    else
        cout<<"its even number"<<endl;
    
}

int main(){
    int n=132215646;
    check_eve_odd(n);
    return 0;
}