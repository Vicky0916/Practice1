package pakage1;
class person
{
	String name;
	String sex;
	int age;
	public person(String name,String sex,int age)
	{
		this.name=name;
		this.sex=sex;
		this.age=age;
	}
	public String getname()
	{
		return name;
	}
	public String getSex()
	{
		return sex;
	}
	public int getAge()
	{
		return age;
	}
}

class employee extends person
{
	private String id;
	private String department;
	public employee(String name,String sex,int age,String id,String department)
	{
		super(name,sex,age);
		this.id=id;
		this.department=department;
	}
}
class customer extends person
{
	String address;
	String phone;
	public customer(String name,String sex,int age,String address,String phone)
	{
		super(name,sex,age);
		this.address=address;
		this.phone=phone;
	}
	
	public String getaddress()
	{
		return address;
	}
	public String getphone()
	{
		return phone;
	}
}
public class EmployeeArray 
{
	private employee[] personList;
	public EmployeeArray(int size) 
	{
		// TODO Auto-generated constructor stub
		personList = new employee[size];
	}
	public boolean Insert(int index,employee e)
	{
		if(index>=0&&index<personList.length)
		{
			personList[index]=e;
			return true;
		}
		return false;
	}
	public employee get(int index)
	{
		if(index>=0&&index<personList.length)
		{
			return personList[index];
		}
		return null;
	}
}
