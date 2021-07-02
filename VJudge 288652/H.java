import java.util.Scanner;
import java.util.Arrays;

public class H
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int quantity = sc.nextInt();
        for (int i = 1; i <= quantity; i++) {
            int shops = sc.nextInt();
            int[] a = new int[shops];
            int sum1 = 0;
            for (int j = 0; j < shops; j++) {
                a[j] = sc.nextInt();
                sum1 += a[j];
            }
            Arrays.sort(a);
            int[] b = new int[shops];
            int l = shops - 1;
            for (int k = 0; k < shops; k++) {
                b[l] = a[k];
                l--;
            }
            int avg = sum1 / shops;
            int sum2 = 0;
            int m = 0;
            int n = m + 1;
            for (m = 0; m < (shops - 1); m++) {
                int dif = b[m] - b[n];
                sum2 += dif;
                n++;
            }
            int dif = Math.abs(avg - b[0]);
            sum2 += dif;
            dif = Math.abs(avg - b[shops - 1]);
            sum2 += dif;
            System.out.println(sum2);
        }
    }
}
