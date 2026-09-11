#include <iostream>
using namespace std;

// Base class
class A {
public:
    void show() {
        cout << "Hello from A" << endl;
    }
};

// Now B and C virtually inherit from A
class B : virtual public A { };
class C : virtual public A { };
// D inherits from both B and C
class D : public B, public C { };

int main() {
    D obj;
    obj.show();  

    return 0;
} 
