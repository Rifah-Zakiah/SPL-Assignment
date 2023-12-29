#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    printf("The reverse string is: ");
    for (int k = (strlen(str) - 1); k >= 0; k--)
    {
        printf("%c", str[k]);
    }
}