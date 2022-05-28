#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"-------A program to print table of any number----------"<<endl;
    cout<<"Enter any number: ";
    cin>>num;
    for(int i = 1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}