#include <iostream>
using namespace std;
int main()
{
    int num,i=1;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<"Table of "<<num<<endl;
    do
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    } while (i<=10);
    
}