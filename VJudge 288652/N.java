import java.util.Scanner;
public class N { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int quantity = sc.nextInt();
        for (int i = 1; i <= quantity; i++) { 
            int num = sc.nextInt();
            if (num %2 == 0) {
                System.out.println(num + " is " + "even");
            } else {
                System.out.println(num + " is " + "odd");
            }
        }
    }
}