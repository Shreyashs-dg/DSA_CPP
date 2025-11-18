#include<iostream>
using namespace std;

//q1) convert decimal to binary no
int decimalToBinary(int decimalNo){
    int ans=0;
    int pow=1;
    while( decimalNo>0 ){
        int rem = decimalNo % 2 ;
        decimalNo /= 2;
        ans += (rem*pow);
        pow *=10;
    }
    return ans;
}

//q2) convert binary to decimal
int binaryToDecimal(int binaryNo){
    int ans=0;
    int pow=1;
    while( binaryNo>0 ){
        int rem = binaryNo % 10 ;
        binaryNo /= 10;
        ans += (rem*pow);
        pow *=2;
    }
    return ans;
}

int main()
{
    cout<<"Part-06"<<endl;
//q1 convert decimal to binary no 
    int decimalNo=10;
    cout<<"Decimal no "<< decimalNo <<" to binary "<<decimalToBinary(decimalNo)<<endl;
//q2 convert binary no to decimal no  
    int binaryNo=1010;
    cout<<"binary no "<< binaryNo <<" to decimal "<<binaryToDecimal(binaryNo);
    return 0;

}