import java.util.Scanner;
public class B
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a, b;
        while (sc.hasNext()) { 
            a = sc.nextLong();
            b = sc.nextLong();
            if (a > b) {
                System.out.println(a - b);
            } else { 
                System.out.println(b - a);
            }
        }
    }
}