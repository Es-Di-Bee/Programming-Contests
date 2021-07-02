import java.util.Scanner;
public class TaskD {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            int sum = 0;
            int candyType = sc.nextInt();
            int minCandy = sc.nextInt();
            for (int j = 1; j <= candyType; j++) {
                int candy = sc.nextInt();
                int kids = candy / minCandy;
                sum += kids;
            }
            System.out.println(sum);
        }
    }
}