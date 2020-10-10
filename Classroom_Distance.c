#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    int N, i, x, y, a, b, sum;
    i = 0;
    a = 0;
    b = 0;
    sum = 0;
    if (scanf("%d", &N) == '\0')
      return 0;
    while (i < N){
        if (scanf("%d %d", &x, &y) == '\0')
          break ;
        if (i != 0){
            a = abs(a - x);
            b = abs(b - y);
            sum = sum + a + b;
        }
        a = x;
        b = y;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}