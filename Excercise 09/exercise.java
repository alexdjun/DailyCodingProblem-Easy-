public class App {
    public static void main(String[] args) {
        int[] arr = {1,2,3,10};
        System.out.println("Case 1");
        System.out.println(smallestPostiveInt(arr));
        // Expected : 7
        // Result   : 7

        System.out.println("Case 2");
        int[] arr2 = {1,2,3,4,13};
        System.out.println(smallestPostiveInt(arr2));
        // Expected : 11
        // Result   : 11

        System.out.println("Case 3");
        int[] arr3 = {1};
        System.out.println(smallestPostiveInt(arr3));
        // Expected : 2
        // Result   : 2

        System.out.println("Case 4");
        int[] arr4 = {};
        System.out.println(smallestPostiveInt(arr4));
        // Expected : 1
        // Result   : 1
    }

    // Method to find the smallest postive int that is not a sum of any subset of the array.
    public static int smallestPostiveInt(int[] arr) {
        // First we initialize our result to be 1 because that is the smallest number wer can get. 
        int res = 1;

        // Since array is already sorted, just run thorugh the loop.
        for (int i = 0; i < arr.length; i++) {
            // If the element is greate than the result variable, then we have the smallest number.
            if (arr[i] > res) {
                // Return the smallest number.
                return res;
            
            // If not, then we add the result variable to the current element of the array.
            // That would be the next smallest number.
            } else {
                res = arr[i] + res;
            }
        }

        // Return the result variable.
        return res;
    }
}