import java.util.Scanner;
public class TaskD {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        sc.nextLine();
        String str = sc.nextLine();
        int count = 0;
        for (int i = n-x; i < n; ++i) {
            if (str.charAt(i) == '1') {
                if (i != n-y-1) {
                    count++;
                }
            } else if (i == n-y-1) {
                count++;
            }
        }
        System.out.println(count);
    }
}