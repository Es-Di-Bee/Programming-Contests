import java.util.Scanner;
public class E
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int quantity = sc.nextInt();
        for (int i = 1; i <= quantity; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if (a <= 20 && b <= 20) {
                if (c <= 20) {
                    System.out.println("Case " + i + ": " + "good");
                } else { 
                    System.out.println("Case " + i + ": " + "bad");
                }
            } else {
                System.out.println("Case " + i + ": " + "bad");
            }
        }
    }
}
                