#include <stdio.h>

/* Arreglo de elementos a ordenar. */
int arreglo[10] = {6, 10, 7, 2, 1, 4, 9, 8, 3, 5};

/* Función auxiliar para mostrar el estado actual del arreglo. */
void imprimir();

/* Método principal. */
int main(int argc, char **argv) {
  int temp = 0;

  printf("Arreglo original: ");
  imprimir();

  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      if(arreglo[j] > arreglo[j + 1]) {
        temp = arreglo[j + 1];
        arreglo[j + 1] = arreglo[j];
        arreglo[j] = temp;
        imprimir();
      }
    }
  }

  printf("Arreglo ordenado: ");
  imprimir();

  return 0;
}

/* Función auxiliar para mostrar el estado actual del arreglo. */
void imprimir() {
  for(int i = 0; i < 10; i++) {
    printf("%i ", arreglo[i]);
  }
  printf("\n");
}
