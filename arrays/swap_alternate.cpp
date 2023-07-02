#include<iostream>
#include<array>
using namespace std;
void swap_alternate(auto &arr)
{
    for(int i = 0;i<arr.size();i= i+2){
        if(arr[i+1]<arr.size())
        {
            swap(arr[i],arr[i+1]);
        }
    }

}

int main()
{
    array<int,5> arr = {1,2,3,4,5};

    for(auto &s :arr)
    {
        cout<<s<<" ";
    }cout<<endl;
    swap_alternate(arr);
    for(auto &s :arr)
    {
        cout<<s<<" ";
    }

    return 0;
}