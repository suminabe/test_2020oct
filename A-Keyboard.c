#include <stdio.h>

int main(void){
    char S, T;
    if ((scanf("%c %c[^\n]", &S, &T)) == '\0')
        return 0;
    if (S == 'Y')
        T = T + ('A'- 'a');
    printf("%c\n", T);
    return 0;
}