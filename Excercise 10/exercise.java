import java.util.HashMap;
import java.util.Map;

public class App {
    public static void main(String[] args) {
        System.out.println("Case 1: ");
        System.out.println(alphabetEncoding(27));
        // Expected : AA
        // Result   : AA

        System.out.println("Case 2: ");
        System.out.println(alphabetEncoding(26));
        // Expected : Z
        // Result   : Z
        
        System.out.println("Case 3: ");
        System.out.println(alphabetEncoding(51));
        // Expected : AY
        // Result   : AY
        
        System.out.println("Case 4: ");
        System.out.println(alphabetEncoding(80));
        // Expected : CB
        // Result   : CB 
        
        System.out.println("Case 5: ");
        System.out.println(alphabetEncoding(705));
        // Expected : AAC
        // Result   : AAC

        System.out.println("Case 6: ");
        System.out.println(alphabetEncoding(0));
        // Expected :
        // Result   :
    }

    // Using map to solve the problem.
    public static String alphabetEncoding(int n) {
        // Result variable to store the result string.
        StringBuffer result = new StringBuffer("");

        // Putting in all of the alphabets in the HashMap.
        Map<Integer, String> map = new HashMap<Integer, String>();
        {{
            map.put(1,"A");
            map.put(2,"B");
            map.put(3,"C");
            map.put(4,"D");
            map.put(5,"E");
            map.put(6,"F");
            map.put(7,"G");
            map.put(8,"H");
            map.put(9,"I");
            map.put(10,"J");
            map.put(11,"K");
            map.put(12,"L");
            map.put(13,"M");
            map.put(14,"N");
            map.put(15,"O");
            map.put(16,"P");
            map.put(17,"Q");
            map.put(18,"R");
            map.put(19,"S");
            map.put(20,"T");
            map.put(21,"U");
            map.put(22,"V");
            map.put(23,"W");
            map.put(24,"X");
            map.put(25,"Y");
            map.put(26,"Z");
        }};

        // Run in a while loop to append the character to the result string.
        while (n > 0) {
            // Getting the correcr character key value.
            int num = n % 26;

            // If the remainder is 0,
            if (num == 0) {
                // Append "Z".
                result.append(map.get(26));
                // Reduce the number with -1.
                n = (num / 26) - 1;

            // If the remainder is none 0,
            } else {
                // Append the character of the key(remainder).
                result.append(map.get(num));
                // Reducing the number.
                n = n / 26;
            }
        }

        // Reverse the string.
        result.reverse();

        // Return the result variable as string.
        return result.toString();
    }
}