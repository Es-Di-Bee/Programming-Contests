import java.util.Scanner;
public class TaskN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 1; i <= T; i++) {
            int K = sc.nextInt();
            int factor1 = 0, factor2 = 0, factor3 = 0, factor4 = 0;
            for (int j = 2; j < K; j++) {
                if (K % j == 0) {
                    factor1 = j;
                    break;
                }
            }
             for (int j = factor1+1; j < K; j++) {
                 if (K % j == 0) {
                    factor2 = j;
                    break;
                }
            }
             factor4 = K / factor1;
             factor3 = K/ factor2;
             System.out.println("Case " + "#" + i + ": " + K + " = " + factor1 + " * " + factor4 + " = " + factor2 + " * " + factor3);  
        }
    }
}