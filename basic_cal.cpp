#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter First Value \n";
    cin>>a;
    cout<<"Enter Second Value \n";
    cin>>b;
    char oper;
    cout<<"Enter basic operator Value \n";
    cin>>oper;


    switch (oper)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    
    default:cout<<"Devlop mode"<<endl;
        break;
    }


}