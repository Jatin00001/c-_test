#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
    vector<int>a{1,2,3,4,65};
    int row = 3;
    int ans;
    vector<vector<int>> test(row);
    int col = 3;
    for(int i = 0; i<test.size();i++){  
        vector<int>temp;
        for(int j = 0;j<col;j++)
        {
            cin>>ans;
            temp.push_back(ans);
            test[i] = temp;
        }
        
    }
    for(int i = 0; i<test.size();i++){
        cout<<"{";
        for(int j = 0; j<test[i].size();j++)
        {
            cout<<test[i][j]<<" ";
        }
        cout<<"} \n";

    }
    cout<<endl;
    vector<vector<int>> m
    {
        {1,0,0,0},
        {1,1,0,1,6},
        {1,1,0,0},
        {0,1,1,1}
    };
    // cout<<m[].size()<<endl;
    // cout<m[1].size()<<endl;
    for(int i = 0; i<m.size();i++){
        cout<<"{";
        for(int j = 0; j<m[i].size();j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"} \n";

    }
    int n = 4;



    return 0;
}