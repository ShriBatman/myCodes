import java.util.Scanner;

public class Pattern {

    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);

        int i = scan.nextInt();

        for(int j=0;j<i;j++){
            for(int m=0;m<=j;m++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }

}
