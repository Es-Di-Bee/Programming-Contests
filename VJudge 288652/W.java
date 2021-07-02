import java.util.Scanner;
import java.util.Arrays;

public class W {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int chapters = sc.nextInt();
        int hoursLeft = sc.nextInt();
        int[] hoursNeeded = new int[chapters];
        for (int i = 0; i < chapters; i++) {
            hoursNeeded[i] = sc.nextInt();
        }
        Arrays.sort(hoursNeeded);
        int sum = 0;
        int count = 0;
        for( int i = 0; i < chapters; i++) {
            sum += hoursNeeded[i];
            if ( sum > hoursLeft ) { 
                sum -= hoursNeeded[i];
                break;
            } else {
                count++;
            }
        }
        System.out.println(count);
    }
}
            
              