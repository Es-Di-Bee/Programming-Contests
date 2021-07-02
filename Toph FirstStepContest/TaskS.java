import java.util.Arrays;
import java.util.Scanner;
public class TaskS {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < a.length; ++i) {
            a[i] = sc.nextInt();
        }
        int j = 1;
        for (int i = 0; j < a.length; ++i, j++) {
            if (a[j] < a[i]) {
                System.out.println("No");
                break;
            } 
            if (j == a.length-1) {
                System.out.println("Yes");
                break;
            }
        }
    }
}