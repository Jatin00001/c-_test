#include<iostream>
#include<string>
using namespace std;

int length(string s)
{
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(string s,int n)
{
    int st = 0 ;
    int e = n-1;
    while (st<=e)
    {
        swap(s[st++],s[e--]);
        
    }

}
int main()
{
    string s ;
    cout<<"Enter your name "<<endl;
    cin>>s;
    cout<<"Your name is "<<s<<endl;
    cout<<"Length is string is "<<length(s)<<endl;
    cout<<"Reverse of string is ";
    reverse(s,length(s));
    cout<<s;



    return 0;
}