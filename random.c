#include<stdio.h>
#include<math.h>
int main(){
    int  t;
    scanf("%d", &t);

    
    while (t--)
    {
        int a, b, d;
        scanf("%d %d %d", &a, &b, &d);
        printf("%d", d*(d/2));
    }
   

    
    return 0;
}