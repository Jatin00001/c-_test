#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool valid(char ch)
{
    if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z') || (ch>='0'&&ch<='9'))return 1;
    else return 0; 
}
bool ispalindrome(string s)
{
    int st = 0;
    int e = s.size()-1;
    while(st<=e)
    {
        if(s[st] != s[e]) return 0;
        else st++;e--;
    }
    return 1;
}
int main()
{
    string s ;
    string ans = "";
    cin>>s;
    for(int i = 0 ; i<s.size();i++)
    {
        if(valid(s[i])){
            ans.push_back(s[i]);
        }
    }
    cout<<"s is --> "<<s<<endl;
    cout<<"ans vale string is ---- >   "<<ans<<endl;
    if(s==ans){
        cout<<"Its equal "<<endl;
    }
    else{
        cout<<"Not equal";
    }
    // sabko single case m krna hoga not a case senstive;
    for(int i = 0;i<ans.size();i++)
    {
        ans[i] = is
    }

    //palindrome with symbole
    if(ispalindrome(ans)){
        cout<<"yes palindrome";
    }
    else{
        cout<<"Not a palindome";
    }
    return 0;
}