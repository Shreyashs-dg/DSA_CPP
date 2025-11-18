#include<iostream>
using namespace std;
//factorial number calculation
int factorial(int n){
        if (n==0 or n==1){
            return 1;
            }
        else {
            return n*factorial(n - 1);
             }
    }

int main (){
    cout<<"p01 file consist codes from gq(1-9)"<<endl;

//gq:1 AREA OF SQUARE
    cout<<"Area of square";
    int a,area;
    cout<<"Enter side length of square : "<<endl;
    cin>>a;
    area=a*a;
    cout<<"Area of square : "<<area<<endl;

//gq:2 MIN OF TWO NUMBERS
    int num1,num2;
    cout<<"Enter two numbers  to say which is small number: "<<endl;
    cin>>num1>>num2;
    if (num1<num2){
        cout<<"number "<<num1<<" is small number"<<endl;
    }
    else if (num1==num2){
        cout<<"number "<<num1<<" and "<<num2<<" both are equal"<<endl;
    }
    else
    {
        cout<<"number "<<num2<<" is small number"<<endl;
    }

//gq:3 IS NUMBER IS ODD OR EVEN
    int num3;
    cout<<"Enter numbers to calculate it is even or odd : "<<endl;
    cin>>num3;
    if (num3%2==0){
        cout<<num3<<" is EVEN number"<<endl;
    }
    else {
        cout<<num3<<" is ODD number"<<endl;
    }

//gq:4 SUM OF NUMBERS FROM 1 TO N
    int n,sum;
    cout<<"Enter numbers to find sum of those number : "<<endl;
    cin>>n;
    sum=0;
    for(int i=1 ;i <= n;i++){
        sum+=i;
    }
    cout<<" sum of number from 1 to "<< n <<" = "<< sum <<endl;

//gq:5 is this number is prime or not

    int num4,i=2;
    bool isprime=true;
    cout<<"Enter numbers to say prime number or not : "<<endl;
    cin>>num4;
    for(i=2; i*i <= num4 ;i++){
        if ( num4 % i == 0){
           isprime = false;
           break; 
            }  
    }
    if (isprime)
        cout<< num4 <<" is a prime number "<<endl;
    else 
        cout<< num4 <<" is a non prime number "<<endl;
 
//gq:6  CLACULATION OF SIMPLE INTREST 
    int p,r,t,si;
    cout<<"Enter principal amount, rate of intrest, time period (in year) : "<<endl;
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<"Simple intrest for "<<t<<" years ="<<si<<endl;

//gq:7 MAX OF 2 NUMBERS

    int num5,num6;
    cout<<"Enter two numbers  to say which is larger number: "<<endl;
    cin>>num5>>num6;
    if (num5>num6){
        cout<<"number "<<num5<<" is larger number"<<endl;
    }
    else if (num5==num6){
        cout<<"number "<<num5<<" and "<<num6<<" both are equal"<<endl;
    }
    else
    {
        cout<<"number "<<num6<<" is larger number"<<endl;
    }

//gq:8 calculate factorial of n
    int num7,factirialnum;
    cout<<"Enter numbers  to calculate it's factorial: "<<endl;
    cin>>num7;
    factirialnum=factorial(num7);
    cout<<"factirial of "<< num7 <<"="<<factirialnum<<endl;

//gq:9 PERSON IS ELEGIBLE for driving licence OR NOT 
    int age ;
    cout<<"Enter age to decide elegible for driving licence or not  : "<<endl;
    cin>>age;
    if (age>=18){
        cout<<"you are elegible for driving licence  "<<endl;
    }
    else {
        cout<<"you are not elegible for driving licence  "<<endl;
    }
    return 0;
}
