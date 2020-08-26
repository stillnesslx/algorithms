#include <stdio.h>
#include "gcd.h"

int main(void)
{
    int res = 0;
    res = gcd(9,6);
    printf("gcd(9,6) is %d", res);
    return 0;
}
