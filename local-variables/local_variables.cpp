#include <iostream>
#include <string>

class A
{
public:
    A(const int& v=0) : V(v) {}
    void do_something(const int& new_v)
    {
        // Redefined; does not override internal data
        int V = new_v;
        printf("do_something(): V=%d\n", V);
    }
    void print_v()
    {
        printf("print_v(): V=%d\n", V);
    }
private:
    int V;
};

int main()
{
    A a;
    a.print_v();
    a.do_something(100);
    a.print_v();
}

// print_v(): V=0
// do_something(): V=100
// print_v(): V=0
