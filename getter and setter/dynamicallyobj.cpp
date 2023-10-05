#include<iostream>
// #include"hero.cpp"
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

int main()
{
    //static
    Hero stat;
    // cout<<stat.gethealth()<<endl;
    // //esme jo stat h vo address h obj ka 
    // cout<<stat.level<<endl;

    stat.set_health(100);
    stat.set_level('a');
    cout<<stat.gethealth()<<endl;
    cout<<stat.level<<endl;




    // int* p = new int;

    // int *s = new int[5];
    // dynamically
    // hero type ka pointer  Hero *h

    Hero *h =  new Hero;
    // cout<<(*h).gethealth()<<endl;
    // cout<<(*h).level<<endl;
    //acha tarika h
    h->set_health(1000);
    h->set_level('B');
    cout<<h->gethealth()<<endl;
    cout<< h->level<<endl;

    return 0;
}