import java.util.Scanner;
public class S { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()) {
            int quantity = sc.nextInt();
            if (quantity == (-1) ) { 
                break;
            }
            int sum = 0; 
            int previousTime = 0;
            for (int i = 1; i <= quantity; i++) {
                int s = sc.nextInt();
                int t = sc.nextInt();
                int distance = s * (t - previousTime);
                sum += distance;
                previousTime = t;
            }
            System.out.println(sum + " miles");
        }
    }
}