#include <stdlib.h>

int main(void) {
    int *p = (int *)malloc(sizeof (int *));
    *p = 1;
    free(p);
    return *p;
}
