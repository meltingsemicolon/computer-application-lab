// Decimal to bianry
#include <stdio.h>
void dectobin(int dec)
{
    int bin[32], i = 0;
    while (dec > 0)
    {
        bin[i] = dec % 2;
        dec = dec / 2;
        i += 1;
    }
     printf("The bianry equivalent is : ");
     for(i;i>=0;i--)
     {
        printf("%d", bin[i]);
     }
}

int main()
{
    int decimal;
    printf("Enter decimal number: ");
    scanf("%d", &decimal);
    dectobin(decimal);
    return 0;
}