import java.util.Scanner;
public class TaskV {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            while(sc.hasNext()) {
                  int n = sc.nextInt();
                  if (n == 0) {
                        break;
                  }
                  if (n <= 100) {
                        System.out.printf("f91(%d) = %d%n", n, 91);
                  } else {
                        System.out.printf("f91(%d) = %d%n", n, n-10);
                  }
            }
      }
}