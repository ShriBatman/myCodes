import java.util.Scanner;

public class Character {

    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        char c = scan.next().charAt(0);

        if((c>=65 && c<=90) || (c>=97 && c<=122)){
            System.out.print("Alphabet");
        }
        else if(c>=48 && c<=57){
            System.out.print("Numeric");
        }
        else{
            System.out.print("Special Character");
        }
    }
}
