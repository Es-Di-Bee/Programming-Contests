import java.util.Scanner;
public class TaskD {
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int t = sc.nextInt();
            sc.nextLine();
            for (int i = 1; i <= t; ++i) {
                  String str = sc.nextLine();
                  String[] parts = str.split(":");
                  int hours = Integer.parseInt(parts[0]);
                  int minutes = Integer.parseInt(parts[1]);
                  if (minutes == 0) {
                        if (hours == 12) {
                              hours = 12;
                        } else {
                              hours = 12 - hours;
                        }
                  } else {
                        if (hours == 12) {
                              hours = 11;
                        } else {
                              if (hours == 11) {
                                    hours = 12;
                              } else {
                                    hours = 11 - hours;
                              }
                        }
                  }
                  if (minutes == 0) {
                        minutes = 0;
                  } else {
                        minutes = 60 - minutes;
                  }
                  
                  System.out.printf("%02d:%02d%n", hours, minutes);
            }
            
      }
}