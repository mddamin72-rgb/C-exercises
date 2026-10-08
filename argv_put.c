#include <unistd.h>

int main(int argc, char **argv){
    int i =0;
    while (i < argc){
        int j =0;
        while (*(*(argv +i)+ j)){
            putchar(*(*(argv +i)+ j));
            j++;
        }
        putchar('\n');
        i++;
    }
    return 0;
}