#include <stdio.h>
 
int main() {
 
    int a;
    int b;
    scanf("%d", &a);
    
    while(a)
    {
        scanf("%d", &b);
        if (b%2 == 0)
        {
            printf("0\n");
        }
        else
        {
        printf("1\n");
        }
        a--;
    }
    
    return 0;
}