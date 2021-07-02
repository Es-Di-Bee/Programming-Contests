import java.util.Scanner;
public class A
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) { // hax next is used to keep  getting input continously
            int a = sc.nextInt();
            int b = sc.nextInt();
            int s = 2 * a * b;
            System.out.println(s);
        }
    }
}