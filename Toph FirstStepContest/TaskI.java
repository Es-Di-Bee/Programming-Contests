import java.util.Scanner;
public class TaskI {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String str = sc.nextLine();
        int i = 0, j = str.length()-1;
        while (i < str.length()/2) {
            if (str.charAt(i) == str.charAt(j)) {
                if (i == (str.length()/2)-1) {
                    System.out.println("Yes");
                }
                i++;
                j--;
            } else {
                System.out.println("No");
                break;
            }
        }
    }
}