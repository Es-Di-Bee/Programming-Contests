import java.util.Scanner;
public class TaskY {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int y = sc.nextInt();
        if ( (y%4==0) && (y%400==0 || y%100!=0)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}

