import java.util.Scanner;
public class TaskB {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int[] a = new int[26];
        for (int i = 1; i <= n; ++i) {
            String str = sc.nextLine();
            a[str.charAt(0) - 'a']++;
        }
        int pairs = 0;
        for (int i = 0; i < a.length; ++i) {
            if (a[i] != 0) {
                int sum = 0;
                if (a[i] % 2 == 0) {
                    int n1 = a[i] / 2;
                    for (int j = 1; j < n1; ++j) {
                        sum += j;
                    }
                    sum *= 2;
                } else {
                    int n1 = a[i] / 2;
                    int n2 = n1 + 1;
                    int sum1 = 0;
                    int sum2 = 0;
                    for (int j = 1; j < n1; ++j) {
                        sum1 += j;
                    } 
                    for (int j = 1; j < n2; ++j) {
                        sum2 += j;
                    }
                    sum = sum1 + sum2;
                }
                pairs += sum;
            }
        }
        System.out.println(pairs);
    }
} 
    
    