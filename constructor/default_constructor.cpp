#include<iostream>
using namespace std;
 
 class Data{
    public:
    int name = 0;
    Data() {
        cout<<"default constructor"<<endl;
    }

    // Parameterised constructor
    Data(int name)  
    {
        cout<<this<<"    "<<endl;
        this -> name = name;
    }
 };

 int main()
 {
    // obj created :
    Data jatin(100);//this  means  convert into jatin.Data()
    // jatin.Data() ye call jaige hamesha
    cout<<jatin.name<<endl;


// dynamiccally
    // Data *h = new Data; 

    return 0;

 }