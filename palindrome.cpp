#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool check_palindrome(string s)
{
    int st = 0;
    int end = s.length()-1;

    while(st <= end)
    {
        if(s[st] != s[end])return 0;
        else st++;end--;
    }
    return 1;

}

int main()
{
    // palindrome vo hota h jo reverse krne pr same aaye
    string s ; 
    cout<<"Enter Your  name " <<endl;
    cin>>s;
    cout<<"Your name is "<<s<<endl;
    
    // now reverse a string 
    reverse(s.begin(),s.end());
    cout<<"Your reverse str  is "<<s<<endl;

    // palindrome

    cout<<"Palindrome or not ? -- > "<<check_palindrome(s);

    return 0;
}