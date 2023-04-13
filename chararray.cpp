#include<iostream>
#include<string>
using namespace std;
int getlength(char ch[])
{
    int count = 0;
    for(int i = 0; ch[i] != '\0';i++)
    {
        count++;
    }
    return count;
}
void getreverse(char ch[],int n)
{
    int st = 0;
    int e = n-1;
    while (st<=e)
    {
        swap(ch[st++],ch[e--]);
    }
    
}
int main(){

    char ch[10];
    cout<<"Enter Your name "<<endl;
    cin>>ch;
    // cout<<"Your Name is "<<ch<<endl;

    // yaha pr null char hai !
    // for(int i=0; ch[i] !='\0';i++){
    //     cout<<ch[i]<<" "<<endl;
    // }
    cout<<"Length is "<<getlength(ch)<<endl;
    getreverse(ch,getlength(ch));
    cout<<"Your name is "<<ch<<endl;

    // check palindrome;


    return 0;
}