package pakage1;

import java.util.ArrayList;

class Mystack<T>
{
	private ArrayList<T> a1=new ArrayList<T>();
	public boolean push(T e)
	{
		return a1.add(e);
	}
	public T pop()
	{
		if(a1.size()>0)
		{
			return a1.remove(a1.size()-1);
		}
		else
		{
			return null;
		}
	}
	public int size()
	{
		return a1.size();
	}
}
public class ArrayListToStack 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		Mystack<String> ms=new Mystack<String>();
		ms.push("Tom");
		ms.push("Marray");
		ms.push("Bob");
		
		String element;
		while((element=ms.pop())!=null)
		{
			System.out.println(element);
		}
	}

}
