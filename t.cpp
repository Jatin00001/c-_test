#include<iostream>
#include<string>
using namespace std;
void eras(string s )
{
    // int size = s.length();
    for(int i = 0; i<s.length();i++){
        if((s[i]>='a' && s[i]<='z'))
        {
            s[i] = s[i];
            cout<<s[i]<<endl;
        }
        else{
            s.erase(i,1);
            cout<<" erase fn "<<s[i]<<endl;
        }
    }
}

int main()
{
    string s;
    cin>>s; 

    cout<<"Before erase() "<<s<<endl;
    cout<<s.length()<<endl;

    // eras(s);
     for(int i = 0; i<s.length();i++){
        if((s[i]>='a' && s[i]<='z'))
        {
            s[i] = s[i];
            cout<<s[i]<<endl;
        }
        else{
            s.erase(s.begin()+i);
            cout<<" erase fn "<<s[i]<<endl;
        }
    }

    cout<<"after erase() "<<s<<endl;
    cout<<s.length()<<endl;


    return 0;
}