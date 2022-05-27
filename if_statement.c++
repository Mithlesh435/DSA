#include <iostream> //include input/output stream
using namespace std;
int main() //main function
{
    int age; //integer variable to store age
    cout<<"Please enter your age: ";
    cin>>age;
    if(age>18) //condition
    {
        cout<<"Congratulation you are no more a kid !!";
    }else{
        cout<<"You are still a kid my boy!";
    }
}
