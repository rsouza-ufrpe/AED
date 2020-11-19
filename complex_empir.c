#include <stdio.h>
#include <stdlib.h>
#define TAM 1000
#define PASSO 800

long cont = 0;
int max(int *v, int n);

int *gera_vet (int n) {
    int *v = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        v[i] = rand();
    }
    return v;
}

int max(int *v, int n) {
    int numeroMaximo = v[0];

    for(int i = 1; i < n; i++) {
        cont++;
        if(v[i] > numeroMaximo) {
            numeroMaximo = v[i];
        }
    }

    return numeroMaximo;
}

// Devolve o máximo de um vetor
// v de inteiros de tamanho n > 0
int max_rec(int *v, int n) {

   cont++;

   if(n == 1)
      return v[0];

   int m = max_rec(v, n - 1);

   if(m > v[n - 1])
      return m;
   else
      return v[n - 1];

   //return m > v[n - 1] ? m : v[n - 1];

}

int busca(int *v, int n, int x) {

   int k;

   for(k = 0; k < n; k++)
      if(v[k] == x)
         return k;

   return -1;

}










int main () {
    int n, *v;
    FILE *f;

    f = fopen("maxrec.out", "w");
    for (n = TAM; n < 18000; n += PASSO) {
        v = gera_vet(n);
        cont = 0;
        max_rec(v, n);
        fprintf (f, "%i %i \n", n, cont);
        free(v);
    }
    fclose (f);

    return 0;
}
