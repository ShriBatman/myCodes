import java.util.Scanner;

public class ifElse {
    private static Scanner scan;
    public static void main(String args[]){
            //Scanner scan;
                scan = new Scanner(System.in);
                char c = scan.next().charAt(0);
                char d = scan.next().charAt(0);

                if(c>d){
                    System.out.print(d+","+c);
                }
                else{
                    System.out.print(c+","+d);
                }

            }
        }