class OOP
{
    public static void main (String Arg[])
    {
        Arithematic obj1=new Arithematic();
        Arithematic obj2=new Arithematic(21,11);

        int ret=0;

        ret=obj2.Addition();
        System.out.println(ret);

        ret=obj2.Substraction();
        System.out.println(ret);
    }
}

class Arithematic
{
    public int No1;
    public int No2;

    public Arithematic()
    {
        System.out.println("Inside Default Constructor");
        this.No1=0;
        this.No2=0;
    }
    public Arithematic(int A,int B)
    {
        System.out.println("Inside Parameterized Constructor");
        this.No1=A;
        this.No2=B;
    }
    public Addition()
    {
        int Ans=0;
        Ans=No1+No2;
        return Ans;
    }
    public Substraction()
    {
        int Ans=0;
        Ans=No1-No2;
        return Ans;
    }
}