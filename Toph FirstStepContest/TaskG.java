import java.util.Scanner;
public class TaskG {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int sum = 0;
        double average;
        for (int i = 1; i <= n; ++i) {
            int num = sc.nextInt();
            sum += num;
            average = ((double)sum) / i;
            System.out.println(average);
        }
    }
}