#include<iostream>
using namespace std;

int getSum(int *arr, int n) {
    int sum = 0;

    for(int i=0; i<n; ++i) {
        sum += arr[i];
    }

    return sum;
}

void update1(int n) {
    ++n;
}

void update2(int &n) {
    ++n;
}

// bad practice
int& returnByReference(int a) {
    int num = a;
    int &ans = num;
    return ans;
}

int* func(int n) {
    int *ptr = &n;
    return ptr;
}

int main() {
    int i = 5;
    int &j = i;

    cout<<i<<endl;
    ++i;
    cout<<i<<endl;
    ++j;
    cout<<i<<endl;
    cout<<j<<endl;

    int n = 5;
    cout<<n<<endl;
    update1(n);
    cout<<n<<endl;

    cout<<"---------------"<<endl;

    cout<<n<<endl;
    update2(n);
    cout<<n<<endl;

    int val = returnByReference(n);
    cout<<val<<endl;

    int* ans = func(n);
    cout<<&n<<endl;
    cout<<n<<endl;
    cout<<*ans<<endl;
    cout<<ans<<endl;

    char ch = 'a';
    cout<<sizeof(ch)<<endl;

    char *c = &ch;
    cout<<sizeof(c)<<endl;

    // pointer memory in stack: static allocation
    // array memory in heap: dynamic allocation
    int size;
    cin>>size;

    int *arr = new int[size];

    for(int i=0; i<size; ++i) {
        cin>>arr[i];
    }
    
    cout<<getSum(arr, size)<<endl;
    cout<<sizeof(arr)<<endl;

    // static allocation: memory gets released when scope ends
    // dynamic allocation: memory doesn't get released, instead its their in the heap.

    delete []arr;
    delete c;


    return 0;
}