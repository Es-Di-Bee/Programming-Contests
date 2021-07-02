import java.util.Scanner;
public class TaskA {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            int t = sc.nextInt();
            for (int i = 1; i <= t; ++i) {
                  int length = sc.nextInt();
                  sc.nextLine();
                  String str = sc.nextLine();
                  if (length == 11) {
                        if (str.charAt(0) == '8') {
                              System.out.println("YES");
                        } else {
                              System.out.println("NO");
                        }
                  } else if (length < 11) {
                        System.out.println("NO");
                  } else {
                        int dif = length - 11;
                        for (int j = 0; j <= dif; ++j) {
                              if (str.charAt(j) == '8') {
                                    System.out.println("YES");
                                    break;
                              }
                              if (j == dif) {
                                    System.out.println("NO");
                              }
                        }
                  }
            }
      }
}
