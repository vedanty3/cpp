#include<iostream>
using namespace std;

// macro
#define PI 3.14

// global variable
const int N = 1e9 + 7;

// inline functions
inline int getMax(int &a, int &b) {
    return a>=b ? a : b;
}

// default args
inline void print(int num = 10) {
    cout<<num<<endl;
}

int main() {
    int r = 5;
    double area = PI * r * r;

    cout<<area<<endl;

    int a = 1;
    int b = 2;

    int ans = 0;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);

    cout<<ans<<endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);

    cout<<ans<<endl;

    print();
    print(-99);


    return 0;
}