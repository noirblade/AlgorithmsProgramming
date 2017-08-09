//
// Created by teo on 8/4/17.
//

#ifndef PROGRAMMINGALGORITHMS_MATRIX_H
#define PROGRAMMINGALGORITHMS_MATRIX_H

#include <iostream>
using namespace std;

namespace noirblade {

    class Matrix {

    public:
        void buildDiagonalMatrix(int matrix[][5], int matrixSize);
        void buildSpiralMatrix(unsigned int matrix[][5], int matrixSize);
        void display(unsigned int matrix[][5]);
    };

}
#endif //PROGRAMMINGALGORITHMS_MATRIX_H
