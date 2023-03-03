#include<bits/stdc++.h>
using namespace std;

void intersection(int a[],int s1,int b[],int s2)
{
    for(int i = 0;i<s1;i++)
    {
        int temp  = a[i];
        for(int j = 0; j<s2; j++)
        {
            if(temp == b[j])
            {
                cout<<a[i]<<" ";
                b[j] = INT_MIN;
                cout<<b[j]<<endl;
            }
            if(temp < b[j] ){
                break;
            }
        }
    }
    for(int i = 0 ; i<s2;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a1[5]={1,2,3,4,5};
    int a2[2]={3,4};
    intersection(a1,5,a2,2);


    return 0;
}