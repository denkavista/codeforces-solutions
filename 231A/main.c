#include <stdio.h>

int main() {
	int n;
    int a, b, c;
    int result = 0;

    scanf("%d", &n);
    
    while (n--) {
        scanf("%d %d %d", &a, &b, &c);

        if (a + b + c >= 2) {
            result++;
        }
    }

    
    printf("%d\n", result);

	return 0;
}