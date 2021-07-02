import java.util.Scanner;
public class TaskI {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int num1 = 8;
        int num2 = n - 8;
        if (num2 %2 != 0) {
            num1 = 9;
            num2 -= 1;
        } 
        System.out.println(num1 + " " + num2);
    }
}