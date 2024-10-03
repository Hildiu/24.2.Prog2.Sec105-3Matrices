//
// Created by mbermejo on 2/10/2024.
//

#include "UFunciones.h"

int ** dimensionarMatriz( int filas, int col)
{
    int **pMatriz = new  int*[filas];
    for(int f=0; f<filas; f++)
        pMatriz[f] = new int[col];
    return pMatriz;
}

void llenarDatos( int **pMatriz, int filas,int  col)
{
   for(int f=0; f<filas; f++)
       for(int c=0; c<col; c++)
           pMatriz[f][c] = rand() % 9 + 1;
}

void imprimirMatriz(int **pMatriz, int filas, int col)
{
    for(int f=0; f<filas; f++) {
        for (int c = 0; c < col; c++)
            cout << setw(4) << pMatriz[f][c];
        cout << "\n";
    }
}


void matrizdeCoincidencias(int **pM1, int ** pM2, int ** pM3, int filas,int  col)
{
    for(int f=0; f<filas; f++)
        for(int c=0; c<col; c++)
            if( pM1[f][c] == pM2[f][c])
                pM3[f][c] = 1;
            else
                pM3[f][c] = 0;
}

void liberarMemoria( int ** &  pMatriz, int filas)
{
    for(int f=0; f<filas; f++)
        delete []pMatriz[f];
    delete []pMatriz;
    pMatriz = nullptr;
}