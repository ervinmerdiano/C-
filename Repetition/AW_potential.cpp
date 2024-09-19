#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of variables

    int highest = -1;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num > highest) {
            highest = num;
            count = 1;
        } else if (num == highest) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

