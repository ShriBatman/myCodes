import java.util.Scanner;

public class Add_digit {

    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int i,j=0,k = 0,l,m;
        int x = scan.nextInt();
        int n = x;
        if(x<0){
            k = 1;
            n = n * -1;
        }


        m=0;

        while(n>0){

            m += n%10;
            j = n;
            n = n/10;

        }
        
        if(k == 1){
            System.out.print(m - 2*j);
        }
        else System.out.print(m);
    }

}
