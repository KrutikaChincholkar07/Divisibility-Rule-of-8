import java.util.Scanner;

public class DivisibleBy8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int lastThree = num % 1000;

        if (lastThree % 8 == 0)
            System.out.println(num + " is divisible by 8");
        else
            System.out.println(num + " is not divisible by 8");
    }
}
