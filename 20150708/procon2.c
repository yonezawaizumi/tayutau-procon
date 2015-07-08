#include <stdio.h>
int main(void){
    int n;
    for (n = 1; n <= 100; ++n) {
        n % 10 == 7 || n % 100 / 10 == 7 ? printf("Lucky!\n") : printf("%d\n", n);
    }
}