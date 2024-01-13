import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int min = 1000000, max = -1000000;

        for (int i = 0; i < N; i++) {
            int tmp = in.nextInt();

            if (tmp < min)
                min = tmp;

            if (tmp > max)
                max = tmp;
        }

        System.out.printf("%d %d\n", min, max);
    }
}