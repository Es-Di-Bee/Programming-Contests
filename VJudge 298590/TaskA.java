import java.util.Scanner;
public class TaskA {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		for (int i = 1; i <= t; ++i) {
			int n = sc.nextInt();
			int hCount = 0;
			int lCount = 0;
			int previous = sc.nextInt();
			for (int j = 1; j < n; ++j) {
				int next = sc.nextInt();
				if (next > previous) {
					hCount++;
				} else if (next < previous) {
					lCount++;
				}
				previous = next;
			}
			System.out.println("Case " + i + ": " + hCount + " " + lCount);
		}

	}

}
