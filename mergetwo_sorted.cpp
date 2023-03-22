#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test(int a[],int n,int b[],int b2 ){
    vector<int> testing;
    for(int i=0;i<n;i++)
    {
        testing.push_back(a[i]);
    }
     for(int i=0;i<b2;i++)
    {
        testing.push_back(b[i]);
    }
    sort(testing.begin(),testing.end());
    for(auto i:testing)
    {
        cout<<" "<<i;
    }
}
vector<int> merge(int a[],int n,int b[],int b2){
    int i = 0;
    int j=0;
    int start = 0;
    vector<int>ans;
    while (i<n && j<b2)
    {
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while (i<n)
    {
        ans.push_back(a[i]);
        i++;
    }
    while (j<b2)
    {
        ans.push_back(b[j]);
        j++;
    }
    
    return ans;
    
    
}
int main()
{
    int a[5]={1,3,5,7,9};
    int b[3]={5,5,5};
    vector<int>ans;
    ans = merge(a,5,b,3);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // test(a,5,b,3);

    return 0;
}