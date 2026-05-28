/*

Encapsulation is wrapping up of data and member functions in a single unit called class.
Data Hiding --> Private access modifier



*/
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
        double balance;
        string password;
    public:
        string accountId;
        string username;
};