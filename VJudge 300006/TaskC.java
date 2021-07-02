import java.util.Scanner;
public class TaskC {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int[] a = new int[n+1];
        a[0] = 0;
        for (int i = 1; i < a.length; ++i) {
            a[i] = sc.nextInt();
        }
        if (n == 1) {
            if (a[1] < 15) {
                System.out.println(a[1] + 15);
            } else if (a[1] == 15) {
                System.out.println(30);
            } else {
                System.out.println(15);
            }
        } else { 
            for (int i = 0; i < a.length-1; ++i) {
                int dif = a[i+1] - a[i];
                if(dif > 15) {
                    System.out.println(a[i]+15);
                    break;
                } 
                if (i == a.length - 2) {
                    if (90 - a[i+1] <= 15) {
                        System.out.println(90);
                        break;
                    }
                    else {
                        System.out.println(a[i+1] + 15);
                        break;
                    }
                }
            }
        }
    }
}