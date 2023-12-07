#include <iostream>
using namespace std;
int main()
{
    int a,b,c=0,option;

    cout<<" Enter your first number ";
    cin>>a;
    cout<<"Enter your Second Number ";
    cin>>b;
    cout<<"Choose your Option + - * /";
    cin>>option;

    switch (option)
    {
    case  1:
        c=a+b;
        
        break;
        
    case  2:
        c=a-b;
        break;

    case  3:
        c=a*b;
        break;

    case  4:
        c=a/b;
        break;
    
    default:
        break;
    }
    cout<<c;
    return 0;
}