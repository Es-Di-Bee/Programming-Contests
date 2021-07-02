import java.util.Scanner;
public class TaskP {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        double result = Math.pow(2, (n-1));
        System.out.printf("%.0f%n", result);
    }
}
                           
