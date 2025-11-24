#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal of the matrix:\n");

    for (int d = 0; d < rows + cols - 1; d++) {
        
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;

        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }

    return 0;
}
