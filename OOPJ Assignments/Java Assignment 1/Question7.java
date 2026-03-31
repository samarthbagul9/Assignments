/* Q7 Write a program to find the largest of three numbers.  */

import java.util.Scanner;
class Question7
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int num1, num2, num3;

        System.out.print("Enter first number  ");
        num1 = sc.nextInt();

        System.out.print("Enter Second number ");
        num2 = sc.nextInt();

        System.out.print("Enter Third number ");
        num3 = sc.nextInt();

        if(num1>num2 && num1>num3)
        {
            System.out.print("Number 1 is greater "+ num1);
        }
        else if(num2>num1 && num2>num3)
        {
            System.out.print("Number 2 is greater "+ num2);
        }

        else
        {
            System.out.print("Number 3 is greater "+ num3);
        }
    }
}