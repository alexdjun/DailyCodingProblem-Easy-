public class App {
    public static void main(String[] args) {
        System.out.print("Case 1 : ");
        System.out.println(arrangeCoins(5));
        // Expected : 2
        // Result   : 2

        System.out.print("Case 2 : ");
        System.out.println(arrangeCoins(8));
        // Expected : 3
        // Result   : 3

        System.out.print("Case 3 : ");
        System.out.println(arrangeCoins(0));
        // Expected : 0
        // Result   : 0
    }

    // Method to build stair case.
    public static int arrangeCoins(int n) {
        // Resut variable.
        int res = 0;

        for (res = 1; res <= n; res++) {
            // Subtract res variable from n.
            // Each iteration is a successful iteration except for the last one.
            n = n - res;
        }

        // Return res - 1 since last iteration is not a successful iteration.
        return res - 1;
    }
}