#include<iostream>
using namespace std;
bool bs(int arr[],int s1,int key)
{
    int s = 0;
    int e = s1-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key) {
            return true;
        }
        if(key>arr[mid])
            s = mid+1;
        if(key<arr[mid])
            e = mid-1;

        mid = s + (e-s)/2;
    }
    return false;
}
int main()
{
    int key = 15;
    int arr[10]={0,2,3,4,5,6,7,8,9};
    if(bs(arr,10,key))
        cout<<"present"<<endl;
    else
        cout<<"Not present "<<endl;
    return 0;
}