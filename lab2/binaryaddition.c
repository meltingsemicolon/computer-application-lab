// Wap to perform addition between 4 bit binary numbers.
#include <stdio.h>
#define maxsize 4

void getvalue(int arr[])
{
    int val, i = 0;
    while (i < maxsize && scanf("%d", &val) == 1 && (val == 0 || val == 1))
    {
        arr[i] = val;
        i++;
    }
}

int addnum(int arrA[], int arrB[], int result[])
{
    int i = maxsize - 1;
    int t, c = 0;
    while (i >= 0)
    {

        t = arrA[i] + arrB[i] + c;
        result[i] = t % 2;
        c = t / 2;
        i--;
    }
    return c;
}
int main()
{
    int arr1[maxsize]={0}, arr2[maxsize]={0}, result[maxsize]={0};
    printf("Enter the first binary number: ");
    getvalue(arr1);
    printf("Enter the second bianry number: ");
    getvalue(arr2);
    printf("Adding ....\n");
    int carry = addnum(arr1, arr2, result);
    if (carry)
    {
        printf("1 ");
    }
    for (int i = 0; i < maxsize; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}
