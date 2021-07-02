import java.util.Scanner;
public class TaskD {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int sum = sc.nextInt();
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();
        System.out.println(sum - (num1 + num2 + num3));
    }
}