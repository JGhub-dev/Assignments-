int countZeros(int matrix[100][100], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (matrix[i][j] == 0)
                count++;
            else
                break;
        }
    }
    return count;
}
