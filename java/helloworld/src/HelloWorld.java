class Movie{
    private String name;

    public Movie(String name){
        this.name = name;
    }

    public String plot(){
        return "ppp";
    }

    public String getname(){
        return name;
    }
}

class Don extends Movie{

    public Don(){
        super("DON");
    }

    public String plot() {
        return "srk";
    }
}


public class HelloWorld {
    public static void main(String[] args){
        int x,y;
        Num obj = new Num();
        long to = obj.total(5,4);
        long  p = 1;
        long f = to+p;
        double k = 1.4f;
        //System.out.print(to);

        Movie m = new Don();
        System.out.print(m.getname()+ m.plot());
    }

}
