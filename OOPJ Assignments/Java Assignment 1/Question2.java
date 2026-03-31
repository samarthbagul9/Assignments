/* Q2 Take two numbers (int and double) and perform: 
○ Addition 
○ Division 
○ Type casting result to int  */

class Question2
{
    public static void main(String args[])
    {
        int a = 50;
        double b = 468.0;

        double add = a+b;
        double div = b/a;

        int casting  = (int) div;


        System.out.println("Value of:- "+a);
        System.out.println("Value of b:- "+b);
        System.out.println("Addition of a+b is:- "+add);
        System.out.println("Division of a/b is:- "+div);
        System.out.println("Casting value is:- "+casting);
    }
}