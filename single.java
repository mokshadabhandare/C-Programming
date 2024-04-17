class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
   public void fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived constructor");
    }
    void Gun()
    {
        System.out.println("Inside derived gun");
    }
}

class single
{
    public static void main(String Arg[])
    {
       Derived dobj=new Derived();
       dobj.fun();
       dobj.Gun();
    }
}