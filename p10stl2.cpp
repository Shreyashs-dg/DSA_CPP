#include<iostream>
#include<queue>
#include<map>
using namespace std;
int main()
{
    cout<<"Stl liberary continued "<<endl;
    //priority queqe using pu8sh to add elements to thwe priority queue 
    priority_queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"Printing priority queue in increasing order : "<<endl;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    //printing preority uueue in reverse order
    priority_queue<int,vector<int>,greater<int>>rq;
    rq.push(10);
    rq.push(20);
    rq.push(30);
    rq.push(40);
    cout<<"Printing priority queue in reverse order : "<<endl;
    while(!rq.empty()){
        cout<<rq.top()<<" ";
        rq.pop();
    }
    cout<<endl;

    //map 
    cout<<"Map concepts  "<<endl;
    map<string,int>m;
    m["Shreyas"]=96;
    m["hardik"]=95;
    m["virat"]=91;
    m["hardik2"]=94;
    m.erase("hardik2");
    //tp print all the elements of map
    m.insert({"Suraksha",99});
    for(auto p : m ){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //count sayes whether that key is exist in that map or not 
    cout<<"checking whether element is exist or not  = "<<m.count("Suraksha")<<endl;
    if (m.count("shreyas"))
        cout << m.at("shreyas");
    else
        cout << "Key not found";
    cout<<endl;
    auto it=m.find("Shreyas");
    if( it != m.end()){
        cout << it->first << " " << it->second;
    } 
    else {
        cout << "Not found";
    }


    //multi map
    multimap<string,int>mm;
    cout<<"Multi map"<<endl;
    mm.insert({"Shreyas",96});
    mm.insert({"Shreyas",95});
    for(auto p : mm ){
        cout<<p.first<<" "<<p.second<<endl;
    }


    //unordered map
    return 0;
}