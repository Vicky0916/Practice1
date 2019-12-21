package pakage1;

import java.util.Iterator;
import java.util.TreeMap;

public class Treemap 
{
	
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		TreeMap<String,String> tree=new TreeMap<String,String>();
		tree.put("1001", "Bob");
		tree.put("1002","Jack");
		tree.put("1003","Rose");
		
		Iterator<String> it=tree.keySet().iterator();
		while(it.hasNext())
		{
			Object key=it.next();
			System.out.println("¼ü:"+key+"Öµ:"+it.get(key));
		}
		
	}

}
