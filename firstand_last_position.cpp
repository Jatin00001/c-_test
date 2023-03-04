#include<iostream>
using namespace std;

int firstposition(int arr[],int n,int key)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            end = mid -1;
        }
        if(arr[mid]<key)
            start = mid+1;
        if(arr[mid]>key)
            end = mid - 1;
        
        mid = start + (end-start)/2;
    }
    return ans ;

}
int lastposition(int arr[],int n,int key)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            start = mid +1;
        }
        if(arr[mid]<key)
            start = mid+1;
        if(arr[mid]>key)
            end = mid - 1;
        
        mid = start + (end-start)/2;
    }
    return ans ;

}
int main()
{
    int arr[10]={3,3,3,3,3,3,3,3,3,3};
    cout<<"First positon of 3 on index "<<firstposition(arr,10,3);cout<<endl;
    cout<<"Last positon of 3 is "<<lastposition(arr,10,3);


    return 0;
}