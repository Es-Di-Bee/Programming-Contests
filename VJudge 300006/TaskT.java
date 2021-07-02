import java.util.Scanner;
public class TaskT {
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int t = sc.nextInt();
            for (int i = 1; i <=t; ++i) {
                  double r1  = sc.nextDouble();
                  double r2 = sc.nextDouble();
                  double r3 = sc.nextDouble();
                  double x = r2 + r3;
                  double y = r1 + r3;
                  double z = r1 + r2;
                  double X = Math.acos((y*y+z*z-x*x)/(2*y*z));
                  double Y = Math.acos((z*z+x*x-y*y)/(2*x*z));
                  double Z = Math.acos((x*x+y*y-z*z)/(2*x*y));
                  double s = (x+y+z)/2;
                  double area = Math.sqrt(s*(s-x)*(s-y)*(s-z));
                  double  area1 = area - (0.5)*(r1*r1*X+r2*r2*Y+r3*r3*Z);
                  System.out.printf("Case %d: %.8f%n", i, area1);
            }
      }
}