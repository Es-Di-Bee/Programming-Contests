import java.util.Scanner;
public class TaskZ {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        String str = sc.nextLine();
        int c = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (str.charAt(i) == '(') {
                c++;
            } else if (str.charAt(i) == ')') {
                c--;
            }
            if (c < 0) {
                System.out.println("No");
                break;
            }
            if (i == str.length()-1) {
                if (c == 0) {
                    System.out.println("Yes");
                } else {
                    System.out.println("No");
                }
            }
        }
    }
}