#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Difference between Maps and Unordered Maps
1. Inbuilt Implementation   :-  Use hash table
2. Time complexity  :-  Insertion and Access complexity is O(1)
3. valid keys datatype  :- Complex datatype are not supported
4. Always give preference to unordered_map as it uses hashing and map can be used in situation where complex key structure is needed 
*/
int main(){
    unordered_map<int,string> m;
    //  multimap<int,string> v; <===> map<int,vector<string>> m;

}