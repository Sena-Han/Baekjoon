import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int sum = 0;

        for (int i = 1; i <= 100; i *= 10) {
            sum += n * (m % 10 * i);
            System.out.println(n * (m % 10));
            m /= 10;
        }

        System.out.println(sum);
    }
}