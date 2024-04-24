class Marvellous1
{
   public int i,j;

   public Marvellous1()
   {
    System.out.println("Marvellous constructor");
   }
   protected void finalize()
   {
    System.out.println("Inside finalize method");
   }
}
class ObjectDemo1
{
    public static void main(String Arg[] )
    {
       Marvellous1 obj=new Marvellous1();
       System.out.println(obj.hashCode());

       obj=null; 
       System.gc();
    }
}