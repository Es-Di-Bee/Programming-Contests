import java.util.Scanner;
public class TaskD {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        String str = "";
        for (int i = 1; i <= 1000; ++i) {
            str += i;
        }
        System.out.println(str.charAt(n-1));
    }
}