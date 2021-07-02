import java.util.Arrays;
import java.util.Scanner;
public class TaskH {
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int balls = sc.nextInt();
            int[] a = new int[balls];
            for (int i = 0; i < balls; ++i) {
                  a[i] = sc.nextInt();
            }
            Arrays.sort(a);
            int count = 1;
            for (int i = 0; i < balls-1; ++i) {
                  if (a[i] == a[i+1]-1 || a[i] == a[i+1]) {
                        if (a[i] == a[i+1]) {
                              if (i == a.length-2) {
                                    System.out.println("NO");
                                    break;
                              }
                              continue;
                        }
                        ++count;
                        if (count == 3) {
                              System.out.println("YES");
                              break;
                        }
                  } else {
                        count = 1;
                  }
                  if (i == a.length-2) {
                        System.out.println("NO");
                        break;
                  }
            }
      }
}
