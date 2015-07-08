/* カリカリチューン */
/* たぶん上下限を汎用化した場合、elseブロック内の== 7判定で分岐してLucky!したほうが速いかも */
/* 1..100の場合は、doブロック内での分岐繰り返しの分だけ遅くなるようです */
#include <stdio.h>
#include <memory.h>
static char buf[7 * 100 + 1];
static char digit_buf[4];
#define LUCKY "Lucky!\n"
#define LUCKY_LEN sizeof LUCKY - 1
#define DIGIT_BUF_LEN sizeof digit_buf
int main(void){
    int n;
    char *p = buf;
    digit_buf[DIGIT_BUF_LEN - 1] = '\n';
    for (n = 1; n <= 100; ++n) {
        if (n % 10 == 7 || n % 100 / 10 == 7) {
            memcpy(p, LUCKY, LUCKY_LEN);
            p += LUCKY_LEN;
        } else {
            char *q = digit_buf + DIGIT_BUF_LEN - 1;
            int v = n;
            int digit_len;
            do {
                *--q = '0' + (v % 10);
                v /= 10;
            } while (v);
            memcpy(p, q, digit_len = DIGIT_BUF_LEN - (q - digit_buf));
            p += digit_len;
        }
    }
    *--p = '\0';
    puts(buf);
}
