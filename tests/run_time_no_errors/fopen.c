#include <stdio.h>

int main(void) {
    FILE *f = fopen(__FILE__, "r");
    int c;
    while ((c = fgetc(f)) != EOF) {
        putchar(c);
    }
}
