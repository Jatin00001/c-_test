#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(vector<int>& a,vector<int>output,int index,vector<vector<int>>&ans){
    if(index>=a.size())
    {
        ans.push_back(output);
        return;
    }
    //exclude
    solve(a,output,index+1,ans);

    //include

    int element = a[index];
    output.push_back(element);
    solve(a,output,index+1,ans);

}
vector<vector<int>> subset(vector<int>& a){
    vector<vector<int>> ans;
    vector<int>output;
    int index = 0;
    solve(a,output,index,ans);
    return ans;
}

int main()
{
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);
    subset(ans);
    for(auto i: ans)
    {
        cout<<i<<" ";
    }








    return 0;
}