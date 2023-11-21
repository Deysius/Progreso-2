#include <stdio.h>
int main(){
    int filas, columnas;
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    printf("Matriz con ceros:\n");
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 0;
            printf("%d ", matriz[i][j]);
        }
          printf("\n");
    }
      printf("Matriz diagonal principal:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
        }
    }
    return 0;
}