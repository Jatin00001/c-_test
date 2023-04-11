#include<iostream>
using namespace std;

int count(char arr[])
{
    int count  = 0;
    for(int i = 0; arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void getReverse(char ch[],int end1)
{
    int end = end1-1;
    int st = 0;
    while (st<=end)
    {
        swap(ch[st],ch[end]);
        st++;
        end--;
    }
    
}

int main()
{
    char name[20];
    cout<<"Enter Your Name "<<endl;
    cin>>name;

    cout<<"Your name is ";
    cout<<name<<endl;

    // name[3]='\0';
    // cout<<name<<endl;
    cout<<"Reverse string is  --> "<<endl;
    getReverse(name,count(name));
    cout<<name;
    

    return 0;
}