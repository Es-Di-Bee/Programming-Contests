import java.util.Scanner;
public class T { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int upperCase = 0;
        for (int i = 0; i < str.length(); i++) { 
            if (Character.isUpperCase(str.charAt(i))) { // this is to check the number of uppercases letter in the string
                upperCase ++;
            }
        }
        int words = 1 + upperCase;
        System.out.println(words);
    }
}