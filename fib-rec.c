#include<stdio.h>
#include<stdlib.h>

int fib(int);
void fib_tree(int, int);
int fib_it(int);

//unsigned long nrec;
//#define M 40

int main() {

    int n;
//    scanf("%d", &n);
//    fib(M);


    scanf("%d", &n);
    while(n) {
        //fib_tree(n, 2);
        printf("%d\n", fib(n));
        scanf("%d", &n);
    }

    return 0;


}

// Devolve o n-ésimo número de Fibonacci,
// para n inteiro e n >= 1
int fib(int n) {

//    nrec++;

    if(n == 1 || n == 2)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

void fib_tree(int n, int t) {

    int k;
    for(k = 0; k < t; k++) printf(" ");
    printf("F(%d)\n", n);

    if(n > 2) {
        fib_tree(n - 1, t + 2);
        fib_tree(n - 2, t + 2);
    }

}

// Devolve o n-ésimo número de Fibonacci,
// para n inteiro e n >= 1
int fib_it(int n) {

    int *v = (int *) malloc(n * sizeof(int));
    int j;

    if(n == 0 || n == 1)
        return 1;

    v[0] = v[1] = 1;
    for(j = 2; j < n; j++)
        v[j] = v[j - 1] + v[j - 2];

    return v[n - 1];
}
