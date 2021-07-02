import java.util.Scanner;
public class L {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 1; i <= t; i++) {
            double radius = sc.nextDouble();
            double diameter = radius * 2.0;
            double squareArea = diameter * diameter;
            double circleArea = 2 * ( Math.acos (0.0) ) * radius * radius; // this refers the value of pi * r^2
            double shadedArea = squareArea - circleArea;
            System.out.printf("Case %d: %.2f%n", i, shadedArea);
        }
    }
}
            
            
