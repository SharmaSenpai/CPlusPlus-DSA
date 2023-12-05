#include<iostream>
using namespace std;

int main()
{
    int age;
    
    cout<<"Enter your Age to check for voting"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"The Person is Eligible"<<endl;
    }
    else
    {
        cout<<"The Person is not Eligible"<<endl;
    }
    return 0;
}