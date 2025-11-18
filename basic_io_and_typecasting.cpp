#include<iostream>
using namespace std;
int main()
{
//part-02
    cout<<"Part-02"<<endl;
 
    int a,b,sum;
    cout<<"Enter two numbers to calculate it's sum : ";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum of "<< a <<" and " << b <<" = "<< sum <<endl;

//type conversion 1)type conversion :automatic
//type casting 2)type casting : manual
    float num1=10.25;//type casting 
    int num2=num1;
    cout<<"num2= "<< num2 <<endl;


    return 0;
}
