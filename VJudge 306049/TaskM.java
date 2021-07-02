import java.util.Scanner;
public class TaskM {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int p = sc.nextInt();
        int d = sc.nextInt();
        int m = sc.nextInt();
        int s = sc.nextInt();
        int count = 0;
        if (s >= p) {
            count++;
            s -= p;
            p -= d;
            if (s >= p) {
                p += d;
                while ( s >= 0) {
                    while (p > m) {
                        p -= d;
                        if (p > m) {
                            ++count;
                            s -= p;
                        }
                    }
                    s -= m;
                    if (s >= 0) {
                        ++count;
                    }
                }
            }
        }
        System.out.println(count);
    }
}