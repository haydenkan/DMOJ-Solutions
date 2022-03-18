import java.util.Scanner;

public class MultipleChoice {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i = Integer.parseInt(in.nextLine());
        String[] submission = new String[i];
        String[] answers = new String[i];
        int score = 0;
        for(int j = 0; j < i; j++){
            submission[j] = in.nextLine();
        }
        for(int j = 0; j < i; j++){
            answers[j] = in.nextLine();
        }
        for(int j = 0; j < i; j++){
            if(submission[j].equals(answers[j])){
                score++;
            }
        }
        System.out.println(score);
        in.close();

    }
}
