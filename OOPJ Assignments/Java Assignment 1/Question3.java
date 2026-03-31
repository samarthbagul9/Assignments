/* Q3. Write a program to convert: 
○ int → double 
○ double → int  */


class Question3
{
    public static void main(String args[])
    {
        int var1 = 30;
        double var2 = 40.5;

        double CastingInttoDouble = (double) var1; // Widening Cast it is automatic Implicit

        int CastingDoubletoInt = (int) var2;  //Narrowing Cast it is explicitly done


        System.out.println("Int value:-"+var1);
        System.out.println("double value:-"+var2);
        System.out.println("Casting Int -> Double value:-"+ CastingInttoDouble);
        System.out.print("Casting Double -> Int value:-"+ CastingDoubletoInt);
    }
}