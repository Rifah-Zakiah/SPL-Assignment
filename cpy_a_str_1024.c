#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int i;
    printf("Enter a string 1:\n");
    fgets(str1, sizeof(str1), stdin);
    for(i = 0; str1[i] != '\0'; ++i){
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Copied string 2 is: %s\n", str2);

    return 0;
}