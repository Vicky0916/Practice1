package Test;
import java.util.Scanner;
public class Tongjicishu
{
	public static void main(String[] args)
	{
		int bigcount = 0;
		int smallcount = 0;
		int numbercount = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("请输入一个字符串：");
		String line = sc.nextLine();
		char[] chs = line.toCharArray();
		for (int x = 0; x < chs.length; x++)
		{
			char ch = chs[x];
			if (Character.isUpperCase(ch))
			{
				bigcount++;
			}
			else if (Character.isLowerCase(ch))
			{
				smallcount++;
			}
			else if (Character.isDigit(ch))
			{
				numbercount++;
			}
		}
		System.out.println("大写字母：" + bigcount + "个");

		System.out.println("小写字母：" + smallcount + "个");

		System.out.println("数字：" + numbercount + "个");
	}

}
