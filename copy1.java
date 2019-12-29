package pakage1;

public class copy1 implements Cloneable
{
	String name;
	String sex;
	int age;
	String experience;
	public copy1() 
	{
		// TODO Auto-generated constructor stub
	}
	public copy1(String name,String sex,int age)
	{
		this.name=name;
		this.sex=sex;
		this.age=age;
	}
	public void setAge(int age)
	{
		this.age=age;
	}
	public int getAge()
	{
		return age;
	}
	public void setExperience(String experience)
	{
		this.experience=experience;
	}
	public String getExperience()
	{
		return experience;
	}
	public void display()
	{
		System.out.println("姓名:"+name+"性别"+sex+"年龄"+age+"工作经历"+experience);
	}
	public Object clone()
	{
		try
		{
			return (copy1)super.clone();
		}
		 catch(Exception e)
		{
			e.printStackTrace();
		}
		return null;
	}
}
