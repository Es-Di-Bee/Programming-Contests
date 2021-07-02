import java.util.Scanner;
public class V { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();
        String[] design = { "..O..", "O.o.O"};
        for (int rCount = 1; rCount <= r; rCount++) {
            for (int rowCount = 1; rowCount <= 3; rowCount++) {
                if (rowCount %2 != 0) {
                    for (int i = 1; i <= c; i++) {
                        System.out.print(design[0]);
                    }
                } else {
                    for (int i = 1; i <= c; i++) {
                        System.out.print(design[1]);
                    }
                }
                System.out.println();
            }
        }
    }
}
    
    
