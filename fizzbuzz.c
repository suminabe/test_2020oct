#include <stdio.h>
#include <stdlib.h>

// please input first value, end value, fizz-value, buzz-value (int only)

int main(int argc, char **argv){
    if (argc < 5){
        printf("Error\n");
        return 0;}
    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    int fizz = atoi(argv[3]);
    int buzz = atoi(argv[4]);
    int i = 0;

    while(start <= end){
        if (start%fizz==0 && start%buzz==0)
            printf("fizzbuzz\n");
        else if (start%fizz==0)
            printf("fizz\n");
        else if (start%buzz==0)
            printf("buzz\n");
        else
            printf("%d\n", start);
        start++;
    }
    return 0;
}