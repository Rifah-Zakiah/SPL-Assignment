#include<stdio.h>
void sp_to_star(char *str);
int main(){
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    sp_to_star(str);

     return 0;
}
void sp_to_star(char *str){
    while (*str)
    {
        if (*str == ' ')
        {
            printf("%c", '*');
        }else
        {
            printf("%c", *str);
        }
        str++;
    }  
}