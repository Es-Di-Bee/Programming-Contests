import java.util.Scanner;
public class TaskM{
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int factors = 0;
        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                factors++;
            }
        }
        System.out.println(factors==2? "Yes" : "No");
    }
}
            
                
            
    

