#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(6);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d.size()<<endl;
    cout<<d.empty()<<endl;
    d.erase(d.begin(),d.begin()+2);cout<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<d.size()<<endl;
    cout<<"pop  -->"<<endl;
    d.pop_front();
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<d.size()<<endl;
    return 0;
}