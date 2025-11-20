#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    cout<<"Part-10"<<endl;
    cout<<"STL Vector "<<endl;
    vector<int>vec={10,20,30,40,50,60};
    vector<int>vec1(vec);
    //erase
    vec1.erase(vec1.begin());//to erase first element 
    vec1.erase(vec1.begin()+1,vec1.begin()+3);//to erase something us .erase(start,stop);
    cout<<"Erase : "<<endl;
    for(int i: vec1){
        cout<<i<< " ";
    }
    cout<<endl;
    //insert
    vec1.insert(vec1.begin(),10);
    vec1.insert(vec1.begin()+2,30);
    vec1.insert(vec1.begin()+3,40);
    cout<<"Inserted : ";
    for(int i: vec1){
        cout<<i<< " ";
    }
    cout<<endl;
    // vec1.clear();
    // cout<<"IS empty : "<<vec1.empty()<<endl;
    // cout<<"Capacity : "<<vec1.capacity();
    // cout<<endl;
    //iterator 
    vector<int>vec2={10,50,40,46,25};
    for(auto it= vec2.rbegin() ;it != vec2.rend(); it++){
        cout<< *it<<" ";
    }
    cout<<endl;
    cout<<*vec2.rbegin()<<endl;



//List 
    cout<<"STL List "<<endl;
    list <int> l;
    l.push_back(10);
    l.push_front(12);
    l.push_back(10);
    l.push_front(12);
    l.pop_back();
    l.push_back(10);
    l.push_back(10);
    l.pop_front();
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //deque
    cout<<"DEQUE: DOUBLE ENDED QUEUE "<<endl;
    deque<int>d={1,2,1,4};
    d.erase(d.begin()+1);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    //pairs
    cout<<"pairs "<<endl;
    pair<int,pair<int,char>>p={10,{20,'c'}};
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;

    //using pair with vector 
    vector<pair<int,int>>vec3={{1,2},{3,4},{5,6}};
    vec3.push_back({7,8});
    vec3.emplace_back(9,10);
    for(auto p:vec3){
        cout<<p.first<<" "<<p.second<<endl;
    }

    //stack 
    cout<<"Stack "<<endl;
    stack<int>s;
    stack<int>s2;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s2.swap(s);
    cout<<"size of s : "<<s.size()<<endl;
    cout<<"size of s2 : "<<s2.size()<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;


    //quene
    cout<<"quene "<<endl;
    queue<int>q;
    queue<int>q2;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q2.swap(q);
    cout<<"size of q : "<<q.size()<<endl;
    cout<<"size of q2 : "<<q2.size()<<endl;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;


    return 0;
}