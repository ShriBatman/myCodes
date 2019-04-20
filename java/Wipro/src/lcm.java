import java.util.Scanner;

public class lcm {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int y = scan.nextInt();
        int z = scan.nextInt();

        int k = _lcm(x,y);
        k = _lcm(k,z);

        for(int i=1;i<=5;i++){
            System.out.println(k*i);
        }


    }

    private static int gcd(int a, int b){
        if(a==b)
            return a;

        if(a>b)
            return gcd(a-b,b);
        return gcd(b-a,a);
    }

    private static int _lcm(int a,int b){
        return (a*b)/gcd(a,b);
    }

}
