#include<iostream>
#include<climits>
#include<unordered_map>
#include<unordered_set>
using namespace std;

//linear search 
int linearsearch(int lArray[] ,int size ,int target ){
    for(int i=0; i<size; i++){
        if (lArray[i]==target){
            return i;
        }
    }
    return -1;
}

//rerverse an array using swap function 
int revArray(int rArray[] ,int size){
    int start=0,end=size-1;
    while (start<end){
        swap(rArray[start],rArray[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<rArray[i]<<" ";
    }
}

//program to calculate sum and product of all numbers in an array
int sumProduct(int arr[],int sz){
    int sum=0;
    int pro=1;
    int sumarr[sz];
    int proarr[sz];
    for(int i=0;i<sz;i++){
        sum+=arr[i];
        pro*=arr[i];
        sumarr[i]=sum;
        proarr[i]=pro;
    }
    cout<<"Sum array : ";
    for(int i=0 ;i<sz;i++){
    cout<<sumarr[i]<<" ";
    }
    cout<<endl;
    cout<<"Product array : ";
    for(int i=0;i<sz;i++){
        cout<<proarr[i]<<" ";
        }
        cout<<endl;
    }


//program to swap min and max terms of array
int swapMaxMin(int arri[],int ind){
    int maxindex=0;
    int minindex=0;
    for(int i=0; i<ind;i++){
        if (arri[i] < arri[minindex]){
            minindex=i;}
        if (arri[i] > arri[maxindex]){
            maxindex=i;}
    }
    swap(arri[minindex],arri[maxindex]);
    cout<<"Array after swaping max and min terms in array: ";
    for(int i=0; i<ind; i++){
        cout<<arri[i]<<" ";
    }
}

//program to print all the unique elements in the array 
int unique(int arr[] ,int iu){
    unordered_map<int,int>freq;
    for(int i=0 ;i<iu ;i++){
        //count frequency of each elements 
        freq[arr[i]]++;
    }
    cout<<"Unique elements in that array :";
    for(int i=0; i<iu ;i++){
        if (freq[arr[i]] == 1){
        cout<<arr[i]<<" ";
        }
    }
}


//intresection of two arrays  
void printintersection(int arr1[],int n1,int arr2[],int n2){
    unordered_set<int>s;
    for(int i=0 ;i<n1 ;i++){
        s.insert(arr1[i]);
    }
    cout<<"Intersection elements of arr1,arr2 are  : ";
    for(int i=0;i<n2;i++){
        if (s.find(arr2[i]) != s.end()){
            cout<<arr2[i]<<" ";
            s.erase(arr2[i]);
        }
    }
}



int main(){
    cout<<" Part-08 "<<endl;

    int marks[5]={99,98,94,100,91};
    //updating the value in the array using index
    marks[2]=95;
    //printing each value of array using index
    cout<<marks[2]<<endl;
    //to print all elements in an array
    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }
    //size of array and no of elements in an array
    cout<<"sizeof(marks) ="<<sizeof(marks)<<endl;
    cout<<"No of elements in an array ="<<(sizeof(marks)/sizeof(int))<<endl;

    //inputing the elements for my array
    int n;
    cout<<"Enter your size of your array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements for your array :";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Elements of your array : ";
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int size=5;
    int nums[size]={99,98,89,88,2147483647};
    for(int i=0 ;i<size ;i++ ){
        largest=max(nums[i],largest);
        smallest=min(nums[i],smallest);
    }
    cout<<"Small number in the array = "<<smallest<<endl;
    cout<<"largest number in the array = "<<largest<<endl;

//linear search 
    int lSize=6;
    int lArray[lSize]={1,2,25,15,74,5};
    int target=73;
    int index=linearsearch(lArray ,lSize ,target );
    if (index== -1){
        cout<<"In the array "<< target <<" not found oops!"<<endl;
    }
    else{
    cout<<"In the array "<< target <<" found at "<< index <<" index "<<endl;
    }
    cout<<endl;


//rerverse an array using swap function 
    int sz=7;
    int num[sz]={1,5,3,15,6,2,9};
    cout<<"Reversed array : ";
    revArray(num,sz);
    cout<<endl;

//program to calculate sum and product of all numbers in an array
    int sz1=5;
    int ar1[sz1]={1,2,3,4,5};
    sumProduct(ar1,sz1);


//program to swap min and max terms of array
    int ind=4;
    int arri[ind]={10,40,30,2};
    swapMaxMin(arri,ind);
    cout<<endl;

//program to print all the unique elements in the array 
    int iu=7;
    int arru[iu]={10,15,10,15,20,30,50};
    unique(arru,iu);
    printf("\n");


//intresection of two arrays 
    int arr1[]={10,20,30,40,50};
    int arr2[]={30,30,50,60,70};
    int n1=5;
    int n2=5;
    printintersection(arr1,n1,arr2,n2);
    cout<<endl;

    return 0;
}