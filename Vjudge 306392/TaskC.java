import java.util.Scanner;
public class TaskC {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            int t = sc.nextInt();
            for (int i = 1; i <= t; ++i) {
                  int a = sc.nextInt();
                  int b = sc.nextInt();
                  int c1 = 0;
                  int c2 = 0;
                  int result = b / 3;
                  result *= 2;
                  if (b % 3 == 2) {
                        ++result;
                  }
                  c1 = result;
                  result = (a-1) / 3;
                  result *= 2;
                  if ((a-1) % 3 == 2) {
                        ++result;
                  }
                  c2 = result;
                  result = c1 - c2;
                  System.out.println("Case " + i + ": " + result);
            }
      }
}
