import java.util.Scanner;
public class I
{
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int c1 = sc.nextInt();
            int c2 = sc.nextInt(); /* side by side input of integers can be taken without using " String str = sc.next(); "
             if there are no strings between them */
            
            if ( c1 == (-1) && c2 == (-1) ) {
                break;
            }
            if (c1 < c2) {
                int dif = c2 - c1;
                if (dif < 50) {
                    int press = dif;
                    System.out.println(press);
                } else {
                    int press = c1 + (100 - c2);
                    System.out.println((press));
                }
            } else if (c1 == c2) {
                System.out.println(0);
            } else if (c1 > c2) {
                int dif = c1 - c2;
                if (dif < 50) {
                    int press = dif;
                    System.out.println(press);
                } else { 
                    int press = (100 - c1) + c2;
                    System.out.println(press);
                }
            }
        }
    }
}