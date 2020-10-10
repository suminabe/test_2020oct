#include <stdio.h>

int main(void){
    char S, T;
    scanf("%c %c[^\n]", &S, &T);
    if (S == 'Y')
        T = T + ('A'- 'a');
    printf("%c\n", T);
    return 0;
}