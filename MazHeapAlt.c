#include <stdio.h>

int Pai(i){
  return i/2;
}

int heapIncreaseKey(int *A,int tam,int i){
  if(i < A[tam]){
    printf("Nova chave é menor que chave atual");
  }

  A[tam] = i;

  while(i > 0 && A[Pai(i)]< A[tam]){
    int aux = A[tam];
    A[tam] = A[Pai(i)];
    A[Pai(i)] = aux;

    tam = Pai(i);
  }
return 0;
}


int heapInsert(int *A, int tam, int i){
  tam++;
  //A[tam] = i;
  //A[tam-1] = i;
  A[tam] = -999999999;
  heapIncreaseKey(A, tam, i);  

return 0;
}


int maxHeapAlt(int *A, int tam){
  int B[] = {};
  int Aux[] = {};
  B[0] = A[0];
  int sizeB = sizeof(B)/sizeof(int);
   

  for (int i = 1; i < tam; i++){
    heapInsert(B, sizeB-1, A[i]);

    *A = *B;

  }

return 0;
}

int main(void) {
//Declarar vetor
  int A[] = {3, 7, 1, 9, 6, 8, 4, 2, 5};
  int tam = 9;

      maxHeapAlt(A, tam);
 // heap_sort(A, tam);

  for(int i = 0; i < tam; i++){

    printf(" | %d", A[i]);
  }
return 0;
}