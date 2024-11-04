#include "bigint.h"
BIGINT createbigint(const char *str)
{
    BIGINT value;
    value.length = strlen(str);
    value.sign = (str[0] == '-') ? -1 : 1;
    if (value.sign == -1)
    {
        strcpy(value.digits, str + 1);
        value.length--;
    }
    else
    {
        strcpy(value.digits, str);
    }
    value.digits[value.length] = '\0';
    return value;
}

void printBIGINT(BIGINT n)
{
    if(n.sign == -1)
    printf("-");
    printf("%s",n.digits);
}

int BIGINTlength(BIGINT n)
{
    printf("%d",n.length);
}


