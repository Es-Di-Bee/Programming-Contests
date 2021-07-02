import java.util.Scanner;
public class TaskB {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		System.out.println("Lumberjacks:");
		for (int i = 1; i <= t; ++i) {
			int[] a = new int[10];
			for (int j = 0; j < 10; ++j) {
				a[j] = sc.nextInt();
			}
			int aCount = 0;
			int dCount = 0;
			for (int j = 0; j < 9; ++j) {
				if (a[j] > a[j+1]) {
					dCount++;
				} else {
					aCount++;
				}
			}
			if (dCount == 9 || aCount == 9) {
				System.out.println("Ordered");
			} else {
				System.out.println("Unordered");
			}
		}
	}
}