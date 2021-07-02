import java.util.Scanner;
public class TaskA {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int segments = 0;
        int digit = 0;
        while (a <= b) {
            int backup = a;
            while (backup > 0) {
                digit = backup % 10;
                backup /= 10;
                if (digit == 0) {
                    segments += 6;
                } else if (digit == 1) {
                    segments += 2;
                } else if (digit == 2) {
                    segments += 5;
                } else if (digit == 3) {
                    segments += 5;
                } else if (digit == 4) {
                    segments += 4;
                } else if (digit == 5) {
                    segments += 5;
                } else if (digit == 6) {
                    segments += 6;
                } else if (digit == 7) {
                    segments += 3;
                } else if (digit == 8) {
                    segments += 7;
                } else if (digit == 9) {
                    segments += 6;
                }
            }
            ++a;  
        }
        System.out.println(segments);
    }
}
        