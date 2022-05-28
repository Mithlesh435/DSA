#include <iostream>
using namespace std;
int main()
{
    int num, i=1;

    cout<<"Enter any number: ";
    cin>>num;
    cout<<"Table of "<<num<<endl;
    while( i <= 10 )
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }
}
