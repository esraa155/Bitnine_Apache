//Dynamic Programming Approach

#include <stdio.h>

int fibonacciDynamic(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i <= n; i++)
        fib[i] = fib[i - 3] + fib[i - 2];

    return fib[n];
}

int main() {
    int n = 10;
    int result = fibonacciDynamic(n);
    printf("F(%d) = %d\n", n, result);

    return 0;
}