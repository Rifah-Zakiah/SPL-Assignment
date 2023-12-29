#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int alp, spch, dgt;
    alp = spch = dgt = 0;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            alp++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            dgt++;
        }
        else
        {
            spch++;
        }
        
    }
    printf("Number of alphabets in the string is %d.\n", alp);
    printf("Number of digits in the string is %d.\n", dgt);
    printf("Number of special charavters in the string is %d.\n", spch);
    
    return 0;
}