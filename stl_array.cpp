#include<iostream>
#include<array>
using namespace std;



int main()
{
    array<int,4> a ={1,2,3,4};
    int size  = a.size();
    cout<<"size --> a --> "<<size<<endl;

    for(int i = 0 ; i<size;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;

    cout<<"Element is at index 2 --> "<<a.at(2)<<endl;
    //check array is empty or not ? its return bool value agr khale hoge to true return karega vrna false;
    cout<<a.empty()<<endl;
    //first and last element
    cout<<"First element is --> "<<a.front()<<endl;
    cout<<"last element is --> "<<a.back();
    
}