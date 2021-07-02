import java.util.Scanner;
public class TaskA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int A = sc.nextInt();
        int B = sc.nextInt();
        int weight = N * A * B * 2;
        System.out.println(weight);
    }
}