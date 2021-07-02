import java.util.Scanner;
public class TaskT {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        String str = sc.nextLine();
        str = str.substring(0, 1).toUpperCase() + str.substring(1);
        str = str.replace("s", "$");
        str = str.replace("i", "!");
        str = str.replace("o", "()");
        System.out.println(str + ".");
    }
}
            