package pakage1;

import java.util.ArrayList;

public class main1 
{
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		ArrayList<String> list=new ArrayList<String>();
		list.add("����");
		System.out.println(list);
		list.add(0, "��ѧȨ");
		System.out.println(list);
		list.set(1, "��Т��");
		System.out.println(list);
		for(int i=0;i<list.size();i++)
		{
			System.out.println(i+":"+list.get(i));;
		}
	}

}
