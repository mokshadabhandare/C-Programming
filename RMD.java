class Base
{
    public int A,B;
   public void fun()
    {
        System.out.println("Inside Base Fun");
    }
    public void gun()
    {
        System.out.println("Inside Base gun");
    }
    public void sun()
    {
        System.out.println("Inside Base sun");
    }
    public void run()
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
}
class RMD
{
    public static void main(String Arg[])
    {
       Derived dobj=new Derived();
       dobj.fun();
       dobj.Gun();
    }
}