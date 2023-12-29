#include <stdio.h>

int main() {
    int arr[100], i, n;
    printf("Enter number to conver to binary: ");
    scanf("%d", &n);
    printf("\nThe binary of %d is: ", n);

    for (i = 0; n > 0; i++)
    {
        arr[i] = n%2;
        n = n/2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    
    return 0;
}