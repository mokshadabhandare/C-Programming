import java.io.*;

class BinputX
{
    public static void main (String Arg[])
    {
        try
        {
       BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
       
       System.out.println("Enter yout name:");
       String name=bobj.readLine();
       
       System.out.println("Welcome:"+name);
        }
        catch(IOException obj)
        {

        }
    } 
}