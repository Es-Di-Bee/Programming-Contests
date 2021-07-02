import java.util.Arrays;
import java.util.Scanner;
public class TaskU { 
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int o = m + n;
        int[] a = new int[o];
        boolean zeroFlag = false;
        for (int i = 0; i < o; ++i) {
            a[i] = sc.nextInt();
            if (a[i] == 0) {
                zeroFlag = true;
            }
            for (int j = 0; j < i; ++j) {
                if (a[i] == a[j]) {
                	a[i] = 0;
                	break;
                }
            }
        }
        Arrays.sort(a);
        if (zeroFlag == true) {
            System.out.print(0 + " ");
        }
        for (int i = 0; i < a.length; ++i) {
            if (a[i] != 0) {
                System.out.print(a[i]);
                if (i != a.length - 1) {
                	System.out.print(" ");
                } else {
                	System.out.println();
                }
            }
        }
    }	
}