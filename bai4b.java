import java.util.Scanner;

public class bai4b {
    public static int gcd (int a, int b){
        if( b == 0 ) return a ;
        else return gcd( b, a % b);
    }
    public static void cd (int arr[]){
        int temp = arr[0];
        for (int i = 1 ; i < 4 ; i++){
            temp = gcd(temp,arr[i]);
        }
        for(int i = 1 ; i <= temp ; i++){
            if ( temp % i == 0)
                System.out.printf( i + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = new int[4];
        Scanner n = new Scanner(System.in);
        for (int i = 0 ; i < 4 ; i++){
            arr[i] = n.nextInt();
        }
        cd(arr);
    }
}
