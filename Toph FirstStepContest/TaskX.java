import java.util.Scanner;
public class TaskX {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        double n = sc.nextDouble();
        int n1 = (int)n / 10;
        System.out.print('[');
        for (int i = 1; i <= n1; ++i) {
            System.out.print('+');
        }
        n1 = 10 - n1;
        for (int i = 1; i <= n1; ++i) {
            System.out.print('.');
        }
        System.out.print("] ");
        n = Math.floor(n);
        System.out.printf("%.0f%%", n);
        System.out.println();
    }
}