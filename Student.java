
public class Student {

	String school;
	int stunum;
	String gender;
	String birth;
	String name;
	int score;
	void SetName()
	{
		System.out.println("������" + name);
	}
	void getScore()
	{
		System.out.println("�ɼ���" + score);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Undergraduate stu = new Undergraduate();
		
		stu.school = "�����ƾ���ѧ";
		stu.stunum = 1705990827;
		stu.gender = "Ů";
		stu.birth = "1998.09.16";
		stu.name = "Vicky";
		stu.score = 100;
		stu.department = "��ϢѧԺ";
		stu.major = "�������";
		
		stu.SetName();
		System.out.println("���գ�" + stu.birth);
		System.out.println("ѧУ��" + stu.school);
		System.out.println("ѧ�ţ�" + stu.stunum);
		System.out.println("�Ա�" + stu.gender);
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
		System.out.println("ϵ��" + department);
	}
	void getMajor()
	{
		System.out.println("רҵ��" + major);
	}
}
