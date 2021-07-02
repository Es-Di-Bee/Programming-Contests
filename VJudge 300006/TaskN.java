import java.util.Scanner;
public class TaskN {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String str = sc.nextLine();
        String str1 = sc.nextLine();
        str = str.toLowerCase();
        str1 = str1.toLowerCase();
        if (str.compareTo(str1) == 0) {
            System.out.println(0);
        } else if (str.compareTo(str1) > 0) {
            System.out.println(1);
        } else {
            System.out.println(-1);
        }
    }
}
            