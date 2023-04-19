#include<iostream>
#include<string>
#include<algorithm>

using  namespace std;
char to_lower(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        return ch;
    }
    else
    {
        return ch-'A'+'a';
    }

}
bool check_palindrome(string s1)
{
    int s = 0;
    int e = s1.length()-1;
    while(s<=e)
    {
        if(to_lower(s1[s]) != to_lower(s1[e]) ){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}



int main()
{
    string s;
    cin>>s;
    
    if(check_palindrome(s))
    {
        cout<<"Its palindrome";
    }
    else{
        cout<<"not a palindrome";
    }

    return 0;
}