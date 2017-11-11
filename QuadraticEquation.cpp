//
// Created by kali on 11/11/17.
//

#include "QuadraticEquation.h"
using namespace noirblade;

void QuadraticEquation::showRoots(float a, float b, float c){

    float discriminant, unknownPart, root1, root2, realPart;
    // Calculate the discriminant
    discriminant = b*b - 4*a*c;

    // These if/else statements can be simplified but lets keep the readability
    if (discriminant > 0){
        // Roots are different
        root1 = (-b + sqrt(discriminant)) / (2*a);
        // The second root is calculated in the same manner but with different sign
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Root 1 is " << root1 << endl;
        cout << "Root 2 is " << root2 << endl;
    } else if (discriminant == 0){
        // Roots are the same. We will calculate only root1
        root1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "Root1 is equal to root2 = " << root1 << endl;
    } else {
        // Roots are different and complex.
        // Can't calculate them but we can try to show the unknown part as calculated part +/- unknown part
        realPart = -b/(2*a);
        unknownPart = sqrt(-discriminant)/(2*a);
        cout << "Roots are different and complex " << endl;
        cout << "Root1 is " << realPart << "+(" << unknownPart << "i)" << endl;
        cout << "Root2 is " << realPart << "-(" << unknownPart << "i)" << endl;
    }
}