 while (counter<ROWS){
    if( (matrix[i][counter] == matrix[i+1][counter] == matrix[i+2][counter]) && matrix[i][counter] != 0){
        output = 1;
        break;
    }
counter++;
}
