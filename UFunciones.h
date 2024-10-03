//
// Created by mbermejo on 2/10/2024.
//

#ifndef INC_02_PROYECTO_UFUNCIONES_H
#define INC_02_PROYECTO_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

int ** dimensionarMatriz( int filas, int col);
void llenarDatos( int **pMatriz, int filas,int  col);
void imprimirMatriz(int **pMatriz, int filas, int col);
void matrizdeCoincidencias(int **pM1, int ** pM2, int ** pM3, int filas,int  col);
void liberarMemoria( int ** &  pMatriz, int filas);

#endif //INC_02_PROYECTO_UFUNCIONES_H
