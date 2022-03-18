import java.util.Scanner;
public class SmileWithSimiles{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int adjCount = Integer.parseInt(in.nextLine());
        int nounCount = Integer.parseInt(in.nextLine());
        String[] adjectives = new String[adjCount];
        String [] nouns = new String[nounCount];

        for(int i = 0; i < adjCount; i++){
            adjectives[i] = in.nextLine();
        }
        for(int i = 0; i < nounCount; i++){
            nouns[i] = in.nextLine();
        }

        for(int i = 0; i < adjCount; i++){
            for(int j = 0; j < nounCount; j++){
                System.out.println(adjectives[i] + " as " + nouns[j]);
            }
        }
        in.close();
    }
}