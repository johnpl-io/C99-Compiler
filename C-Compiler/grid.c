int grid[9][9];


void printgrid() {
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}




int main() {
int  a;

grid[0][0] = 3; grid[0][1] = 0; grid[0][2] = 6; grid[0][3] = 5; grid[0][4] = 0; grid[0][5] = 8; grid[0][6] = 4; grid[0][7] = 0; grid[0][8] = 0;
grid[1][0] = 5; grid[1][1] = 2; grid[1][2] = 0; grid[1][3] = 0; grid[1][4] = 0; grid[1][5] = 0; grid[1][6] = 0; grid[1][7] = 0; grid[1][8] = 0;
grid[2][0] = 0; grid[2][1] = 8; grid[2][2] = 7; grid[2][3] = 0; grid[2][4] = 0; grid[2][5] = 0; grid[2][6] = 0; grid[2][7] = 3; grid[2][8] = 1;
grid[3][0] = 0; grid[3][1] = 0; grid[3][2] = 3; grid[3][3] = 0; grid[3][4] = 1; grid[3][5] = 0; grid[3][6] = 0; grid[3][7] = 8; grid[3][8] = 0;
grid[4][0] = 9; grid[4][1] = 0; grid[4][2] = 0; grid[4][3] = 8; grid[4][4] = 6; grid[4][5] = 3; grid[4][6] = 0; grid[4][7] = 0; grid[4][8] = 5;
grid[5][0] = 0; grid[5][1] = 5; grid[5][2] = 0; grid[5][3] = 0; grid[5][4] = 9; grid[5][5] = 0; grid[5][6] = 6; grid[5][7] = 0; grid[5][8] = 0;
grid[6][0] = 1; grid[6][1] = 3; grid[6][2] = 0; grid[6][3] = 0; grid[6][4] = 0; grid[6][5] = 0; grid[6][6] = 2; grid[6][7] = 5; grid[6][8] = 0;
grid[7][0] = 0; grid[7][1] = 0; grid[7][2] = 0; grid[7][3] = 0; grid[7][4] = 0; grid[7][5] = 0; grid[7][6] = 0; grid[7][7] = 7; grid[7][8] = 4;
grid[8][0] = 0; grid[8][1] = 0; grid[8][2] = 5; grid[8][3] = 2; grid[8][4] = 0; grid[8][5] = 6; grid[8][6] = 3; grid[8][7] = 0; grid[8][8] = 0;



printgrid();

return 0;
}