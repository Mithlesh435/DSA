#include <iostream> //include input/output stream
using namespace std;
int main()
{
    int age;
    cout<<"Please enter your age: ";
    cin>>age;
    if(age>18)
    {
        cout<<"Congratulation you are no more a kid ";
    }else{
        cout<<"You are still a kid my boy";
    }
}
