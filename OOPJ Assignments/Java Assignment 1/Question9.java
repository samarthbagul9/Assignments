/* Q9 Create a simple calculator using switch: 
○ Input: two numbers + operator 
○ Perform: +, -, *, /  */

import java.util.Scanner;

class Question9 {
    public static void main(String args[]) {

        double num1, num2;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter First number: ");
        num1 = sc.nextDouble();

        System.out.print("Enter Second number: ");
        num2 = sc.nextDouble();

        System.out.println("\nChoose operation:");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        System.out.println("5. Modulus");

        System.out.print("Enter your choice: ");
        int ch = sc.nextInt();

        switch (ch) {

            case 1:
                System.out.println("Addition: " + (num1 + num2));
                break;

            case 2:
                System.out.println("Subtraction: " + (num1 - num2));
                break;

            case 3:
                System.out.println("Multiplication: " + (num1 * num2));
                break;

            case 4:
                if (num2 != 0)
                    System.out.println("Division: " + (num1 / num2));
                else
                    System.out.println("Cannot divide by zero");
                break;

            case 5:
                System.out.println("Modulus: " + (num1 % num2));
                break;

            default:
                System.out.println("Invalid Choice");
        }

        sc.close(); // good practice
    }
}