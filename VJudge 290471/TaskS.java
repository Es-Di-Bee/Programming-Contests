import java.util.Scanner;
public class TaskS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int count = 1;
        outer:
            for (int j = 1; j < name.length(); j++) {
            for (int i = 0; i < j; i++) {
                if (name.charAt(i) == name.charAt(j)) {
                    continue outer;
                }
            }
            count++;
        }
            if (count %2 == 0) {
                System.out.println("CHAT WITH HER!");
            } else {
                System.out.println("IGNORE HIM!");
            }
    }
}