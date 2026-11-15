#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

   printf("Name : Shambhavi Chouhan\n");
   printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 30;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 30;
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        result += power;
        originalNum /= 30;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
