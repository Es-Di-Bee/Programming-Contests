import java.util.Scanner;
public class TaskO {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String input = sc.nextLine();
        input = input.toLowerCase();
        input = input.replaceAll("[a,e,o,y,u,i]+", "");
        String output = "";
        for (int i = 0; i < input.length(); ++i) {
            output += '.';
            output += input.charAt(i);
        }
        System.out.println(output);
    }
}
        