#include<iostream>
using namespace std ;

void convert_into_lower_car(char ch[])
{
    int i = 0;
    while(ch[i] != '\0')
    {
        if( (ch[i] >= 'a' && ch[i]<= 'z') ){
            ch[i] = ch[i];
            // cout<<i<<endl;
            i++;
        }
        else{
            ch[i]  = ch[i] - 'A' + 'a';
            i++;
        }

    }

    
}
void to_upper(char ch[])
{
    int i = 0;
    while(ch[i] != '\0'){
        if( (ch[i] >= 'A' && ch[i]<= 'Z') ){
            ch[i] = ch[i];
            // cout<<i<<endl;
            i++;
        }
        else{
            ch[i]  = ch[i] - 'a' + 'A';
            i++;
        }
    }

}
int main()
{
    char a[5]={'A','A','C','D'};
    convert_into_lower_car(a);
   cout<<a<<endl;
   to_upper(a);
   cout<<"in upper "<<a<<endl;
    return 0;
}