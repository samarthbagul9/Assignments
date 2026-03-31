/* Take a character input and print: 
○ Next character 
○ Previous characte */

import java.util.Scanner;
class Question5{
    public static void main(String args[])
    {
        System.out.print("Take input Char input:- ");
        Scanner print = new Scanner(System.in);
        char value = print.next().charAt(0);

        char next= (char)(value+1);  // Type casting to char
        char previous = (char)(value-1);

        System.out.println("Next character "+next);
        System.out.println("previous "+previous);
    }
}
