/*
When you create dynamic array using pointers you give size like this

Base *p = new Base[SIZE];

// where Base is class and SIZE is some integer..

So here you see that you are passing SIZE in array so it will construct that many blocks and give its starting address in *p, upto this it is ok right.....

BUT: when you delete this dynamic array you just simply call it like this:

delete[] p;

Notice we don't pass SIZE here while deallocating OK..

Now my question is how this (delete[] p;) says to the system that how much you need to delete OR what is the size of this array "p" so that it will deallocate that many blocks?

So this whole video is about that only...

And the basic idea is, we will store that SIZE somewhere while we are constructing that array, so that when we are calling (delete[] p) we can get it from that place and we will deallocate that much memory only..

And there are two ways we store that SIZE....

Over Allocation
Associative Array
1. Over Allocation

It is about overallocating the original array with some extra memory and put this SIZE there, so when deallocating we can just simply take SIZE value from that place in array and deallocate that much only.

2. Associative Array

It is about maintaining a separate array with pointer and value pair, in this case [*p, SIZE], so when deallocating we can just simply search in this array for the pointer and deallocate that much only.
*/

/*  Over Allocation Technique    */
#include<iostream>
int const n = 10;
class Base{
    public:
    int b_var;
};

int main(){
    Base *bp = new Base[n];     // new keyword job is to call the constructor also
    // char* tmp = (char*) operator new[] (WORDSIZE + n * sizeof(Base));    //WORDSIZE is 4 byte for 32 bit machine and 8 byte for 64 bit machine
    // Base* p = (Base*) (tmp + WORDSIZE);
    // *(size_t*) tmp = n;
    // for(i = 0; i < n; ++i)
    // new(p + i) Base();       // placement new technique
    delete[] bp;
    // size_t n = * (size_t*) ((char *)p - WORDSIZE);
    // while(n-- != 0)
    // (p+n)->~Base();
    // operator delete[] ((char*)p - WORDSIZE);
    return 1; 
}

/*  Associative Array   */
#include<iostream>
int const n = 10;
class Base{
    public:
    int b_var;
};

int main(){
    Base *bp = new Base[n];
    // Base* bp = (Base*) operator new[] (n * sizeof(Base));
    // size_t i;
    // for(i = 0; i < n; i++)
    // new(bp+i) Base();    //placement new
    // associationArray.insert(bp,n);
    delete[] bp;
    // size_t n = associationArray.lookup(bp);
    // while(n-- != 0)
    // (bp+n)-> ~Base();
    // operator delete[] (bp);
    return 1; 
}