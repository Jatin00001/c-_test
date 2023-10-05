#include<iostream>
using namespace std;
class Hero{

    //propertiees
    private:
    int health;

    public:

    char level;

    void print(){
        cout<<level<<endl;
    }

    int gethealth()
    {
        return health;
    }
    void set_health(int n)
    {
        health = n;
    }
    void set_level(char ch)
    {
        level = ch;
    }


};

int main(){
    // creation of  object
    Hero jatin;//static allocation
    // cout<<sizeof(jatin)<<endl; // int take 4 bytes = 4*8 = 32 bits



    cout<<"Jatin health is "<<jatin.gethealth()<<endl;
    cout<<"jatin level is "<<jatin.level<<endl;
    //use setter
    jatin.set_health(100);
    jatin.level = 'b';
    cout<<"jatin level is "<<jatin.level<<endl;
    jatin.set_level('A');

    cout<<"Health of jatin is "<<jatin.gethealth()<<endl;
    cout<<"level is "<<jatin.level<<endl;

   
   return 0;
}