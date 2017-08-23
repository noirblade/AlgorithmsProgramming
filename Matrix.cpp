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

    void Matrix::buildSpiralMatrix(int matrix[][5], int matrixSize){
        int i = 0;
        int value = 1;
        int startX = 0;
        int startY = -1;
        int direction = 0;
        int leftOffset = matrixSize-1;
        int bottomOffset = matrixSize-1;
        int rightOffset = 0;
        int topOffset = 1;

        for (i; i < matrixSize*matrixSize; i++){

            if (direction == 0){
                startY++;
            }

            if (direction == 1){
                startX++;
            }

            if (direction == 2){
                startY--;
            }

            if (direction == 3){
                startX--;
            }

            matrix[startY][startX] = value;
            value++;

            if (direction == 0 && startY >= leftOffset){
                leftOffset--;
                direction = 1;
            }

            if (direction == 1 && startX >= bottomOffset){
                bottomOffset--;
                direction = 2;
            }

            if (direction == 2 && startY == rightOffset){
                rightOffset++;
                direction = 3;
            }

            if (direction == 3 && startX == topOffset){
                topOffset++;
                direction = 0;
            }
        }
    }

    void Matrix::display(int matrix[][5]){
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