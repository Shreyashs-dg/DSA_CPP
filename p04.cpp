#include<iostream>
using namespace std;
int main()
{
    cout<<"Part-04"<<endl;

//pq : 1
    int a=4;
    for( int i=1 ;i<=a ; i++){
        for( int j=1 ;j<=a ;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


//pq :2
    int b=4;
    for( int i=1 ;i<=b ; i++){
        for( int j=1 ;j<=b ;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


// pq :3
    int c=4;
    for( int i=1 ;i<=c ; i++){
        char ch='A';
        for( int j=1 ;j<=c ;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    cout<<endl;


//pq :4 
    int n=3;
    char ch='1';
    for( int i=1 ;i<=n ; i++){       
        for( int j=1 ;j<=n ;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    cout<<endl;


//pq : 5
    for( int i=1 ;i<=4 ; i++){       
        for( int j=1 ;j<=i ;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;


// pq : 6
    for( int i=1 ;i<=4 ; i++){  
        for( int j=1 ;j<=i ;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;


//pq :7
    cout<<"pq :7"<<endl;
    for( int i=1 ;i<=4 ; i++){  
        for( int j=i ;j>0 ;j--){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;


//pq : 8
    int num=1;
    for(int i=1 ; i<=4;i++){
        for(int j=1; j<=i ; j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
    cout<<endl;


//pq : 9
    int d=4;
    for(int i=1 ; i<=d ; i++){
        for(int s=0 ;s<i ; s++){
            cout<<" ";
        }
        for(int j=d; j>=i; j--){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;


//pq : 10 
    int e=4;
    for(int i=1 ;i<=e ;i++){
        for(int s=e ;s>i;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1 ; j>0 ; j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}