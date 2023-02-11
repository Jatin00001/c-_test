#include<bits/stdc++.h>
using namespace std;

int findsimpleinterest(int a, int b, int c)
{
    int prt = (a*b*c)/100;
    return prt;
}

int main(){
    int a,b,c;
    cout<<"please enter a ,b ,c  : \n";
    cin>>a>>b>>c;

    cout<<findsimpleinterest(a,b,c);
    return 0;
}