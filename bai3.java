import java.util.Scanner;

public class bai3 {
    public static float chuvi(int r) {
        float p = (float) 3.14 * 2 * r ;
        return p ;
    }
    public static float dientich(int r) {
        float s = (float) 3.14 * r * r ;
        return s ;
    }

    public static void main(String[] args) {
        Scanner n = new Scanner (System.in);
        int r = n.nextInt();
        System.out.println(chuvi(r));
        System.out.println(dientich(r));
    }
}
