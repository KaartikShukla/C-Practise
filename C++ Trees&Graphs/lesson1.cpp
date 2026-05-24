/*  Advantages of adjacency matrix 
    1. Time complexity is O(1) 
        if we have to find two vertices are connected or not.
        if we have to find the weight between two vertices.
     
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph[N][N];

int main(){
    //  Taking input through adjacency matrix
    int no_of_vertices = 6, no_of_edges = 9;

    for(int i = 0; i < no_of_edges; i++){
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;  // undirected graph connected
        graph[v2][v1] = 1;  // undirected graph connected
        
        /* If weight is given in adjacency matrix
            for(int i = 0; i < no_of_edges; i++){
                int v1,v2,wt;
                cin >> v1 >> v2 >> wt;
                graph[v1][v2] = wt;
                graph[v2][v1] = wt;
            }
        */
    }
}
    //  Disadvantage of taking input through adjacency matrix
    //  The above approach space complexity is too large that is O(N^2)
    //  The limit of continous memory allocation is 10^7 or 10^8 
    //  if we take N = 10^6 then matrix will be 10^12
    //  we have to se adjacency list

    /* Adjacency List
        Time complexity is O(N) 
            if we have to find two vertices are connected or not.
            if we have to find the weight between two vertices.
    */
   
    //  No of Vertices = No of List
    //  Each list will store to which other node it is connected
    //  Space complexity is now O(V+E)

const int N = 1e3+10;
vector<int> g[N];   //  Adjacency List
//  vector<pair<int,int>> g[N];  ******Adjacency list need to use when we need to save with weight*******
int main(){
    //  Taking input through adjacency list
    int no_of_vertices = 6, no_of_edges = 9;

    for(int i = 0; i < no_of_edges; i++){
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    /* If weight is given in adjacency list

    for(int i = 0; i < no_of_edges; i++){
            int v1,v2,wt;
            cin >> v1 >> v2 >> wt;
            g[v1].push_back({v2,wt});
            g[v2].push_back({v1,wt});
        }
    */
    
}