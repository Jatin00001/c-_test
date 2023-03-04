#include<bits/stdc++.h>
using namespace std;

void pair_sum(int arr[],int size,int sum) {
    int i = 0;
    for(; i<size ; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                // vector<int>temp;
                // temp.push_back(min(arr[i],arr[j]));
                // temp.push_back(max(arr[i],arr[j]));
                cout<<arr[i]<<"    "<<arr[j]<<endl;
            }   
        }
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int sum = 6;
    pair_sum(arr,5,sum);


    return 0;
}