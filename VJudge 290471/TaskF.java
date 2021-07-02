import java.util.Scanner;
public class TaskF {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            int count = 0;
            int number = sc.nextInt();
            while (number > 0) {
                int bin = number % 2;
                if (bin == 1) {
                    count++;
                }
                number = number / 2;
            }
            System.out.println(count%2==0? "Case " + i + ": " + "even" : "Case " + i + ": " + "odd");
        }
    }
}
                