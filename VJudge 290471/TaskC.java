import java.util.Scanner;
public class TaskC {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int sum = 0;
        if(N > 0) {
            for (int i = 1; i <= N; i++) {
                sum += i;
            }
        } else {
            for (int i = 1; i>= N; i--) {
                sum += i;
            }
        }
        System.out.println(sum);
        
    }
}