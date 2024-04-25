class Student
{
    public String Name;
    public int Marks;
    public int Age;

    public Student(String str,int A,int B)
    {
        this.Name=str;
        this.Marks=A;
        this.Age=B;
    }
}

class copydemo
{
    public static void main(String Arg[])
    {
        Student sobj=new Student("Amit",87,25);
        System.out.println("Name of student:"+sobj.Name);
        System.out.println("Marks of student:"+sobj.Marks);
        System.out.println("Age of student:"+sobj.Age);
    }
}