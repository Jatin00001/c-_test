#include<iostream>
#include<array>
using namespace std;

void reverse(auto &a)
{
    int s = 0,e = a.size()-1;
    while(s<e)
    {
        swap(a[s++],a[e--]);
    }
}

int main()
{
    array<int,5>a{2,7,5,6,4};
    for(auto &s : a)
    {
        cout<<s<<" ";
    }cout<<endl;
    reverse(a);
    // for(int i = 0;i<a.size();i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // this is called ranged loop 
    for(auto &s : a)
    {
        cout<<s<<" ";
    }

    return 0;
}