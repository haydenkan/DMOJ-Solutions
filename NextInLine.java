import java.util.Scanner;

public class NextInLine {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = Integer.parseInt(in.nextLine());
        int b = Integer.parseInt(in.nextLine());
        int c = b - a;
        System.out.println(b + c);
        in.close();
    }

}
