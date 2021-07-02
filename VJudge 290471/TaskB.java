import java.util.Scanner;
public class TaskB {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int cans = A + B - 1;
        int harry = cans - A;
        int larry = cans - B;
        System.out.print(harry + " ");
        System.out.println(larry);
    }
}