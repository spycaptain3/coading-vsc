import java.util.Scanner;
public class arraydg {
   public static void main(String[] args){
       System.out.println("Enter your full name");
       
     
       Scanner scan=new Scanner(System.in);
       String name= scan.nextLine();
       scan.close();
       System.out.println("you entered name is "+name);

   }
}
