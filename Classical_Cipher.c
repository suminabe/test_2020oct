#include <unistd.h>

int main(void){
    char line[] = "fsdz{Fdhvdu_flskhu_lv_fodvvlfdo_flskhu}";
    char *new;
    int i = 0;
    while (line[i]){
        if (line[i] != '_' && line[i] != '{' && line[i] != '}')
            new[i] = line[i] - 3;
        else
            new[i] = line[i];
        write(1, &new[i], 1);
        i++;
    }
}