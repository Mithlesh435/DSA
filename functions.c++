#include <iostream>
using namespace std;

int _ageCalc(int x, int y) //user defined function to calculate age
{
    int age = y-x;
    return age;
}

int main()
{
    int b_year,c_year;
    cout<<"Enter year of birth : ";
    cin>>b_year;
    cout<<"Enter current Year : ";
    cin>>c_year;
    int age =  _ageCalc(b_year,c_year); //calling user defined function by values
    cout<<"You are "<<age<<" years old";
}
