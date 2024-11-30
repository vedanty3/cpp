#include<iostream>
using namespace std;

void update(int **ptr) {
    // ptr = ptr + 1;
    // *ptr = *ptr + 1;
    **ptr = **ptr + 1;
}

void update2(int*ptr) {
    *ptr = (*ptr) * 2;
}

void increment(int **ktkr) {
    ++(**ktkr);
}

int main() {
    int value = 5;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;

    cout<<"Before"<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    update(ptr2);

    cout<<"After"<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;

    int f = 8;
    int s = 18;
    int *ptr = &s;
    *ptr = 9;

    cout<<f<<" "<<s<<endl;

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl;

    int u = 8;
    int *ptrr = &u;
    cout<<(*ptrr)++<<endl;
    cout<<u<<endl;

    int *xx = 0;
    int jj = 110;
    xx = &jj;
    cout<<*xx<<endl;

    int xxx = 10;
    int yyy = 20;
    int *tf = &yyy;
    xxx = *tf;
    *tf = *tf + 2;

    cout<<xxx<<" "<<yyy<<endl;

    float fff = 13.5;
    float ppp = 21.5;
    float *gg = &fff;

    (*gg)++;
    *gg = ppp;

    cout<<*gg<<" "<<fff<<" "<<ppp<<endl;

    int nums[10];
    int *ptr_t;

    cout<<sizeof(nums)<<" "<<sizeof(ptr)<<endl;

    int new_arr[] = {11, 21, 13, 14};
    cout<<*new_arr<<" "<<*(new_arr+1)<<endl;
    cout<<&new_arr<<" "<<new_arr<<endl;
    cout<<new_arr+1<<endl;

    int *jtr = new_arr;
    cout<<jtr[2]<<endl;
    cout<<*new_arr<<" "<<*(new_arr+3)<<endl;

    // int *ktr = new_arr++;
    int *ktr = new_arr + 1;
    cout<<*ktr<<endl;

    char chhh = 'a';
    char *ctr = &chhh;
    chhh++;
    cout<<*ctr<<endl;

    char char_arr[] = "abcde";
    char *char_ptr = &char_arr[0];
    cout<<char_ptr<<endl;

    char_ptr++;
    cout<<char_arr<<endl;
    cout<<char_ptr<<endl;
    cout<<char_arr[0]<<endl;
    cout<<char_ptr[0]<<endl;

    int i = 10;
    update2(&i);
    cout<<i<<endl;

    int ttt = 110;
    int *tr = &ttt;
    int **ttr = &tr;
    int res = (**ttr)++ + 9;
    cout<<ttt<<" "<<res<<endl;

    int rtr = 100;
    int *r = &rtr;
    int **rr = &r;
    int sss = ++(**rr);
    int *hh = *rr;
    ++(*hh);

    cout<<rtr<<" "<<sss<<endl;

    int ktk = 110;
    int *ktkr = &ktk;
    increment(&ktkr);
    cout<<ktk<<endl;



    return 0;
}

// note down to do