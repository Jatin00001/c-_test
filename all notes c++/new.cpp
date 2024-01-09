#include<iostream>
#include<vector>
using namespace std ;



int main(){
    vector<string> name;
    name.push_back("welcome");
    name.push_back("Jatin");
    
    for (int i = 0; i < name.size(); i++) {
    cout << name[i] << " ";
  } cout<<"\n";
    cout<<name.max_size()<<endl;   // gives you a  max number we can stoe in this memory
    cout<<name.size()<<endl;  // gives you size   how many element present in vector.......

    // cout<<"Hello_" <<name<<endl;
}