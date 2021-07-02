import java.util.Scanner;
public class TaskF { 
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int withdraw = sc.nextInt();
            double balance = sc.nextDouble();
            if (withdraw %5 == 0 && withdraw <= balance-.50) {
                  double left = balance - withdraw - 0.50;
                  System.out.printf("%.2f%n", left);
            } else if (withdraw > balance-0.50 || withdraw %5 != 0) {
                  System.out.printf("%.2f%n", balance);
            }
      }
}