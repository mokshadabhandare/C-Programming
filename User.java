import java.io.*;
import java.util.*;

class AgeInvalid extends Exception
{

}

class User
{
    public static void main(String Arg[])
    {
        try{
        Scanner sobj=new Scanner(System.in);
    
        System.out.println("Please enter your age:");
        int Age=sobj.nextInt();

        if(Age<18)
        {
            throw new AgeInvalid();
        }
        }
        catch(AgeInvalid obj)
        {
            System.out.println("Age is inavlid to register for this site");
        }
    }
}
