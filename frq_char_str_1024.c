#include<stdio.h>
#include<string.h>
void prntFrq(int freq[]);
void findFrq(char str[]);
int main(){
    char str[100];
    printf("Enter a string:\n");
    gets(str);
    findFrq(str);
    
    return 0;
}
void prntFrq(int freq[]){
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c :- %d\n", i + 'a', freq[i]);
        }
    }
}
void findFrq(char str[]){
    int i = 0;
    int freq[26] = {0};
    while (str[i] != '\0')
    {
        freq[str[i] - 'a']++;
        i++;
    }
    prntFrq(freq);
}