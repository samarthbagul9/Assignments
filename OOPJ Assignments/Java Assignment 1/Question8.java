/* Q8 Write a program to check whether a year is a leap year.  */

/* Logic 
1. If divisible by 400 → Leap Year
2. Else if divisible by 100 → Not Leap Year
3. Else if divisible by 4 → Leap Year
4. Else → Not Leap Year
 */

import java.util.Scanner;

class Question8 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int year;

        System.out.print("Enter the Year: ");
        year = sc.nextInt();

        if (year % 400 == 0) {
            System.out.println("Year is a Leap Year: " + year);
        }
        else if (year % 100 == 0) {
            System.out.println("Year is NOT a Leap Year: " + year);
        }
        else if (year % 4 == 0) {
            System.out.println("Year is a Leap Year: " + year);
        }
        else {
            System.out.println("Year is NOT a Leap Year: " + year);
        }

        sc.close(); 
    }
}