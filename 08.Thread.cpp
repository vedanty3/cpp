#include<iostream>
#include<thread>
#include <chrono>
using namespace std;
using namespace std::chrono;

#define int long long int

void findEvenSum(int start, int end, int *evenSum) {
    for (int i = start; i <= end; ++i) {
        if (i & 1) {
            continue;
        }
        (*evenSum) += i;
    }
}

void findOddSum(int start, int end, int *oddSum) {
    for (int i = start; i <= end; ++i) {
        if (i & 1) {
            (*oddSum) += i;;
        }
    }
}

int32_t main() {
    int start = 0;
    int end = 1900000000;
    int evenSum = 0;
    int oddSum = 0;

    thread t1(findEvenSum, start, end, &evenSum);
    thread t2(findOddSum, start, end, &oddSum);

    t1.join();
    t2.join();

    auto startTime = high_resolution_clock::now();

    // findEvenSum(start, end, &evenSum);
    // findOddSum(start, end, &oddSum);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << "Odd Sum: " << oddSum << endl;
    cout << "Even Sum: " << evenSum << endl;

    cout << "Time Taken: " << duration.count() / 1000000 << endl;

    return 0;
}