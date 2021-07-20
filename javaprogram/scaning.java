import java.util.Scanner;

public class scaning {
    public static void main(String[] args){
        
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter the number: ");

        int num= scan.nextInt();
        scan.close();
        for(int i=1; i<num; i++)
        {
            System.out.println(i);
        }
        System.out.println("Now check for it is 12 or not: ");
        if(num==12)
        {
            System.out.println("It is 12 correct");
        }
            else if (num ==23)
            {
                System.out.println("it is 23");
            }
            else
            {
                System.out.println("it is not 23 not 12");
            }
    }
    
}
