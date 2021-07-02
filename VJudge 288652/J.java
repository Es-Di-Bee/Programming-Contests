import java.util.Scanner;
public class J {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int quantity = sc.nextInt();
        for (int i = 1; i <= quantity; i++) {
            double length = sc.nextDouble();
            double width = length * (6.0 / 10);
            double radius = length * (1.0 / 5);
            double totalArea = length * width;
            double redArea = Math.acos(-1) * (radius * radius); // Math.acos(-1) means cos inverse (-1) which is the value of pi
            double greenArea = totalArea - redArea;
            System.out.printf("%.2f %.2f%n", redArea, greenArea);
        }
    }
}
