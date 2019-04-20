import java.util.Scanner;

public class WiproTest {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        int x = scan.nextInt();
        String p = check(s,x);
        System.out.println(p);
    }

    public static String check(String a, int b){

        //System.out.println(a);

        int x = b/10;
        int y = b%10;

        int z = a.length();
        String p = "";
        String q = "";
        String s = "";

        int k=0;
        int n=1;

        while(k<z){
            while(k<z && a.charAt(k)!= (char)32){
                if(n==x) p = p + a.charAt(k);
                else if(n==y) q = q + a.charAt(k);

                k++;
            }
            k++;
            n++;
        }

        //System.out.println(p+""+q);

        int u = p.length();
        int v = q.length();

        //if(u%2!=0) u--;
        //if(v%2!=0) v--;

        for(int i=u/2;i<u;i++){
            s = s + p.charAt(i);
        }
        if(u%2==0){
            for(int i=u/2 -1;i>=0;i--){
                s = s + p.charAt(i);
            }
        }
        else{
            for(int i=u/2;i>=0;i--){
                s = s + p.charAt(i);
            }
        }

        s=s+(char)32;

        for(int i=v/2;i<v;i++){
            s = s + q.charAt(i);
        }
        if(v%2==0){
            for(int i=v/2 -1;i>=0;i--){
                s = s + q.charAt(i);
            }
        }
        else{
            for(int i=v/2;i>=0;i--){
                s = s + q.charAt(i);
            }
        }

        return s;
    }
}
