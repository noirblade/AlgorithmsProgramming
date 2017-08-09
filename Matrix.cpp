//
// Created by teo on 8/4/17.
//

#include "Matrix.h"

namespace noirblade{

    void Matrix::buildDiagonalMatrix(int matrix[][5], int matrixSize){
        int i, j, skip = 0;
        int value = 1;

        int maxValue = (matrixSize * matrixSize) - matrixSize;
        for (i = 0; i < matrixSize; i++) {
            int counter = 0;
            for (j = 0; j < matrixSize; j++) {
                if (j > skip) {
                    matrix[j][i] = value;
                    value++;
                    counter++;
                } else if (j < skip) {
                    matrix[j][i] = maxValue;
                    maxValue--;
                }
            }
            skip++;
        }
    }

    void Matrix::buildSpiralMatrix(unsigned int matrix[][5], int matrixSize){
        unsigned int i = 0, j = 0;
        unsigned int value = 1;


        int maxValue = 10; // matrixSize*matrixSize;
        while (value <= maxValue){

            if (j < 5){
                matrix[j][i] = value;
            } else {
                matrix[i][j] = value;
            }
            j++;
            value++;
        }
    }

    void Matrix::display(unsigned int matrix[][5]){
        int counter = 0;
        for (int n = 0; n < 5; n++) {
            for (int p = 0; p < 5; p++) {
                counter++;
                cout << matrix[n][p] << " |" << flush;
                if (counter == 5) {
                    cout << endl;
                    counter = 0;
                }
            }
        }
    }
}