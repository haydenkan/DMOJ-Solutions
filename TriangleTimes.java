import java.util.Scanner;

public class TriangleTimes{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] in = new int[3];
        for(int i = 0; i<3; i++){
            in[i]  = Integer.parseInt(scanner.nextLine());
        }

            if(in[0] + in[1] + in[2] != 180){
                System.out.println("Error");
            }else if(in[0] == in[1] && in[1] == in[2]){
                System.out.println("Equilateral");
            }else if(in[0] == in[1] || in[1] == in[2] || in[2] == in[0]){
                System.out.println("Isosceles");
            }else{
                System.out.println("Scalene");
            }

        scanner.close();
    }
}