int matrix[3][3];
int determinant() {
    int det = 0;

    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
          matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
          matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);

    return det;
}

int main() {
   

    // Initialize the matrix with values
    matrix[0][0] = 2;
    matrix[0][1] = 3;
    matrix[0][2] = 4;
    matrix[1][0] = 1;
    matrix[1][1] = 2;
    matrix[1][2] = 0;
    matrix[2][0] = 3;
    matrix[2][1] = 1;
    matrix[2][2] = 1;

    int det;
    det = determinant();
    printf("det: %d\n", det);

    return 0;
}
