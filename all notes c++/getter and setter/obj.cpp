#include<iostream>

using namespace std;

class Hero{
    //properties
    public:
    int health;
    
    // private:
    char level;

    void print()
    {
        cout<<level<<endl;
    }

};

int main()
{
    //creation of obj
    Hero jatin;

    // set using dot(.) operator
    jatin.health = 100;
    jatin.level = 'A';
    cout<<jatin.health<<endl;
    cout<<jatin.level<<endl; //this will give a error bcod
    // its default private 



    return 0;
}