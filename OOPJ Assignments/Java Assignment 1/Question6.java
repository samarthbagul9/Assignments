/* Q6 Write a program to check whether a number is: 
○ Positive 
○ Negative 
○ Zero  */

import java.util.Scanner;
class Question6
{
    public static void main(String args[])
    {
        System.out.print("Enter the number:- ");
        Scanner num = new Scanner(System.in);
        int num1 = num.nextInt();

        if(num1>0)
        {
            System.out.print("Number is Positive");
        }
        else if(num1<0)
        {
            System.out.print("Number is negative");
        }
        else
        {
            System.out.print("Number is zero");
        }
    }
}