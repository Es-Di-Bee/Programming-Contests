import java.util.Scanner;
public class TaskT { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; ++i) {
            int persons  = sc.nextInt();
            int handshakes = ( persons * (persons - 1) ) / 2;
            System.out.println(handshakes);
        }
    }
}