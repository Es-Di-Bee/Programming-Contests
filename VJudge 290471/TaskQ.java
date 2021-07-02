import java.util.Scanner;
public class TaskQ {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int sum = num1 + num2;
        int excludedSum = 0;
        int power3 = 1;
        while (sum != 0) {
            int digit = sum % 10;
            if (digit != 0) {
                excludedSum = ( digit * power3) + excludedSum;
                power3 *= 10;
            }
            sum /= 10;
        }
        int excludedNum1 = 0;
        int excludedNum2 = 0;
        int power1 = 1;
        int power2 = 1;
        while (num1 != 0) {
            int digit = num1 % 10;
            if (digit != 0) {
                excludedNum1 = ( digit * power1) + excludedNum1;
                power1 *= 10;
            }
            num1 /= 10;
        }
        while (num2 != 0) {
            int digit = num2 % 10;
            if (digit != 0) {
                excludedNum2 = ( digit * power2) + excludedNum2;
                power2 *= 10;
            }
            num2 /= 10;
        }
        int excludedNumSum = excludedNum1 + excludedNum2;
        if (excludedSum == excludedNumSum) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
                        