package saheed.samplejavacpp;


public class App
{
	
    public static void main( String[] args )
    {
        int add = new MathApp().add(100, 333);
        int sub = new MathApp().subtract(100, 333);
        int mult = new MathApp().multiply(100, 333);
        
        System.out.println("adding is " + add);
        System.out.println("subtracting is " + sub);
        System.out.println("multiplying is " + mult);
        
        /*
        int add1 = new Math().add(100, 333);
        int sub1 = new Math().subtract(100, 333);
        int mult1 = new Math().multiply(100, 333);
        
        System.out.println("\nNow using Math.h : \n");
        System.out.println("adding is " + add1);
        System.out.println("subtracting is " + sub1);
        System.out.println("multiplying is " + mult1);
        */
        
    }
}
