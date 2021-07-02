import java.util.Scanner;
public class K {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int midNum = 0;
        int store = 0;
        for (int i = 1; i <= t; i++) {
            int n = sc.nextInt();
            midNum = (n + 1) / 2;
            for (int j = 1; j <= n; j++) {
                int age = sc.nextInt();
                if(j == midNum) {
                    store = age;
                }
            }
            System.out.println("Case " + i + ": " + store);
        }
    }
}
