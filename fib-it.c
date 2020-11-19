#include<stdio.h>
#include<stdlib.h>

int fib(int);

int main() {

    int n;

    scanf("%d", &n);
    while(n) {
        printf("%d\n", fib(n));
        scanf("%d", &n);
    }

    return 0;

}

int fib(n) {

    int *v = (int *) malloc(n * sizeof(int));
    int j;

    if(n == 0 || n == 1)
        return 1;

    v[0] = v[1] = 1;
    for(j = 2; j < n; j++)
        v[j] = v[j - 1] + v[j - 2];

    return v[n - 1];
}
