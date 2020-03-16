import java.util.Scanner;

public class bai2 {
    public static int chuvi(int a, int b, int c) {
        int p = a + b + c;
        return p;
    }

    public static float dientich(int a, int b, int c) {
        float p = (float) (a + b + c) / 2;
        float s = (float) Math.sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }

    public static void main(String[] args) {
        int a, b, c;
        Scanner n = new Scanner(System.in);
        a = n.nextInt();
        b = n.nextInt();
        c = n.nextInt();
        if (a + b > c && a + c > b && b + c > a) {
            System.out.println(chuvi(a, b, c));
            System.out.println(dientich(a, b, c));
        } else System.out.println("Khong ton tai tam giac");
    }
}