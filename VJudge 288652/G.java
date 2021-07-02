import java.util.Scanner;
public class G
{
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 1;
        int x = 0;
        String a = "X++";
        String b = "++X";
        String c = "X--";
        String d = "--X";
        sc.nextLine(); // this is used so that the string doesn't consume the empty space after the integer input
        while (i <= n) { 
            String input = sc.nextLine();
            if (input.equals(a) || input.equals(b)) {
                x++;
            }
            else if (input.equals(c)|| input.equals(d)) {
                x--;
            }
            i++;
        }
        System.out.println(x);
    }
}



