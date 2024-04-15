#include <stdio.h>

int max(int n, int numeros[]){
  int x = 0;

inicio:
  if (n > 0) {
    if (x < numeros[n-1])
    {
        x = numeros[n-1];
    }
    
    n--;
    goto inicio;
  }

  printf("Maior numero do array: %d\n", x);
  return 0;
}

int main() {
  int arr[] = {77,88,200,66,99,300};
  max(6, arr);

  return 0;
}



A = X=0
T1 = N > 0
T2 = X < I2[I1-1]
B= X=I2[I1-1]
C = SUB1

R1: FACA A VAPARA R2
R2: SE T1 VAPARA R3 SENAO VAPARA RX
R3: SE T2 VA PARA R4 SENAO VA PARA R5
R4: FACA B VAPARA R5
R5: FAÇA C VAPARA R2

INPUT- 3,[1,3,2] 

(1,e)
(2,A)
(3,A T1)
(4,A T1 T2)
(5,A T1 T2 B)
(2,A T1 T2 B C)
(3,A T1 T2 B C T1)
(4,A T1 T2 B C T1 T2)
(5,A T1 T2 B C T1 T2 B)
(2,A T1 T2 B C T1 T2 B C)
(3,A T1 T2 B C T1 T2 B C T1)
(5,A T1 T2 B C T1 T2 B C T1 T2)
(2,A T1 T2 B C T1 T2 B C T1 T2 C)
(RX,A T1 T2 B C T1 T2 B C T1 T2 C T1)