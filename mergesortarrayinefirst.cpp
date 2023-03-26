
#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<int>v;
    int a[5]={1,2,3,4,5};
    int b[3]={6,7,8};
    int s = 0;
    int j = 0;
    while (s<5 && j<3)
    {
        if(a[s]<b[j])
        {
            v.push_back(a[s]);
            s++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }


    while (s<5)
    {
        v.push_back(a[s]);
        s++;
    }
    while (j<3)
    {
        v.push_back(b[j]);
        j++;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    




    return 0;
}