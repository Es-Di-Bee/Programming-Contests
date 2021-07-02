import java.util.Scanner;
public class TaskP {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            int num1 = sc.nextInt();
            int num2 = sc.nextInt();
            int reversed1 = 0;
            int reversed2 = 0;
            int sumReversed = 0;
            while (num1 != 0) {
                int digit = num1 % 10;
                reversed1 = (reversed1 * 10) + digit;
                num1 /= 10;
            }
            while (num2 != 0) {
                int digit = num2 % 10;
                reversed2 = (reversed2 * 10) + digit;
                num2 /= 10;
            }
            int sum = reversed1 + reversed2;
            while (sum != 0) {
                int digit = sum % 10;
                sumReversed = (sumReversed * 10) + digit;
                sum /= 10;
            }
            System.out.println(sumReversed);
        }
    }
}