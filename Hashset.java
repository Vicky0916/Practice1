package pakage1;

import java.util.HashSet;
import java.util.Iterator;
import java.util.TreeSet;

public class Hashset 
{
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		HashSet<String> h=new HashSet<String>();
		h.add("Bob");
		h.add("Jack");
		h.add("Tom");
		System.out.println(h);
		
		System.out.println("Bob�ڵ�ǰset��:"+h.contains("Bob"));
		System.out.println("Rose�ڵ�ǰset��:"+h.contains("Rose"));
		System.out.println("------------------");
		//TreeSet����ʵ������
		TreeSet<String> tree=new TreeSet<String>();
		tree.add("Marry");
		tree.add("Tom");
		tree.add("Jack");
		
		Iterator<String> it=tree.iterator();
		while(it.hasNext())
		{
			System.out.println(it.next());
		}
		System.out.println("------------------");
		TreeSet<String> str=new TreeSet<String>();
		str.add("C");
		str.add("B");
		str.add("G");
		str.add("E");
		str.add("H");
		
		System.out.println(str);
		System.out.println("------------------");
		System.out.println("��ǰset����͵�Ԫ����:"+str.first());
		System.out.println("��ǰset����ߵ�Ԫ����"+str.last());
		System.out.println("��ǰset�д��ڵ���D��Ԫ����"+str.ceiling("D"));
		System.out.println("��ǰset��С�ڵ���D��Ԫ����"+str.floor("D"));
	}

}
