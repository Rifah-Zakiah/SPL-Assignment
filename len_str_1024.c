#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count = 0;
    printf("Enter a string:\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("The length of the string is %d.\n", count);
    //Using library function:
    printf("The length of the string using strlen() is %d.\n", strlen(str));
    return 0;
}