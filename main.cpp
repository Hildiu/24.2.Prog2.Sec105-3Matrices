/*-------------------------------------------------------------
 * Dato de Entrada: filas, col
 * Dato de Salida:   m1, m2, m3 (son matrices dinamicas de int)
-------------------------------------------------------------- */

#include "UFunciones.h"

int main()
{ int filas, col;

    cout << "Filas: "; cin >> filas;
    cout << "Columnas : "; cin >> col;
    int **pM1 = dimensionarMatriz(filas, col);
    llenarDatos(pM1, filas, col);
    imprimirMatriz(pM1, filas, col);
    cout << "\n\n";
    //---- segunda matriz
    int **pM2 = dimensionarMatriz(filas, col);
    llenarDatos(pM2, filas, col);
    imprimirMatriz(pM2, filas, col);
    cout << "\n\n";
    int **pM3 = dimensionarMatriz(filas, col);
    matrizdeCoincidencias(pM1, pM2, pM3, filas, col);
    imprimirMatriz(pM3, filas, col);
    //----liberamos memoria
    liberarMemoria(pM1, filas);
    liberarMemoria(pM2, filas);
    liberarMemoria(pM3, filas);
    return 0;
}

