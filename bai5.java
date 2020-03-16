import java.util.Scanner;

public class bai5 {
    public static int fibonacci(int n){
        if ( n == 0 || n == 1)
            return n ;
        else return fibonacci(n - 1) + fibonacci( n - 2);
    }

    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        int n = a.nextInt();
        System.out.println(fibonacci(n-1));
    }
}
