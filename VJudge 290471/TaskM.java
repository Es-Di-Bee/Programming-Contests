import java.util.Scanner;
import java.util.Arrays;
public class TaskM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            double celsius = sc.nextInt();
            double riseFahrenheit = sc.nextInt();
            double fahrenheit = ( (celsius * 9) / 5 ) + 32 + riseFahrenheit;
            celsius = ( (fahrenheit - 32) * 5 ) / 9;
            System.out.printf("Case %d: %.2f%n", i, celsius);
        }
    }
}