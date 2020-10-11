#include <stdio.h>

int main(void){
    int a,b,c,d,sum;
    if (scanf("%d %d %d %d",&a,&b,&c,&d) == '\0')
        return 0;
    sum = a+b+c+d;
    if (sum == a*2 || sum == b*2 || sum == c*2 || sum == d*2){
        printf("Yes");
    }
    else if (sum == (a+b)*2 || sum == (a+c)*2 || sum == (a+d)*2 || sum == (b+c)*2 || sum == (b+d)*2 || sum == (c+d)*2){
        printf("Yes");
    }
    else{ 
        printf("No");
    }
    return 0;   
}