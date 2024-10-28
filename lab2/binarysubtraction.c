// Wap to perform subtraction between 4 bit biamry numbers.
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
void increment(int arr[])
{
 int carry, temp;
    temp = arr[3] + 1;
    arr[3] = temp % 2;
    carry = temp / 2;
    for (int i = 2; i >= 0; i--)
    {
        temp = arr[i] + carry;
        arr[i]=temp%2;
        carry = temp / 2;
    }
}
// function for taking twos complement;
void twoscomplement(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        arr[i] = (arr[i] == 0) ? 1 : 0;
    }
        increment(arr);

}

int addnum(int arrA[], int arrB[], int result[])
{
    int carry = 0;
    for (int i = 3; i >= 0; i--)
    {
        int var = arrA[i] + arrB[i] + carry;
        if (var == 0 || var == 1)
        {
            result[i] = var;
            carry = 0;
        }
        else if (var == 2)
        {
            result[i] = 0;
            carry = 1;
        }
        else if (var == 3)
        {
            result[i] = 1;
            carry = 1;
        }
    }
    return carry;
}
int main()
{
    int arr1[maxsize] = {0}, arr2[maxsize] = {0}, result[maxsize] = {0};
    printf("Enter the first binary number: ");
    getvalue(arr1);
    printf("Enter the second bianry number: ");
    getvalue(arr2);
    twoscomplement(arr2);
    printf("Subtracting ....\n");
    int c;
    c = addnum(arr1, arr2, result);
    // when carrybit is  present
    if(c == 1)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("%d", result[i]);
        }
    }
    // when carrybit is  absent
    else if (c == 0)
    {
        printf("-");
        twoscomplement(result);
        for (int i = 0; i < 4; i++)
        {
            printf("%d", result[i]);
        }
    }

    return 0;
}
