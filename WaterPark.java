import java.util.Scanner;


public class WaterPark {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        boolean receivingIn = true;
        int n = Integer.parseInt(in.nextLine());
        int[][] points = new int[n+1][n+1];
        System.out.println(receivingIn);
        while(receivingIn){
            String m = in.nextLine();
            String[] splitIn = m.split(" ");
            if(splitIn[1].equals("0") && splitIn[0].equals("0")){
                break;
            }
            points[Integer.parseInt(splitIn[1])][Integer.parseInt(splitIn[0])] = Integer.parseInt(splitIn[0]);
            System.out.println(points[Integer.parseInt(splitIn[1])][Integer.parseInt(splitIn[0])]);
        
        }
        boolean p = true;
        while(p){
            for(int i = 0; i < n; i++){
                //if(points[n][i])
            }
        }

        in.close();
    }

    public static void check() {
        
    }
}
