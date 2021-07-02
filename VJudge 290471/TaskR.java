import java.util.Scanner;
public class TaskR {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int backup = 0;
        outer:
            while (num != 0) {
            int digit = num % 10;
            if (digit == 1 || digit == 4) {
                if (digit == 4) {
                    num /= 10;
                    digit = num % 10;
                    if (digit == 4) {
                        num /= 10;
                        digit = num % 10;
                        if (digit != 1) {
                            System.out.println("NO");
                            break outer;
                        } 
                    }  
                }
            } else {
                System.out.println("NO");
                break outer;
            }
            backup = num;
            num /= 10;
            if (num == 0) {
                if (backup == 1) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
    }    
}

    