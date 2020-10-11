#include <stdio.h>

int main(void){
    int n, max, min;
    if (scanf("%d", &n) == '\0')
        return 0;
    int card[n];
    int i = 0;
    while (i < n){
        if (scanf("%d", &card[i]) == '\0')
            return 0;
        i++;
    }
    while (1){
        i = 1;
        int max = card[0];
        int min = card[0];
        while (i < n){
            if (max < card[i])
                max = card[i];
            i++;
        }
        i = 1;
        while (i < n){
            if (min > card[i])
                min = card[i];
            i++;
        }
        if (max == min){
            printf("%d\n", min);
            return 0;
        }
        else{
            i = 0;
            while (i < n){
                if (card[i] == max)
                    card[i] = max - min;
                i++;
            }
        }
    }
    return 0;
}