#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int count = 0;
    printf("Enter a string:\n");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("The length of the string is %d.\n", count);
    
    return 0;
}