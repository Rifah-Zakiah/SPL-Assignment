#include<stdio.h>

int main(){
    int arr[100], freq[100], n, count = 1;
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d is:\n", i);
        scanf("%d", &arr[i]);
        freq[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
            if (freq[i] != 0)
            {
                freq[i] = count;
            }
            
        }
        
    }
    printf("Frequency of all the elements in the array is: \n");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times.\n", arr[i], freq[i]);
        }
        
    }
    

}