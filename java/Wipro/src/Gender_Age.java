import java.util.Scanner;

public class Gender_Age {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int age = scan.nextInt();
        String gender = scan.next();
        //System.out.print(gender + " " + age);

        if(gender.equals("Female")){
            //System.out.print("Interest = 8.2%" );

            if(age>=1 && age<=58){
                System.out.print("Interest = 8.2%" );
            }
            else if(age>=59 && age<=120){
                System.out.print("Interest = 7.6%");
            }

            //System.out.print(gender.to)
        }
        else if(gender.equals("Male")){
           // System.out.print("Interest = 8.2%" );

            if(age >= 1 && age<=60){
                System.out.print("Interest = 9.2%");
            }
            else if(age>=61 && age<=120){
                System.out.print("Interest = 8.3%");
            }
        }
    }

}
