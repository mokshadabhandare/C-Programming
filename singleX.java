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

class singleX
{
    public static void main(String Arg[])
    {
      Base bobj=new Base();  //Nocasting
      Derived dobj=new Derived();  //Nocasting
      Base bobj2=new Derived();    //Upcasting (A)
      Derived dobj2=new Base();  //Downcasting (NA)
    }
}