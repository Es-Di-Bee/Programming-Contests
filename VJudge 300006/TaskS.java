import java.util.Scanner;
public class TaskS {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; ++i) {
            int r1 = sc.nextInt();
            int r2 = sc.nextInt();
            int h = sc.nextInt();
            int p = sc.nextInt();
            Double r = r2 + (r1-r2) * ( (double) p / h );
            Double v = ((Math.acos(-1)*p) * ( (r*r) +(r*r2) + (r2*r2) ) ) /3.0;
            System.out.printf("Case %d: %.9f%n", i, v);
        }
    }
}
                        