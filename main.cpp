#include <iostream>
#include "Matrix.h"
using namespace noirblade;

int main() {
    int vectorSize = 5;

    int vector[5][5] = {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
    };

    Matrix matrix;
    //matrix.buildDiagonalMatrix(vector, vectorSize);
    matrix.buildSpiralMatrix(vector, vectorSize);
    matrix.display(vector);
    return 0;
}