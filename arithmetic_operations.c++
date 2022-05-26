#include <iostream> //main function

using namespace std;

int main() //main function
{
    int num1, num2;
    cout<<endl<<"Note : First value should be greater than secound!"<<endl<<endl;
    cout<<"Enter any two integer value :"<<endl;
    cin>>num1>>num2;

    //Arithmetic operations
    //Addition
    int sum = num1 + num2;
    cout<<"Sum of "<<num1<<" + "<<num2<<" = "<<sum<<endl;

    //Substraction
    int sub = num1 - num2;
    cout<<"Substraction of "<<num1<<" - "<<num2<<" = "<<sub<<endl;

    //Multiplication
    int multi = num1 * num2;
    cout<<"Multiplication of "<<num1<<" * "<<num2<<" = "<<multi<<endl;

    //Division
    float div = num1 / num2; //Decimal values are stored in float datatype
    cout<<"Division of "<<num1<<" / "<<num2<<" = "<<div<<endl;

    //Remainder/Modulus
    float rem = num1 % num2;
    cout<<"Reminder of "<<num1<<" % "<<num2<<" = "<<rem<<endl;

}
