import java.util.*;
import java.io.*;
public class D
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()) { 
            int quantity = sc.nextInt();
            if (quantity == 0) {
                break;
            }
            int[] a = new int[quantity];
            for (int i = 0; i < quantity; i++) { 
                a[i] = sc.nextInt();
            }
            Arrays.sort(a); // used for direct sorting to save time 
            for (int i = 0; i < quantity; i++) {
                System.out.print(a[i]);
                if (i != (quantity - 1)) { // used so that there is no space after the last integer print
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
