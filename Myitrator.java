package pakage1;

import java.util.ArrayList;
import java.util.List;

import javax.swing.text.html.HTMLDocument.Iterator;

public class Myitrator 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		List<String> list=new ArrayList<String>();
		list.add("Tom");
		list.add("Bob");
		list.add("Jack");
		//����forѭ����ӡ
		for(int i=0;i<list.size();i++)
		{
			String s=(String) list.get(i);
			System.out.println(s);
		}
		//ʹ�õ�������ӡ
		/*Iterator it=list.iterator();
		while(it.hasNext())
		{
			String s=it.next();
			System.out.println(s);
		}*/
		
		//�߼�forѭ��
		for(String s:list)
		{
			System.out.println(s);
		}
		int [] a={1,2,3,4,5,6};
		for(int num:a)
		{
			System.out.println(num);
		}
	}
	

}
