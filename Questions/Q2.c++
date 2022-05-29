// A program to calculates sum of all odd and even number upto given natural number.
#include <iostream>
using namespace std;
int main()
{
    int num,even_sum=0,odd_sum=0;
    cout<<"Enter number upto which you want to find sum of all odd and even number:";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if (i%2==0)
        {
            even_sum=even_sum+i;
        }else{
            odd_sum=odd_sum+i;
        }
    }
    cout<<"Sum of all even number between 0-"<<num<<" = "<<even_sum<<endl;
    cout<<"Sum of all odd number between 0-"<<num<<" = "<<odd_sum<<endl;
}
