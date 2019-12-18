
package pakage1;

import java.util.Random;

public class RandomDemo
{
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		Random r=new Random();
		for(int i=0;i<10;i++)
		{
			int num= r.nextInt(100);
			System.out.println(num);
		}
	}

}
