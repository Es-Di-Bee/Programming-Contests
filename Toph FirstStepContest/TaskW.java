import java.util.Scanner;
public class TaskW {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < arr.length; ++i) {
            arr[i] = sc.nextInt();
        }
        int sum = 0;
        for (int i = a; i <= b; ++i) {
            sum += arr[i];
        }
        System.out.println(sum);
    }
}
        