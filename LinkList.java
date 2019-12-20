package pakage1;

import java.util.LinkedList;

class MyQueue<T>
{
	LinkedList<T> l1=new LinkedList<T>();
	public boolean add(T e)
	{
		return l1.add(e);
	}
	public T remove()
	{
		if(l1.size()>0)
		{
			return l1.remove();
		}
		else
			return null;
	}
}
public class LinkList 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		MyQueue<String> m=new MyQueue<String>();
		m.add("程蕊");
		m.add("李学权");
		
		String element;
		while((element=m.remove())!=null)
		{
			System.out.println(element);
		}
	}

}
