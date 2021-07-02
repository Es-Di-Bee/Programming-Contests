import java.util.Scanner;
public class TaskG {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        if (n == 1) {
            int num = sc.nextInt();
            if (num == 0) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        } else {
            int count = 0;
            for (int i = 1; i <= n; ++i) {
                int num = sc.nextInt();
                if (num == 0) {
                    count++;
                }
            }
            if (count == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}