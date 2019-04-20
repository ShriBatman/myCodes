import java.util.Scanner;

public class Reverse_Num {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int i,j,k,l,m,n;
        int p = scan.nextInt();
        n = p;
        k=0;
        if(n<0){
            k=1;
            n=n * -1;
        }
        m=0;
        while(n>0){
            m = m*10 + n%10;
            n = n/10;
        }
        if(k==1) System.out.print(m*-1);
        else System.out.print(m);
    }

}
