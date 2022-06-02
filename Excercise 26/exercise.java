public class App {
    public static void main(String[] args) {
        int[][] matrix1 = {{1,2,3}, {4,5,6}, {7,8,9}};
        int[][] matrix1res = transpose(matrix1);
        System.out.println("Case 1 : ");
        for (int i = 0; i < matrix1res.length; i++) {
            for (int j = 0; j < matrix1res[i].length; j++) {
                System.out.print(matrix1res[i][j] + " ");
            }
            System.out.println("");
        }
        /* Expected  
        *   1 4 7
        *   2 5 8
        *   3 6 9
        *
        *  Result
        *   1 4 7
        *   2 5 8
        *   3 6 9
        */ 

        int[][] matrix2 = {{1,2,3,}, {4,5,6}};
        int[][] matrix2res = transpose(matrix2);
        System.out.println("Case 2 : ");
        for (int i = 0; i < matrix2res.length; i++) {
            for (int j = 0; j < matrix2res[i].length; j++) {
                System.out.print(matrix2res[i][j] + " ");
            }
            System.out.println("");
        }
        /* Expected  
        *   1 4 
        *   2 5 
        *   3 6 
        *
        *  Result
        *   1 4 
        *   2 5 
        *   3 6 
        */

    }

    // Method to transpose a matrix.
    public static int[][] transpose(int[][] matrix) {
        // Getting the row and column of the matrix.
        int r = matrix.length;
        int c = matrix[0].length;
        
        // Createing a new matrix which flips the row and column.
        int[][] res = new int[c][r];

        // Run im loop to transpose the matrix.
        for (int i  = 0; i < c; i++) { 
            for (int j = 0; j < r; j++) {
                // Fill in the row and column.
                res[i][j] = matrix[j][i];
            }
        }

        // Return the result.
        return res;
    }

    /*
     *                  Positions
     *      0,0 0,1 0,2     ->      0,0 1,0 2,0
     *      1,0 1,1 1,2     ->      0,1 1,1 2,1
     *      2,0 2,1 2,2     ->      0,2 1,2 2,2
     */

}