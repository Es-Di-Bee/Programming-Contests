import java.util.Scanner;
public class TaskU { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; ++i) {
            int n = sc.nextInt();
            int count = 0;
            for (int j = 1; j <= Math.sqrt(n); j++) {
                if (n % j == 0) {
                    if (j % 2 == 0) {
                        count++;
                    }
                    if ( ((n/j) % 2 == 0) && ( n/j != j) ) {
                        count++;
                    }
                }
            }
            System.out.println(count);
        }
    }
}
