import java.util.Scanner;
public class TaskJ {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        long k = sc.nextLong();
        long backupK = k;
        int l = sc.nextInt();
        int count = 0;
        while (k <= Double.POSITIVE_INFINITY) {
            if (k == l) {
                System.out.println("YES");
                System.out.println(count);
                break;
            } else if (k > l) {
                System.out.println("NO");
                break;
            }
            k = k * backupK;
            count++;
        }
    }
}