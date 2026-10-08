#include <stdio.h>
int getchar();
int putchar(int c);
void put_int(int number) {
    if (number >= 10) {
        putchar(number / 10 + '0');
        putchar(number % 10 + '0');
    }
    else {
        putchar(number + '0');
    }
}
int main() {
    int n = 99;
    int i = 0;
    int j;char *p = malloc(n + 1);
while (i <= n) {
    *(p + i) = 1;
    i++;
}
*p = 0;
*(p + 1) = 0;

i = 2;
while (i * i <= n) {
    if (*(p + i) == 1) {
        j = i * i;
        while (j <= n) {
            *(p + j) = 0;
            j += i;
        }
    }
    i++;
}

i = 2;
while (i <= n) {
    if (*(p + i) == 1) {
        put_int(i);
        putchar(' ');
    }
    i++;
}
free(p);

return 0;
}