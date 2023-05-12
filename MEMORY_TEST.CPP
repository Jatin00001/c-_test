#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    // int arr[n];
    // cout<<"assign"<<endl;
    int* n1 = new int[n];
    for(int i=0;i<10;i++)
    {
        cin>>n1[i];
    }cout<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<n1[i];
    }

    delete n1;cout<<endl;
    cout<<"delete"<<endl;
    cout<<*n1<<endl;
    return 0;
}