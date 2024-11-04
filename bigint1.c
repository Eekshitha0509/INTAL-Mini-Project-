#include "bigint.h"    // Include your custom header file

int main() {
    BIGINT num1 = createbigint("123456789012345678901234567890");
    BIGINT num2 = createbigint("987654321098765432109876543210");

    printf("Number 1: ");
    printBIGINT(num1);
    printf("Number 2: ");
    printBIGINT(num2);

    printf("\nLength of Number 1: %d\n", BIGINTlength(num1));
     printf("\nLength of Number 2: %d\n", BIGINTlength(num2));
    return 0;
}
