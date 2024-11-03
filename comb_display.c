#include <unistd.h>

void display_comb(void) {
    char i, j, k;

    for (i = '0'; i <= '7'; i++) {  
        for (j = i + 1; j <= '8'; j++) {
            for (k = j + 1; k <= '9'; k++) {
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);

                if (!(i == '7' && j == '8' && k == '9')) {
                    write(1, ", ", 2);
                }
            }
        }
    }
    write(1, "$\n", 2);
}

int main(void) {
    display_comb();
    return 0;
}
