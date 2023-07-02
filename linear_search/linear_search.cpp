#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void input(vector<int>&vct)
{
    for(int i = 0;i<5;i++)
    {
        int temp;
        cin>>temp;
        vct.push_back(temp);
    }
    return;
}
void print(vector<int>&a)
{
    //using itrater!
    // for(auto i = a.begin();  i!=a.end() ; i++)
    // {
    //     cout<<*i<<" ";
    // }
    // uaing  simple for loop
    // for(int i = 0;i<a.size();i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    //using loop with direct element
    for(auto i:a)
    {
        cout<<i<<" ";
    }
}

bool is_found(vector<int>&vct,int k)
{
    for(int i = 0; i<vct.size();i++)
    {
        if(vct[i] == k){
            cout<<i+1;
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int>search;
    input(search);
    int key = 7;
    sort(search.begin(), search.end());
    if(is_found(search,key))
    {
        cout<<"found at : ";
    }
    else
        cout<<"not found";
    // print(search);

    return 0;
}