class Solution {
    public void setZeroes(int[][] matrix) {
        int rSize = matrix.length;
        int cSize = matrix[0].length;
        int[] row = new int[rSize];
        int[] col = new int[cSize];
        Arrays.fill(row,0);
        Arrays.fill(col,0);

        for(int i=0; i<matrix.length; i++) {
            for(int j=0; j<cSize; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // set row zero: 
        for(int i=0; i<rSize; i++) {
            if(row[i] == 1) {
                for(int j=0; j<cSize; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set Column Zero:
        for(int i=0; i<cSize; i++) {
            if(col[i] == 1) {
                for(int j=0; j<rSize; j++) {
                    matrix[j][i] = 0;
                }
            }
        }

    }
}