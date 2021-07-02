import java.util.Scanner;
public class TaskK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            int max = Math.max( x, Math.max(y,z) );
            if (max == x) {
                if ( (y + z) > max ) {
                    System.out.println("OK");
                } else {
                    System.out.println("Wrong!!");
                }
            }
            else if (max == y) {
                if ( (x + z) > max ) {
                    System.out.println("OK");
                } else {
                    System.out.println("Wrong!!");
                }
            }
            else if (max == z) {
                if ( (x + y) > max ) {
                    System.out.println("OK");
                } else {
                    System.out.println("Wrong!!");
                }
            }
        }
    }
}
