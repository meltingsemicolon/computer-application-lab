// Binary to  decimal coversion
#include <stdio.h>
int bintodec(int bin)
{
   int decimal = 0, base = 1;
   while (bin > 0)
   {
      int lastdigit = bin % 10;
      decimal += lastdigit * base;
      base *= 2;
      bin /= 10;
   }
   return decimal;
}
int main()
{
   int binary;
   printf("Enter the bianary number: ");
   scanf("%d",&binary);
   int decimal = bintodec(binary);
   printf("Decimal equivalent is %d\n",decimal);
   return 0;

 }
