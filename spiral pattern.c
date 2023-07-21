#include <stdio.h>
void drawSpiral(int rows, int cols) {
    int spiral[rows][cols];
    int value = 1;
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {

        for (int i = left; i <= right; ++i) {
            spiral[top][i] = value++;
        }
        ++top;


        for (int i = top; i <= bottom; ++i) {
            spiral[i][right] = value++;
        }
        --right;


        for (int i = right; i >= left; --i) {
            spiral[bottom][i] = value++;
        }
        --bottom;

        for (int i = bottom; i >= top; --i) {
            spiral[i][left] = value++;
        }
        ++left;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%4d ", spiral[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    drawSpiral(rows, cols);

    return 0;
}
