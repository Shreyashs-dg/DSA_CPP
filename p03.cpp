#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0 || n==1 ){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}
int main()
{
//part -03
    cout<<"part-03"<<endl;

//Grades above 90 A  IN BETWEEN 80-90 B AND BELLOW 80 C GRADE 
    int marks;
    cout<<"Enter your marks : "<<endl;
    cin>>marks;
    if (marks>=90 && marks<=100){
        cout<<"Your grade is A ";
    }
    else if  (marks>=80 && marks<=90){
        cout<<"Your grade is B ";
    }
    else if (marks<=80 && marks>=0){
        cout<<"Your grade is C ";
    }
    else {
        cout<<"Enter correct marks (0-100)";
    }
    cout<<endl;
//character is lower or upper case
    char ch;
    cout<<"Enter your character : "<<endl;
    cin>>ch;
    if (ch>='a' && ch<='z'){
        cout<<"lower case ";
    }
    else if (ch>='A' && ch<='Z'){
        cout<<"upper case ";
    }
    else {
        cout<<"Enter only alphabets ";
    }
    cout<<endl;
//character is lower or upper case using asci value
    char cha;
    cout<<"Enter your character :"<<endl;
    cin>>cha;
    if (cha>=65 && cha<=90){
        cout<<"uppercase ";
    }
    else if (cha>=97 && cha<=122){
        cout<<"lower case ";
    }
    else {
        cout<<"Enter only alphabets ";
    }
    cout<<endl;
//ternary statement
    int n=-10;
    string ter;
    ter=( n>=0 ? "POSITIVE" : "NEGATIVE");
    cout<<ter<<endl;


//While loops 
    int i=1;
    while (i<=10){
        cout<<i<<endl;
        i++;
    }
    cout<<endl;

//for loops 
//sum of n numbers 
    int total=0;
    for(int j=0 ; j<=10 ; j++ ){
        total+=j;
        if ( j==9 ){
            break;
        }
    }
    cout<<"Sum of n = "<< total << endl;

// Sum of odd numbers 
    int sumOdd=0;
    for ( int k=1 ; k<=10; k+=2 ){
        sumOdd+=k;
    }
    cout<<"Sum of odd numbers = "<<sumOdd<<endl;

// do while 
// numbers from 1 to 10
    int m=0;
    do{
        cout<<m<<endl;
        m++;
    }while(m<=10);
//code to check number is prime or not 
    bool isPrime = true;
    int num=101;
    for (int j=2 ; j*j <= num ; j++ ){
        if ( num % j == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime && num>1 ){
        cout<<"It is a prime number "<<endl;
    }
    else {
        cout<<"It is not a prime number "<<endl;
    }

//HW
//sum of n numbers divisibl by 3
    int z=10;
    int sumThree=0;
    for(int j=1 ; j<=z ;j++){
        if (j%3 == 0 ){
            sumThree+=j;
        }
    }
    cout<<"Sum of numbers divisible by 3 = "<<sumThree<<endl;

//factorial of n
    int g=10;
    int fact;
    fact=factorial(g);
    cout<<"Factorial of "<< g <<" = "<<fact<<endl;
        
    return 0;
}
