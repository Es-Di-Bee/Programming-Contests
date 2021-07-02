import java.util.Scanner;
public class TaskR {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int num = sc.nextInt();
		int backup = num;
		int oneCount1 = 0;
		while (num > 0) {
			if (num % 2 == 1) {
				oneCount1++;
			}
			num /= 2;
		}
		for (int i = 1; i < backup; ++i) {
			int oneCount2 = 0;
			int backup2 = i;
			while (backup2 > 0) {
				if (backup2 % 2 == 1) {
					oneCount2++;
				}
				backup2 /= 2;
			}
			if (oneCount1 == oneCount2) {
				System.out.println(i);
				break;
			}
		}
	}

}
