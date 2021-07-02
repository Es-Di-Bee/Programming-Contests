import java.util.Scanner;
public class TaskI {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        sc.nextLine();
        for (int tc = 1; tc <= t; ++tc) {
            String str = sc.next();
            int b = sc.nextInt();
            b = Math.abs(b);
            char[] a = str.toCharArray();
            long dividend = 0;
            for (int i = 0; i < a.length; ++i) {
                if (a[i] == '-') {
                    continue;
                }
                dividend = (dividend * 10) + (a[i] - '0');
                dividend %= b;
            }
            if (dividend == 0) {
                System.out.println("Case " + tc + ": " + "divisible");
            } else {
                System.out.println("Case " + tc + ": " + "not divisible");
            }
        }
        sc.nextLine();
    }
}


