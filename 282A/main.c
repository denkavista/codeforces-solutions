#include <stdio.h>

int main() {
	int n;
    int x = 0;

    char a, b, c;

    scanf("%d", &n);
    
    while (n--) {
        scanf(" %c%c%c", &a, &b, &c);

        if (b == '-') {
            x--;
        } else {
            x++;
        }
    }

    printf("%d\n", x);

	return 0;
}