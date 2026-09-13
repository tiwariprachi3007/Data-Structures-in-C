#include <stdio.h>

int main() {
    int n, arr[100][100];

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements (0 or 1):\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int i = 0;
    int j = n - 1;
    int maxRow = -1;

    while (i < n && j >= 0) {

        if (arr[i][j] == 1) {
            maxRow = i;
            j--;          // Move left
        }
        else {
            i++;          // Move down
        }
    }

    if (maxRow == -1)
        printf("No row contains 1.");
    else
        printf("Row with maximum number of 1s = %d", maxRow + 1);

    return 0;
}