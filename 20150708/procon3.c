/* 下限・上限の値に依存しないで出力出来るコード */
#include <stdio.h>
int main(void){
    int n, f, i;
    for (n = 1; n <= 100; ++n) {
        for (i = n > 0 ? n : -n, f = 0; i; i /= 10) {
            if (i % 10 == 7) {
                f = 1;
                break;
            }
        }
        f ? printf("Lucky!\n") : printf("%d\n", n);
    }
}