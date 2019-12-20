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
		
		System.out.println("Bob在当前set中:"+h.contains("Bob"));
		System.out.println("Rose在当前set中:"+h.contains("Rose"));
		System.out.println("------------------");
		//TreeSet可以实现排序
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
		System.out.println("当前set中最低的元素是:"+str.first());
		System.out.println("当前set中最高的元素是"+str.last());
		System.out.println("当前set中大于等于D的元素是"+str.ceiling("D"));
		System.out.println("当前set中小于等于D的元素是"+str.floor("D"));
	}

}
