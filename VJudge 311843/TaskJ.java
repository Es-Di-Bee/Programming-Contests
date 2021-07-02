import java.util.Scanner;
public class TaskJ {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            while (sc.hasNext()) {
                  int n = sc.nextInt();
                  if (n == 0) {
                        break;
                  } 
                  int r = 0;
                  sc.nextLine();
                  String[] a = new String[n];
                  for (int i = 0; i < n; ++i) {
                        a[i] = sc.nextLine();
                  }
                  int m = 0;
                  for (int i = 0; i < n-1; ++i) {
                        int c = 1;
                        boolean flag = false;
                        for (int j = i + 1; j > i && j < n; --j) {
                              if (a[j].equals(a[i])) {
                                   flag = true;
                                   break;
                              }
                        }
                        if (flag) {
                              continue;
                        }
                        for(int temp = i; temp < n; ++temp) {
                              if (a[i].equals(a[temp])) {
                                    ++c;
                              }
                        }
                        if (c > m) {
                              m = c;
                              r = i;
                        }
                  }
                  System.out.println(a[r]);
            }
      }
}
                        
                        
                              
                        
                   