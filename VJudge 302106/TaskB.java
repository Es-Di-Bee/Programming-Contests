import java.util.Arrays;
import java.util.Scanner;
public class TaskB {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; ++i) {
                  int sum = 0;
                  for (int j = 1; j <= 4; ++j) {
                        int marks = sc.nextInt();
                        sum += marks;
                  }
                  a[i] = sum;
            }
            int thomasMark = a[0];
            Arrays.sort(a);
            int count = 1;
            for (int i = a.length-1; i >= 0; --i) {
                  if (thomasMark == a[i]) {
                        System.out.println(count);
                        break;
                  }
                  ++count;
            }
      }
}