import java.util.Scanner;
public class Q { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String iStr = sc.nextLine();
        String fStr = iStr.substring(0, 1).toUpperCase() + iStr.substring(1); // capitalizes the first letter
        System.out.println(fStr);
    }
}