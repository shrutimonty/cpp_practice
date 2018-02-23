#include <iostream>
using namespace std;

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }
    cout<<current;

    return current % m;
}

int main()
{
    long long n, m=5;

       cout<<get_fibonacci_huge_naive(239,1000)<<" ";


}
