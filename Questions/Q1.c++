//A program to calculate the factorial of an interger using while, for and do while loop.

#include <iostream>
using namespace std;
int main()
{
    int num,option, fact = 1;
    cout<<"Enter any number : ";
    cin>>num;
    int val = num;
    cout<<"Please select -> "<<endl<<"1.while loop"<<endl<<"2.for loop"<<endl<<"3.do while loop "<<":";
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"Factorial using while loop"<<endl;
        while(num!=0) 
        {
            fact = fact*num; // or fact *=num
            num--;
        }
        cout<<"Factorial of "<<val<<" is : "<<fact<<endl;
        break;
    case 2:
        cout<<"Factorial using for loop"<<endl;
        for(int i=num; i!=0; i--) 
        {
            fact = fact*i; // or fact *=num
        }
        cout<<"Factorial of "<<val<<" is : "<<fact<<endl;
        break;
    case 3:
        cout<<"Factorial using do while loop"<<endl;
        do
        {
            fact = fact*num; // or fact *=num
            num--;
        } while (num!=0);
        cout<<"Factorial of "<<val<<" is : "<<fact<<endl;
        break;

    default:
        cout<<"Please enter valid number!!";
        break;
    }
}