
public class Student {

	String school;
	int stunum;
	String gender;
	String birth;
	String name;
	int score;
	void SetName()
	{
		System.out.println("姓名：" + name);
	}
	void getScore()
	{
		System.out.println("成绩：" + score);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Undergraduate stu = new Undergraduate();
		
		stu.school = "西安财经大学";
		stu.stunum = 1705990827;
		stu.gender = "女";
		stu.birth = "1998.09.16";
		stu.name = "Vicky";
		stu.score = 100;
		stu.department = "信息学院";
		stu.major = "软件工程";
		
		stu.SetName();
		System.out.println("生日：" + stu.birth);
		System.out.println("学校：" + stu.school);
		System.out.println("学号：" + stu.stunum);
		System.out.println("性别：" + stu.gender);
		stu.getScore();
        stu.getDepartment();
        stu.getMajor();
		
		
	}
}

class Undergraduate extends Student
{
	String department;
	String major;
	void getDepartment()
	{
		System.out.println("系：" + department);
	}
	void getMajor()
	{
		System.out.println("专业：" + major);
	}
}
