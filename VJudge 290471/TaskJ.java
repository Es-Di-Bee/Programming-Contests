import java.util.Scanner;
public class TaskJ {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()) {
            long bulbs = sc.nextLong();
            if (bulbs == 0) {
                break;
            }
            double rooted = Math.sqrt(bulbs); // a perfect square number always has odd number of multiples
            double rounded = Math.round(rooted);
            if ( (rounded*rounded) == bulbs) {
                System.out.println("yes"); 
            } else { 
                System.out.println("no");
            }
        }
    }
}
            

           