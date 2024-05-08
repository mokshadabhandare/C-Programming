import java.net.*;
import java.io.*;

class Server
{
    public static void main(String Arg[]) 
    {
       System.out.println("Server application is running..");

       ServerSocket ssobj=new ServerSocket(2100);
       System.out.println("Server is waiting for client...");

       Socket sobj=ssobj.accept();
       System.out.println("client get sucessfully connected...");

       PrintStream ps=new PrintStream(sobj.getOutputStream());
       BufferedReader br1=new BufferedReader(new InputStream(sobj.getInputStream()));
       BufferedReader br2=new BufferedReader(new InputStream(System.in));
       String str1,str2;

       System.out.println("Marvellous messenger started...");

       while((str1=br1.readLine())!=null)
       {
        System.out.println("client says:"+str1);
        System.out.println("Enter message for client:");
        str2=br2.readLine();
        ps.println(str2);
       }
       System.out.println("Thank you for using Marvellous Messenger..");
    }
}