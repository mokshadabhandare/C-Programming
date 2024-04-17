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
class DerivedX extends Base
{
    public int P,Q;
    public DerivedX()
    {
        System.out.println("DerivedX Constructor");
    }
    public void sun()
    {
        System.out.println("Inside DerivedX sun");
    }
}
class Multilevel
{
    public static void main(String Arg[])
    {
        Derived dobj1=new Derived();
        DerivedX dobj=new DerivedX();
    }
}