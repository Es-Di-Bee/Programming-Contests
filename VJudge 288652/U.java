import java.util.Scanner;
public class U {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String istr = sc.nextLine();
        String fStr = istr.toLowerCase();
        boolean[] arr = new boolean[26]; 
        for ( char c : fStr.toCharArray() ) {
            if ( c != ' ') { 
                arr[c - 'a'] = true;
            }
        }
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i] == true) {
                count ++;
            }
        }
        if (count == 26) {
            System.out.println("pangram");
        } else {
            System.out.println("not pangram");
        }
    }
}
        
        