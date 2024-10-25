//  wap to compute 1's and 2's complement of any 4 bit binary number
#include <stdio.h>
void onescomplement(int arr[] , int size)
{
    for (int i = 0; i < size; i++) //{arr[i]=(arr[i] == 1)? 0:1;}
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
}

void twoscomplement(int arr[] , int size)
{
    int temp = 1;
    for (int i = size -1; i >= 0; i--)
    {
        if (arr[i] == 1 && temp == 1)
        {
            arr[i] = 0;
        }
        else if (arr[i] == 0 && temp == 1)
        {
            arr[i] = 1;
            temp = 0;
        }
    }
}

int main()
{   
    int size=0;
    printf("Enter no of bits in the bianary number : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d bit binary number: ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]!=0 &&arr[i]!=1)
        {
            printf("Invalid input.please enter 0s and 1s.\n");
            return 1;
        }
    }

    onescomplement(arr,size);
    printf("1's complement of the given %d bit binary number is: ",size);
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }

    twoscomplement(arr,size);
    printf("\n2's complement of the given %d bit binary number is: ",size);
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
