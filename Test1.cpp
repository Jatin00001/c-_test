#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    
    float per =((a + b + c + d + e  + f) * 100) / 600;;
    cout<<per;
    switch (per >= 90 && per < 100){
        case 1:
            cout<<"Grade A";
            break;
        case 0:
            switch (per>= 80&&per < 90)
            {
            case 1:
                cout<<"Grade B";
                break;
            case 0:
                cout<<"Zero";
                break;
            
            }
            break;
    }
}