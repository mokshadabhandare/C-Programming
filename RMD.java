class Base
{
    public int A,B;
   public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Base gun");
    }
    public void Sun()
    {
        System.out.println("Inside Base sun");
    }
    public void Run()
    {
        System.out.println("Inside Base run");
    }
}
class Derived extends Base
{
    public int X,Y;
    public void Gun()
    {
        System.out.println("Inside derived gun");
    }
    public void Run()
    {
        System.out.println("Inside Base Fun");
    }
    public void Mun()
    {
        System.out.println("Inside Base Fun");
    }
}
class RMD
{
    public static void main(String Arg[])
    {
       Base bobj=new Derived();
       bobj.Fun();
       bobj.Gun();
       bobj.Sun();
       bobj.Run();
       
       bobj.Mun();

    }
}