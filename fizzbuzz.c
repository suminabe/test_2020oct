#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if (argc < 5){
        write(1, "Error\n", 6);
        return 0;}
    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    int fizz = atoi(argv[3]);
    int buzz = atoi(argv[4]);
    int i = 0;

    while(start <= end){
        if (start%fizz==0 && start%buzz==0)
            write(1, "fizzbuzz\n", 9);
        else if (start%fizz==0)
            write(1, "fizz\n", 5);
        else if (start%buzz==0)
            write(1, "buzz\n", 5);
        else{
            i = itoa(start);
            write(1, &i, 5);
            write(1, "\n", 1);
        }
        start++;
    }
    return 0;
}