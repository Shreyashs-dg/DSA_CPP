#include<iostream>
#include<vector>
using namespace std;
//Leetcode 136 :finding single number in a vector 
int singlenumber(vector<int>&num){
    int ans=0;
    for (int val : num){
        ans^=val;
    }
    return ans;
}

//linearsearch using vector 
int vectorlinearsearch(vector<int>& lvec,int target){
    for(int i=0; i<lvec.size() ;i++){
        if(lvec[i]==target ){
            return i ;
        }
    }
        return -1;
}
//reversing vector 
int reversedvector(vector<int>& rev,int size){
    int first=0,last=size-1;
    while (first<last){
        swap(rev[first],rev[last]);
        first++;
        last--;
    }
    return 0;
}
int main()
{
    cout<<"Part-09"<<endl;
    vector<int>vec1;//creating meamory allocation for vector
    vector<int>vec2={1,2};//vector with 2 elements 
    vector<int>vec3(2,2);//vector with 3,2 size=3 and value of each element =2
    // to print all the values of the vector use for each loop
    for (int val :vec2){
        cout<< val <<" ";
    }
    cout<<endl;

    cout<<vec2.size()<<endl;//to print the size of the vector

    vec3.push_back(25);//this will the element to last of that vector 
    cout<<"After pushback size = "<<vec3.size()<<endl;
    for(int val: vec3){
        cout<<val<<" ";
    }cout<<endl;

    vec3.pop_back();//after pop_back last element will deleted
    for(int val : vec3){
        cout<<val<<" ";
    }
    cout<<endl;

    //updating element value using index 
    vec3[2]=15;
    cout<<"Font element : "<<vec3.front()<<endl;//to print front element in the vector 
    cout<<"Back element : "<<vec3.back()<<endl;//to print last element in that array

    cout<<vec3.at(1)<<endl;//vec3 calling index 1 using .at
    cout<<"TO Print size "<<vec3.size()<<endl;
    vec3.push_back(10);
    vec3.push_back(10);
    vec3.push_back(10);
    vec3.push_back(10);
    cout<<vec3.capacity()<<endl;//capacity of the vector

    vector<int>num={4,1,2,1,2};
    cout<<"Single elemnt in the vector is "<<singlenumber(num)<<endl;


//solving linear search using vector insted of array
    vector<int>lvec={1,2,3,4,45,15};
    int target=45;
    int result=vectorlinearsearch(lvec,target);
    if (result==-1){
        cout<<target<<" is not fount in given index ";
    }
    else{
        cout<<"Target "<<target<<" Found at index "<<result<<endl;
    }

//reverseing the vector 
    vector <int> rev={10,20,30,40};
    int ansRev=reversedvector(rev,rev.size());
    cout<<"Reversed vector = ";
    rev.emplace_back(100);
    //printing elements after reverseing and using enplace_back
    for(int i:rev){
        cout<< i <<" ";
    }
    cout<<"Index using .at(indx) = "<<rev.at(2)<<" Index using [] = "<<rev[2]<<endl; 
    return 0;
    
}