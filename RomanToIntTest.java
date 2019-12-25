package pakage1;

import java.util.Scanner;

public class RomanToIntTest 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		//String str;
		RomeToInt s;
		Scanner str=new Scanner(System.in);
		String s1=str.nextLine();
		int ret=RomeToInt.romanToInt(s1);
		System.out.println(ret);
	}

}
