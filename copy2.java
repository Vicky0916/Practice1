package pakage1;

class experience
{
	private String EducationBackground;
	private String skills;
	public experience()
	{
		
	}
	public void setExperience(String EducationBackground,String skills)
	{
		this.EducationBackground=EducationBackground;
		this.skills=skills;
	}
	public String toString()
	{
		return EducationBackground+skills;
	}
}
public class copy2 implements Cloneable
{
	private String name;
	private String sex;
	private int age;
	private experience exp;
	public copy2(String name,String sex,int age)
	{
		// TODO Auto-generated constructor stub
	this.name=name;
	this.sex=sex;
	this.age=age;
	this.exp=new experience(); 
	}
	
	public void setAge(int age)
	{
		this.age=age;
	}
	public int getage()
	{
		return age;
	}
	
	public experience getExperience()
	{
		return exp;
	}
	public void setExperience(String EducationBackground,String skills)
	{
		exp=new experience();
		exp.setExperience(EducationBackground, skills);
	}
	public void display()
	{
		System.out.println("姓名+"+name+"性别"+sex+"年龄"+age);
	}
	public Object clone()
	{
		try{
			return (copy2)super.clone();
		}
		catch(Exception e)
		{
			e.printStackTrace();
			return null;
		}
	}
}
