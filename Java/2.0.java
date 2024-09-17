import java.util.Scanner;

public class Main {
    static final int INPUT_ACCURACY = 12;

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); // Ввод
        boolean isWork;
        int n = 0, m = 0;
        long answer = 1; // Используем long для перестановок, чтобы избежать переполнения

        System.out.println("This program calculates permutation from n to m");

        // Ввод значения n
        do {
            isWork = true;
            System.out.println("Please enter n from 1 to " + INPUT_ACCURACY);
            try {
                n = Integer.parseInt(scan.nextLine());
            } catch (NumberFormatException exception) {
                System.out.println("Please enter ONLY a number again");
                isWork = false;
            }
            if (isWork) {
                if (n < 1 || n > INPUT_ACCURACY) {
                    System.out.println("Please enter a number again from 1 to " + INPUT_ACCURACY);
                    isWork = false;
                }
            }
        } while (!isWork);

        // Ввод значения m
        do {
            isWork = true;
            System.out.println("Please enter m from 1 to " + INPUT_ACCURACY);
            try {
                m = Integer.parseInt(scan.nextLine());
            } catch (NumberFormatException exception) {
                System.out.println("Please enter ONLY a number again");
                isWork = false;
            }
            if (isWork) {
                if (m < 1 || m > INPUT_ACCURACY) {
                    System.out.println("Please enter a number again from 1 to " + INPUT_ACCURACY);
                    isWork = false;
                } else if (m > n) {
                    System.out.println("m can't be greater than n. Please try again");
                    isWork = false;
                }
            }
        } while (!isWork);

        // Вычисление перестановки
        for (int i = n; i > n - m; i--) {
            answer *= i;
        }

        System.out.println("The permutation = " + answer);
        scan.close();
    }
}
