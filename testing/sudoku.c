int printf(const char *fmt, ...);

int board[9][9];

int is_valid(int row, int col, int num) {
    int i;
    int j;
    int box_row;
    int box_col;

    i = 0;
    while (i < 9) {
        if (board[row][i] == num) {
            return 0;
        }
        i = i + 1;
    }

    i = 0;
    while (i < 9) {
        if (board[i][col] == num) {
            return 0;
        }
        i = i + 1;
    }

    box_row = (row / 3) * 3;
    box_col = (col / 3) * 3;
    i = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            if (board[box_row + i][box_col + j] == num) {
                return 0;
            }
            j = j + 1;
        }
        i = i + 1;
    }

    return 1;
}

int solve() {
    int i;
    int j;
    int row;
    int col;
    int num;
    int found;

    found = 0;
    row = 0;
    col = 0;
    i = 0;
    while (i < 9) {
        j = 0;
        while (j < 9) {
            if (board[i][j] == 0) {
                found = 1;
                row = i;
                col = j;
                j = 9;
                i = 9;
            }
            j = j + 1;
        }
        i = i + 1;
    }

    if (found == 0) {
        return 1;
    }

    num = 1;
    while (num <= 9) {
        if (is_valid(row, col, num)) {
            board[row][col] = num;
            if (solve()) {
                return 1;
            }
            board[row][col] = 0;
        }
        num = num + 1;
    }

    return 0;
}

void print_board() {
    int i;
    int j;

    i = 0;
    while (i < 9) {
        j = 0;
        while (j < 9) {
            printf("%d ", board[i][j]);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
}

int main() {
    int i;
    int j;

    i = 0;
    while (i < 9) {
        j = 0;
        while (j < 9) {
            board[i][j] = 0;
            j = j + 1;
        }
        i = i + 1;
    }

    board[0][0] = 5;
    board[0][1] = 3;
    board[0][4] = 7;

    board[1][0] = 6;
    board[1][3] = 1;
    board[1][4] = 9;
    board[1][5] = 5;

    board[2][1] = 9;
    board[2][2] = 8;
    board[2][7] = 6;

    board[3][0] = 8;
    board[3][4] = 6;
    board[3][8] = 3;

    board[4][0] = 4;
    board[4][3] = 8;
    board[4][5] = 3;
    board[4][8] = 1;

    board[5][0] = 7;
    board[5][4] = 2;
    board[5][8] = 6;

    board[6][1] = 6;
    board[6][6] = 2;
    board[6][7] = 8;

    board[7][3] = 4;
    board[7][4] = 1;
    board[7][5] = 9;
    board[7][8] = 5;

    board[8][4] = 8;
    board[8][7] = 7;
    board[8][8] = 9;

    printf("Puzzle:\n");
    print_board();
    printf("\n");

    if (solve()) {
        printf("Solution:\n");
        print_board();
    } else {
        printf("No solution found\n");
    }

    return 0;
}
