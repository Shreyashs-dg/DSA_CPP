#include<iostream>
#include <climits>
#include <cfloat>
using namespace std;
//program to check whether number is divisible by 2 or not 
int isPow2(int n){
    if (n<=0){
        return false;
    }
    while( n%2==0 ){
        n=n/2;
    }
    return (n==1);
}

//Program to reverse the integere 
int reversed(int n){
    int rev=0;
    int digit=0;
    while(n>0){
        digit= n%10;
        rev=digit+rev*10;
        n=n/10;
    }
    return rev;
}
int main()
{
    cout<<" part -07 "<<endl;
//bitwise and &
    cout<<"bitwise and of(6&10) "<<(6&10)<<endl;
//bitwise or |
    cout<<"bitwise or of(6|10) "<<(6|10)<<endl;
//bitwise exor ^ 
    cout<<"bitwise or of(6^10) "<<(6^10)<<endl;  
//bitwise leftshift 
    cout<<"bitwise leftshift(10<<2) "<< (10<<2) <<endl;
//bitwise rightshift 
    cout<<"bitwise rightshift(10>>1) "<< (10>>1) <<endl;
    
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long  int)<<endl;
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(unsigned int)<<endl;
    cout<<sizeof(signed int)<<endl;
    cout<<endl;
    cout<<sizeof(unsigned char)<<endl;
    cout<<sizeof(signed char)<<endl;
    cout<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long double)<<endl;
    cout<<endl;
    cout<<sizeof(float)<<endl;
    cout<<endl;

    int x=INT_MIN;
    int y=INT_MAX;
    float z=FLT_MIN;
    cout<<x-1<<endl;
    cout<<y+1<<endl;
    cout<<z<<endl;


//program to check whether number is divisible by 2 or not 
    int num=65;
    if (isPow2(num))
        cout<<"Yes it is divisible by 2";
    else 
        cout<<"No  it is not divisible by 2";
    cout<<endl;

//Program to reverse the integere 
    int num1=143;
    cout<<"Rebersed number of "<< num1 << "=" <<reversed(num1);

    return 0;
}
