import java.util.Scanner;

public class bai8 {
    public static void main(String[] args) {
        Scanner n = new Scanner(System.in);
        System.out.printf("Nhập tên học sinh : ");
        String a = n.nextLine();
        System.out.printf("Nhập địa chỉ : ");
        String b = n.nextLine();
        System.out.printf("Nhập tuổi : ");
        int c = Integer.parseInt(n.nextLine());
        System.out.printf("Nhập SĐT : ");
        String d = n.nextLine();
        System.out.printf("Nhập điểm Toán Lý Hóa : ");
        int g = n.nextInt();
        int e = n.nextInt();
        int f = n.nextInt();
        System.out.println("Tên học sinh : "+ a);
        System.out.println("Nhà ở : "+b);
        System.out.println("Sinh năm : "+(2020-c));
        System.out.println("SĐT : "+d);
        System.out.println("Điểm 3 môn Toán Lý Hóa là : "+g+ " "+e+" "+f);
        System.out.println("Trung bình 3 môn : "+(float)(g+e+f)/3);
    }
}
