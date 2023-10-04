#include<iostream>
#include<string>
using namespace std;


int main() {
    string a = "jatin";
    string b = "jatin1";
    if(a.compare(b)==0) {
        cout<<"True\n";
    }
    else{
     cout<<"false\n";
    }
    cout<<"Address of a " <<&a<<endl;
    cout<<"Address of b"  <<&b<<endl;

    return 0;
}