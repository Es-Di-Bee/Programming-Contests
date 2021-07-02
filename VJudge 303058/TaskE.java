import java.util.Scanner;
public class TaskE {
      public static void main (String[] args) {
            Scanner sc = new Scanner (System.in);
            while (sc.hasNextLine()) {
                  String str = sc.nextLine();
                  str = str.toLowerCase();
                  str = str.replaceAll("[^a-z]", ".");
                  int wordC = 0;
                  for (int i = 0; i < str.length(); ++i) {
                        if (str.charAt(i) == '.') {
                              wordC++;
                              if (i != str.length()-1) {
                                    while (str.charAt(i) == '.') {
                                          ++i;
                                          if (i == str.length()-1) {
                                                break;
                                          }
                                    }
                              }
                        }
                  }
                  if (str.charAt(0) == '.') {
                        --wordC;
                  }
                  System.out.println(wordC);
            }
      }
}
