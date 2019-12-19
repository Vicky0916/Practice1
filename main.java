package pakage1;

public class main 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		EmployeeArray ea=new EmployeeArray(5);
		employee e1=new employee("程蕊","女",21,"123","一号");
		employee e2=new employee("李学权","男",21,"124","二号");
		ea.Insert(0, e1);
		ea.Insert(1, e2);
		employee e3=ea.get(0);
		System.out.println(e3.getname());
		employee e4=ea.get(1);
		System.out.println(e4.getname());	
	}

}
