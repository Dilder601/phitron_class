#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5][5];
    int ans = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == 1) {
                ans += abs(i - 2) + abs(j - 2);
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
