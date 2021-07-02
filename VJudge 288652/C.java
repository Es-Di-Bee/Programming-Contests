import java.util.Scanner;
public class C
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        int quantity = sc.nextInt();
        int midNum = 0;
        for (int i = 1; i <= quantity; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            if (a > b) { 
                if (a < c) {
                    midNum = a;
                } else {
                    if (b > c) {
                        midNum = b;
                    } else {
                        midNum = c;
                    }
                }
            } else {
                if (a > c) {
                    midNum = a;
                } else {
                    if (b > c) {
                        midNum = c;
                    } else {
                        midNum = b;
                    }
                }
            }
            System.out.println("Case " + i + ": " + midNum);
        }
    }
}
                
    
