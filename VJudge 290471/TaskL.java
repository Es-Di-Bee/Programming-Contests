import java.util.Scanner;
import java.util.Arrays;
public class TaskL {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            long[] a = new long[3];
            a[0] = sc.nextInt();
            a[1] = sc.nextInt();
            a[2] = sc.nextInt();
            Arrays.sort(a);
            if ( (a[0] + a[1]) <= a[2] ) {
                System.out.println("Case " + i + ": " + "Invalid");
            } else {
                if (a[0] == a[1] && a[1] == a[2]) { 
                    System.out.println("Case " + i + ": " + "Equilateral");
                }
                else if ( (a[0]==a[1]&& a[1]!=a[2]) || a[0]==a[2]&& a[2]!=a[1] || a[1]==a[2]&& a[2]!=a[0] ) {
                    System.out.println("Case " + i + ": " + "Isosceles");
                }
                else if ( a[0] != a[1] && a[0] != a[2] && a[1] != a[2] ) {
                    System.out.println("Case " + i + ": " + "Scalene");
                }
            }
        }
    }
}