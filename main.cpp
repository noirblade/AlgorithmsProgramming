#include <iostream>
#include "Matrix.h"
using namespace noirblade;

int main() {
    int vectorSize = 5;
    Matrix matrix;

    cout << "Diagonal matrix" << endl;
    int vector1[5][5] = {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
    };

    matrix.buildDiagonalMatrix(vector1, vectorSize);
    matrix.display(vector1);

    cout << endl << "Spiral matrix" << endl;
    int vector2[5][5] = {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
    };
    matrix.buildSpiralMatrix(vector2, vectorSize);
    matrix.display(vector2);
    return 0;
}