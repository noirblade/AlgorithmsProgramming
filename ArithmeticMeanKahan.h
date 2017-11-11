//
// Created by kali on 11/11/17.
//

#ifndef ALGORITHMSPROGRAMMING_ARITHMETICMEANKAHAN_H
#define ALGORITHMSPROGRAMMING_ARITHMETICMEANKAHAN_H

#include <iostream>
#include <fstream>
#include <thread>
using namespace std;

/* Example usage
 * //generateFile(90000000);

    // When used with float the result is different from double.
    // When using Kahan with float the results are the same as we use showMean() with double.
    // When using Kahan way with double the results are the same as they are with float.
    // So it is obvious that Kahan way corrects the mistake

    std::thread t(userEventHandler);
    //showMean();
    showMeanWithErrorCompensation();
    t.join();
*/
namespace noirblade {
    class ArithmeticMeanKahan {
    private:
        // We don't need a mutex lock here. We will use this only for reading
        float mean = 0;
    public:
        void generateFile(int numLines);
        void showMean();
        void showMeanWithErrorCompensation();
        void userEventHandler();
    };
}

#endif //ALGORITHMSPROGRAMMING_ARITHMETICMEANKAHAN_H
