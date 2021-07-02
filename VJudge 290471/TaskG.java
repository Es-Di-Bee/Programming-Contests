import java.util.Scanner;
public class TaskG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int N = sc.nextInt();
            int sum = 0;
            for (int i = 0; i <= N; i++) {
                int squared = i * i;
                sum += squared;
            }
            if (sum != 0) {
                System.out.println(sum);
            }
        }
    }
}