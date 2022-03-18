import java.util.Scanner;

public class SnakesAndLadders {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int location = 1;
        while(location < 100){
            int dice = Integer.parseInt(in.nextLine());
            if(dice == 0){
                System.out.println("You Quit!");
                break;
            }
            if(location + dice <= 100){
                location += dice;
            }
            if(location == 99){
                location = 77;
            }else if(location == 90){
                location = 48;
            }else if(location == 54){
                location = 19;
            }else if(location == 9){
                location = 34;
            }else if(location == 40){
                location = 64;
            }else if(location == 67){
                location = 86;
            }
            System.out.println("You are now on square " + location);
            if(location == 100){
                System.out.println("You Win!");
            }
            
        }
        in.close();
    }
}
