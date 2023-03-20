#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> a;
    // for(int i = 0 ; i<3;i++)
    // {
    //     int temp ;
    //     cin>>temp;
    //     a.push_back(temp);
    // }
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"no of size(elements) in a ----> "<<a.size()<<endl;
    //check capacity
    cout<<"capacity(space) in a  ----> "<<a.capacity()<<endl;

    vector<int>temp(a);// copy a into temp
    cout<<"temp is -->";
    for(auto i:temp)
    {
        cout<<i<<" ";
    }
    
    cout<<"Before pop "<<endl;
    for(auto i:temp)
    {
        temp.pop_back();
    }
    cout<<"after pop -----> ";
    if(temp.empty())cout<<"Empty"<<endl;
    // new vector and copy into temp vector ;
    vector<int>b;
    b.push_back(99);
    b.push_back(9);
    b.push_back(19);
    b.push_back(20);
     for(auto i:b)
    {
        temp.push_back(i);
    }

    //
    cout<<endl;
    cout<<b.front()<<endl;
    cout<<b.back()<<endl;
    b.clear();
    if(b.empty())cout<<"b is --> Empty b'cos we use clear function "<<endl;
  
    return 0;
}