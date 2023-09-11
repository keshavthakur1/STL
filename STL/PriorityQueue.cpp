#include<iostream>
#include<queue>
using namespace std;

int main(){
    //how to create max-heap

    priority_queue<int>maxi;

//how to create min_heap
priority_queue<int,vector<int>,greater<int>>mini;

maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);
cout<<maxi.top()<<"";


}
