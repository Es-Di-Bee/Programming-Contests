import java.util.Scanner;
public class TaskH {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            int t = sc.nextInt();
            for (int i = 1; i <= t; ++i) {
                  System.out.println("Case " + i + ":");
                  int x1 = sc.nextInt();
                  int y1 = sc.nextInt();
                  int x2 = sc.nextInt();
                  int y2 = sc.nextInt();
                  int cows = sc.nextInt();
                  for (int j = 1; j <= cows; ++j) {
                        int z1 = sc.nextInt();
                        int z2 = sc.nextInt();
                        if ( (z1>x1 && z1<x2) && (z2>y1 && z2 < y2) ) {
                              System.out.println("Yes");
                        } else {
                              System.out.println("No");
                        }
                  }
            }
      }
}