//Stack:- LIFO 
//Queue:- FIFO
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> n;
    n.push(1);
    n.push(2);
    n.push(3);
    n.push(4);
    while(!n.empty()){
        cout << n.top() << endl;
        n.pop();
    }
    /*******************************************/
    queue<string> q;
    q.push("a");
    q.push("b");
    q.push("c");
    q.push("d");
    q.push("e");
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}