import java.util.Scanner;

public class bai9 {
    public static int max() {
        Scanner n = new Scanner(System.in);
        int a = n.nextInt();
        int b = n.nextInt();
        int c = n.nextInt();
        int d = a;
        if (a < b)
            d = (b > c) ? b : c;
        return d;
    }
    public static void main(String[] args) {
        System.out.println(max());
    }
}