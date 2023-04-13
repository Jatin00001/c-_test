#include<iostream>
using namespace std;
int length(char ch[])
{
    int count = 0;
    int i = 0;
    while(ch[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

bool checkpalindrome(char ch[],int last)
{
    int st = 0;
    int e = last - 1;
    while (st<=e)
    {
        if(ch[st] != ch[e]) return 0;
        else st++;e--;;
    }
    return 1;
    
}
int main()
{
    char ch[20] ;

    cin>>ch;
    //check palindrome or Not ?
    cout<<length(ch)<<endl;
    int l = length(ch);
    cout<<"Palindrome or not ? -- >  "<<checkpalindrome(ch,l);
    // 


    return 0;
}