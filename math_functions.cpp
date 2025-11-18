#include<iostream>
using namespace std;

//q1) calculate sum from 1-n 
int sum(int n){
    int sum=0;
    for ( int i=0; i<n;i++){
        sum+=i;
    }
    return sum;
}


// q2) pass by value 
int change(int x){
    x=x*2;
    return x;
}


// q3) sum of digit  of a number
int sumOfDigit(int n){
    int lastDigit=0 ,digitSum=0 ;
    while(n > 0){
        lastDigit = n % 10 ;
        digitSum += lastDigit;
        n=n/10;
    }
    return digitSum;
}


// q4) ncr factorial calculator 
// factorial calculation 
int factorial(int n){
    if ( n==1 || n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
//ncr factorial calculation 
int ncr(int n, int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    return fact_n / (fact_r * fact_nmr) ;
}


// q5) prime checking 
void prime(int num){
    int i=2;
    bool isprime=true;
    for(i=2; i*i <= num ;i++){
        if ( num % i == 0){
           isprime = false;
           break; 
            }  
    }
    if (isprime && num>0)
        cout<< num <<" is a prime number "<<endl;
    else 
        cout<< num <<" is a non prime number "<<endl;   
}


// q6) prime from 1 to N
bool isnPrime(int num){
    if (num<2){
    return false;
        }
    for(int i=2 ; i*i<=num ; i++ ){
        if ( num%i == 0 ){
            return false;
        }
    }
        return true;
}


//q7) printing fibonencial series from 1 to n
int fibonencial(int fib){
    int a=0 ,b=1 ;
    while(fib>0){
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;
        fib--;        
    }
}

int main()
{

    cout<<"part-05"<<endl;


//Q1) calculate sum from 1-n 
    cout<< sum(10)<<endl;
    cout<<factorial(5)<<endl;


// q2) pass by value 
    int x=10;
    cout<<"before changing x= "<< x <<"\nchange of x ="<<change(x)<<endl;


// q3) sum of digit of a number
int num=144;
    cout<<"Sum of digit of "<< num <<" = "<<sumOfDigit(num)<<endl;
    
    
// q4) ncr binomial coefficent calculator
    int n=7;
    int r=5;
    cout<<"NCR factorial = "<< n <<" and "<< r << " = "<< ncr(n,r) <<endl;
    

// q5)  prime number checking 
    int prm=7;
    prime(prm);


// q6) program to print all prime numbers from 1 to n
    int nPrime;
    cout<<"Enter number to print prime numberse which are lies in b/w that : "<<endl;
    cin>>nPrime;
    cout<<"Prime numbers from 1 to "<< nPrime <<" are "<<endl;
    for(int i=1 ; i<=nPrime ; i++ ){
        if (isnPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;


// q7) printing fibonencial series from 1 to n
    int fnum;
    cout<<"Enter number to print fibonential series up to : ";
    cin>>fnum;
    cout<<" Fibonential series from 1 to "<< fnum <<" : "<<endl;
    cout<< fibonencial(fnum) <<endl;

    return 0;
}

