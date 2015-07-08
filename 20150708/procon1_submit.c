#include <stdio.h>
int main(void){
    char buf[64];
    int n;
    for (n = 1; n <= 100; ++n) {
        sprintf(buf, "%d", n);
        puts(strchr(buf, '7') ? "Lucky!" : buf);
    }
}