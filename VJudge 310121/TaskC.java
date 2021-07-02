import java.util.Scanner;
public class TaskC {
      public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int tc = sc.nextInt();
            for (int j = 1; j <= tc; ++j) {
                 long num = sc.nextInt();
                  for (int i = 1; i>0; ++i) {
                        long temp = num;
                        long numR = 0;
                        while (temp != 0) {
                              numR = (numR * 10) + (temp % 10);
                              temp /= 10;
                        }
                        long sum = num  + numR;
                        temp = sum;
                        long sumR = 0;
                        while (temp != 0) {
                              sumR = (sumR * 10) + (temp % 10);
                              temp /= 10;
                        }
                        if (sum == sumR) {
                              System.out.println(i + " " + sum);
                              break;
                        } else { 
                              num = sum;
                        }
                  }
            }
      }
}
