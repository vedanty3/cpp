#include<iostream>
using namespace std;

int main() {
    int num = 5;
    cout<<num<<endl;
    cout<<&num<<endl; // address of operator (hexadecimal form)
    cout<<*(&num)<<endl;

    int *ptr = &num;
    cout<<*ptr<<endl; // dereference operator

    cout<<sizeof(ptr)<<endl; // 8 bytes

    (*ptr)++;

    int *p = 0; // null pointer
    p = ptr;
    cout<<p<<endl;
    cout<<*p<<endl;

    int a = 5;
    int *b = &a;
    int *c = b;

    int *t = &num;
    cout<<++(*t)<<endl;
    cout<<t<<endl;
    
    t = t + 1; // jump next location (after 4 bytes)

    cout<<t<<endl;


    return 0;
}