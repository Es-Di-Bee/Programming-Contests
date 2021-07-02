import java.util.Scanner;
public class TaskI {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            int students = sc.nextInt();
            int[] a = new int[students];
            int sum = 0;
            for (int j = 0; j < students; j++) {
                a[j] = sc.nextInt();
                sum += a[j];
            }
            double avg = ( (double)sum ) / students;
            int count = 0;
            for (int k : a) {
                if (k > avg) {
                    count++;
                }
            }
            double percentage = ( ( (double) count ) / students ) * 100;
            System.out.printf("%.3f%%", percentage);
            System.out.println();
        }
    }
}