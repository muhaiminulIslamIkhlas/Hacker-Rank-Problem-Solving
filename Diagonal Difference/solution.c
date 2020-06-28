int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i,j;
    int primary_diagonal=0;
    int secondary_diagonal=0;

    for(i=0;i<arr_rows;i++){
        for(j=0;j<arr_columns;j++){
            if(i==j){
                primary_diagonal +=arr[i][j];
            }

            if(i==arr_rows-j-1){
                secondary_diagonal +=arr[i][j];
            }
        }
    }

    return abs(primary_diagonal-secondary_diagonal);
}
