import java.util.Scanner;
public class Main {
    static final int INPUT_ACCURACY = 20;
    static final double INACCUARCY = 0.0000001;

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); //ввод
        boolean isWork;
        double x, y;

        x = 0;
        y = 0;

        System.out.println("This program determines, whether a point (x,y) belongs to the closed set D.");

        do {
            isWork = false;
            System.out.println("Please enter the x coordinate within +/-" + INPUT_ACCURACY);
            try {
                x = Double.parseDouble(scan.nextLine());
            } catch (NumberFormatException exception) {
                System.out.println("Please enter ONLY a number again");
                isWork = true;
            }
            if (!isWork)
                if (x < INPUT_ACCURACY && x > -INPUT_ACCURACY) {
                    isWork = false;
                }
                else {
                    System.out.println("Please enter a number again within +/-" + INPUT_ACCURACY);
                    isWork = true;
                }
        } while (isWork);
        do {
            isWork = false;
            System.out.println("Please enter the y coordinate within +/-" + INPUT_ACCURACY);
            try {
                y = Double.parseDouble(scan.nextLine());
            } catch (NumberFormatException exception) {
                System.out.println("Please enter ONLY a number again");
                isWork = true;
            }
            if (!isWork)
                if (y < INPUT_ACCURACY && y > -INPUT_ACCURACY) {
                    isWork = false;
                }
                else {
                    System.out.println("Please enter a number again within +/-" + INPUT_ACCURACY);
                    isWork = true;
                }
        } while (isWork);

        if ((x + y < 1.0 + INACCUARCY) && (2.0 * x - y < 1.0 + INACCUARCY) && (y + INACCUARCY > 0.0))
            System.out.println("This point belongs to the closed set D.");
        else
            System.out.println("This point doesn't belong to the closed set D.");
        scan.close();
    }
}