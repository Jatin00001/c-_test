#include<iostream>
#include<list>
using namespace std;


int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // l.erase(l.begin());
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of ---> "<<l.size()<<endl;
    
    //list all assign same element;
    list<int> j;
    j.push_back(1);
    j.push_back(2);
    j.push_back(3);
    j.push_back(4);
    j.push_back(5);
    for(auto i:j)
    {
        cout<<i<<" ";
    }cout<<endl;
    j.pop_back();
    for(auto i:j)
    {
        cout<<i<<" ";
    }cout<<endl;
    j.pop_front();
    for(auto i:j)
    {
        cout<<i<<" ";
    }cout<<endl;
    for(auto i=j.begin();i!=j.end();i++)
    {
       cout<<*i<<" ";
    }
    return 0;
}