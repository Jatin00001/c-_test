#include<iostream>
#include<string>
using namespace std;


int main() {
    string a = "jatin1";
    string b = "jatin";
    if(a.compare(b) == -1) {
        // cout<<"True\n";
        cout<<"B is greater "<<endl;
    }
    else if (a.compare(b) == 0){
    //  cout<<"false\n";
     cout<<"Equal"<<endl;
    }
    else{  // (a.compare(b) == 1) 
        cout<<"a is greater "<<endl;
    }
    cout<<"Address of a " <<&a<<endl;
    cout<<"Address of b"  <<&b<<endl;

    cout<<a.empty()<<endl;
    return 0;
}