package pakage1;

import java.util.Arrays;

public class StudentArrayTest 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		StudentArray []student;
		student=new StudentArray[5];
		student[0]=new StudentArray(1,"zhang");
		student[1]=new StudentArray(2,"san");
		student[2]=new StudentArray(3,"zan");
		student[3]=new StudentArray(4,"angsan");
		student[4]=new StudentArray(5,"an");
		for(int i=0;i<student.length;i++)
		{
			System.out.println(student[i].sno+" "+student[i].name);
		}
		int[] arraytest=new int[]{1,2,3,4,5};
		System.out.println(Arrays.toString(arraytest));
		int reserch=5;
		int ret=Arrays.binarySearch(arraytest, reserch);
		System.out.println("这个数的位置是"+ret);
	}

}
