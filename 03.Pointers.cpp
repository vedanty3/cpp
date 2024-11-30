#include<iostream>
using namespace std;

void print(int*p) {
    cout<<p<<endl;
}

void update(int*p) {
    *p = *p+1;
}

int getSum(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[4] = {11, 22, 33, 44};

    cout<<"Address of first memory block is "<<arr<<endl;
    cout<<"Address of first memory block is "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr + 1<<endl;
    cout<<*(arr + 1)<<endl;
    cout<<(*arr) + 1<<endl;
    // arr[i] = *(arr + i) = i[arr]
    cout<<*(arr + 2)<<endl;
    cout<<3[arr]<<endl;

    int *p = arr;
    cout<<sizeof(&p)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(arr)<<endl;

    cout<<"----------------------"<<endl;

    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<arr<<endl;

    cout<<"----------------------"<<endl;

    int *ptr = &arr[0];
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;

    ptr = ptr + 1;

    cout<<*ptr<<endl;

    cout<<"----------------------"<<endl;

    char ch[7] = "vedant";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];
    cout<<c<<endl;

    char temp = 'z';
    char *cp = &temp;

    cout<<temp<<endl;
    cout<<cp<<endl;

    char *tmp = "vzv";
    cout<<tmp<<endl;

    cout<<"----------------------"<<endl;

    int value = 5;
    int *k = &value;

    cout<<k<<endl;
    cout<<*k<<endl;
    cout<<value<<endl;
    print(k);

    cout<<"----------------------"<<endl;

    cout<<k<<endl;
    cout<<value<<endl;
    update(k);
    cout<<k<<endl;
    cout<<value<<endl;

    cout<<"----------------------"<<endl;

    int array[5] = {1, 2, 3, 4, 5};
    cout<<"Sum: "<<getSum(array, 5)<<endl;
    cout<<"Sum: "<<getSum(array+2, 3)<<endl;

    return 0;
}