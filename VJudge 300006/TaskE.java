import java.util.Scanner;
public class TaskE {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            int n = sc.nextInt();
            int d = sc.nextInt();
            sc.nextLine();
            int count = 0;
            int streak = 0;
            for (int i = 1; i <= d; ++i) {
                  String str = sc.nextLine();
                  boolean  bol = false;
                  for (int j = 0; j < n; ++j) {
                        if (str.charAt(j) == '0') {
                              bol = true;
                        }  if (j == n-1) {
                              if (bol == true) {
                                    ++count;
                              } else {
                                    count = 0;
                              }
                        }
                  }
                  if (count > streak) {
                        streak = count;
                  }
            }
            System.out.println(streak);
      }
}
                        
                        
                              