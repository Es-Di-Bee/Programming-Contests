import java.util.Scanner;
public class TaskC {
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int t = sc.nextInt();
            for (int i = 1; i <= t; ++i) {
                  int x = sc.nextInt();
                  int y = 0;
                  int m = x;
                  while (x > 0) {
                        int digit = x % 10;
                        y = y * 10 + digit;
                        x /= 10;
                  }
                  if (m == y) {
                        System.out.println("Case " + i + ": " + "Yes");
                  } else {
                        System.out.println("Case " + i + ": " + "No");
                  }
            }
      }
}
                       