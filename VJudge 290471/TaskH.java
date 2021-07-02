import java.util.Scanner;
public class TaskH {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            int totalHours = x + y;
            double perFamilyHours = totalHours / 3.0;
            double extraAHour = x - perFamilyHours;
            double extraBHour = y - perFamilyHours;
            double payment = (z * extraAHour) / (extraAHour + extraBHour);
            System.out.printf("%.0f%n", payment);
        }
    }
}