import java.util.Scanner;
public class TaskC {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        while (sc.hasNextLine()) {
            String str = sc.nextLine();
            String str1 = sc.nextLine();
            str = str.replaceAll("[^A-Za-z]", "");
            str1 = str1.replaceAll("[^A-Za-z]", "");
            str = str.toUpperCase();
            str1 = str1.toUpperCase();
            byte[] a = str.getBytes();
            int sum = 0;
            for (int i : a) {
                sum += i;
            }
            int digit = Integer.toString(sum).length();
            while (digit != 1) {
                
        
    }
    
}
