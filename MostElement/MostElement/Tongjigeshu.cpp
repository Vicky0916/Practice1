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
		System.out.println("������һ���ַ�����");
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
		System.out.println("��д��ĸ��" + bigcount + "��");

		System.out.println("Сд��ĸ��" + smallcount + "��");

		System.out.println("���֣�" + numbercount + "��");
	}

}
