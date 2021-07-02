import java.util.Arrays;
import java.util.Scanner;
public class TaskE {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            while (sc.hasNext()) {
                  String str = sc.nextLine();
                  String str1 = sc.nextLine();
                  String output = "";
                  boolean[] a = new boolean[str1.length()];
                  for (int i = 0; i < str.length(); ++i) {
                        for (int j = 0; j < str1.length(); ++j) {
                              if ((str.charAt(i) == str1.charAt(j)) && (a[j] == false)) {
                                    output += str1.charAt(j);
                                    a[j] = true;
                                    break;
                              }
                        }
                  }
                  char[] b = output.toCharArray();
                  Arrays.sort(b);
                  System.out.println(String.valueOf(b));
            }
      }
}
                  