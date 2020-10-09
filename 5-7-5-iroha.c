#include <unistd.h>
#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b ,&c);
    if (a+b+c == 17 && min(a,b,c) == 5 && max(a,b,c) == 7){
        write(1, "YES\n", 4);
        return 0;
    }
    else {
        write(1, "NO\n", 3);
        return 0;
    }
}

int min(int a, int b, int c){
    if (a<=b && a<=c)
        return a;
    else if (a<=b && c<=a)
        return c;
    else
        return b;
}

int max(int a, int b, int c){
    if (a>=b && a>c)
        return a;
    else if (a>=b && c>a)
        return c;
    else
        return b;
}