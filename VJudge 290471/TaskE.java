import java.util.Scanner;
public class TaskE {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            int problems = sc.nextInt();
            if (problems <= 10) {
                System.out.print(0 + " ");
                System.out.println(problems);
            } else {
                int extra = problems - 10;
                System.out.print(10 + " ");
                System.out.println(extra);
            }
        }
    }
}