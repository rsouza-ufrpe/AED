#include<stdio.h>

int euclides(int, int);

int main() {

    int m, n;

    printf("Digite dois inteiros: ");
    scanf("%d%d", &m, &n);
    printf("mdc entre %d e %d: %d", m, n, euclides(m, n));

    return 0;

}


int euclides(int m, int n) {
   int r;
   do {
      r = m % n;
      printf("%d %d %d\n", m, n, r);
      m = n;
      n = r;
   } while (r != 0);
   return m;
}
