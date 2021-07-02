import java.util.Scanner;
public class TaskO {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            int quiz = sc.nextInt();
            int targetMarks = sc.nextInt();
            int sum = 0;
            for (int j = 1; j <= quiz; j++) {
                int marks = sc.nextInt();
                sum += marks;
            }
            int lastMark = ( targetMarks * (quiz+1) ) - sum;
            System.out.println("Case " + i + ": " + lastMark);
        }
    }
}