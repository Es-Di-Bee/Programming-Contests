import java.util.Scanner;
public class TaskA {
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int t = sc.nextInt();
            for (int i = 1; i <= t; ++i) {
                  int a = sc.nextInt();
                  int b = sc.nextInt();
                  int result;
                  if (a<=b) {
                        result = (b * 4) + 19;
                  } else {
                        result = 19 + (a*4) + ( (a-b)*4);
                  }
                  System.out.println("Case " + i + ": " + result);
            }
      }
}
            