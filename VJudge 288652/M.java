import java.util.Scanner;
public class M { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int quantity = sc.nextInt();
        for (int i = 1; i <= quantity; i++) { 
            int sum = 0;
            int n = sc.nextInt();
            for (int j = 1; j <= n; j++) {
                int num = sc.nextInt();
                if(num > 0) {
                    sum += num;
                }
            }
            System.out.println("Case " + i + ": " + sum);
        }
    }
}