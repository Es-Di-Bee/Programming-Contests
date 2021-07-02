import java.util.Arrays;
import java.util.Scanner;
public class TaskK {
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int n = sc.nextInt();
            int chestCount = 0;
            int bicepsCount = 0;
            int backCount = 0;
            int[] a = new int[n];
            for (int i = 0; i < n; ++i) {
                  a[i] = sc.nextInt();
            }
            for (int i = 0; i < n; ++i) {
                  if (i % 3 == 0) {
                        chestCount += a[i];
                  } else if (i % 3 == 1) {
                        bicepsCount += a[i];
                  } else {
                        backCount += a[i];
                  }
            }
            if (chestCount > bicepsCount && chestCount > backCount) {
                  System.out.println("chest");
            } else if (bicepsCount > chestCount && bicepsCount > backCount) {
                  System.out.println("biceps");
            } else {
                  System.out.println("back");
            }
      }
}
            
            
            