import java.util.Arrays;
import java.util.Scanner;
public class TaskL {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String[] a = new String[n];
        for (int i = 0; i < n; ++i) {
            a[i] = sc.nextLine();
        }
        int count = 1;
        for (int i = 0; i < n-1; ++i) {
            if (a[i].equals(a[i+1])) {
            } else {
                count++;
            }
        }
        
        System.out.println(count);
    }
}