import java.util.Scanner;

public class bai4a {
    public static int gcd (int a, int b){
        if( b == 0 ) return a ;
        else return gcd( b, a % b);
    }

    public static void main(String[] args) {
        Scanner c = new Scanner(System.in);
        int a = c.nextInt();
        int b = c.nextInt();
        System.out.println(gcd(a,b));
    }
}
