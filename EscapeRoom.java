import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class EscapeRoom {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int m = Integer.parseInt(in.readLine());
        int n = Integer.parseInt(in.readLine());
        int[][] grid = new int[m][n];
        System.out.println(m + " " + n);
        grid[1][2] = 1;
    }
}
