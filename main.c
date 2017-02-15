
#include <stdio.h>

int GCD(int number1, int number2) {
    while(number2 != 0) {
        int result = number1 % number2; //Euclidean algorithm
        number1 = number2;
        number2 = result;
    }
    return number1;
}

int LCM(int number1, int number2) {
    return number1 * number2 / GCD(number1, number2);
}

