import java.util.Scanner;
public class F
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int[] b = new int[n];
        b[0] = a[0];
        for (int i = 1; i < n; i++) {
            b[i] = a[i] + b[i - 1];
        }
        // "b" array creation done, "b" array is the array with the cumulative sum of "a" array
        int q = sc.nextInt();
        for (int count = 1; count <= q; count++) {
            int i = sc.nextInt();
            int j = sc.nextInt();
            if (i == 0) {
                System.out.println(b[j]);
            } else {
                int sum = b[j] - (b[i-1]);
                System.out.println(sum);
            }
        }
    }
}