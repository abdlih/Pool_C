#include <stdio.h>
long long fib_tail(int n, long long a, long long b) {
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fib_tail(n - 1, b, a + b);
}
int main() {
    int n;
    printf("Entrer n: ");
    scanf("%d", &n);
    long long resultas = fib_tail(n, 0, 1);
    printf("Fibonacci(%d) = %lld", n, resultas);
    return 0;
}
