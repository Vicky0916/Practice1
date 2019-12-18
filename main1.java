package pakage1;

import java.util.ArrayList;

public class main1 
{
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		ArrayList<String> list=new ArrayList<String>();
		list.add("程蕊");
		System.out.println(list);
		list.add(0, "李学权");
		System.out.println(list);
		list.set(1, "程孝蕊");
		System.out.println(list);
		for(int i=0;i<list.size();i++)
		{
			System.out.println(i+":"+list.get(i));;
		}
	}

}
