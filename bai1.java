import java.util.Scanner;

public class bai1 {
    public static float dientich(int a, int b, int h){
        float s = (float) ( a + b ) * h / 2 ;
        return s ;
    }

    public static void main(String[] args) {
        int a , b , h ;
        Scanner x = new Scanner(System.in);
        a = x.nextInt();
        b = x.nextInt();
        h = x.nextInt();
        System.out.println(dientich(a,b,h));
    }
}
