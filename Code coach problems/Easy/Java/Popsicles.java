import java.util.Scanner;

public class Program
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();

        if(b>=a && b%a == 0)
        {
            System.out.println("give away");
        }
        else
        {
            System.out.println("eat them yourself");
        }

       
    }
}
