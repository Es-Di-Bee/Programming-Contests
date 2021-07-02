import java.util.Scanner;
public class TaskF {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();
        System.out.print( (n / d) + " ");
        System.out.print( (n % d) + " ");
        System.out.println(d);
    }
}