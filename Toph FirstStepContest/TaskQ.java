import java.util.Scanner;
public class TaskQ {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int aLength = Integer.toString(a).length();
        int bLength = Integer.toString(b).length();
        int[] aArray = new int[aLength];
        int[] bArray = new int[bLength];
        for (int i = 0; i < aArray.length; ++i) {
            aArray[i] = a % 10;
            a /= 10;
        }
        for (int i = 0; i < bArray.length; ++i) {
            bArray[i] = b % 10;
            b /= 10;
        }
        for (int i = 0; i < aArray.length && i < bArray.length; ++i) {
            int sum = aArray[i] + bArray[i];
            if (sum >= 10) {
                System.out.println("Yes");
                break;
            } else if (i == aArray.length-1 || i == bArray.length-1) {
                System.out.println("No");
                break;
            }
        }
    }
}
