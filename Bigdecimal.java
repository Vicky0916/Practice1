package pakage1;

import java.util.Scanner;

public class Bigdecimal 
{
   //ͳ��ÿ����Сд��ĸ���ֱַ���ֵĴ���
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		int smallcount=0;  //Сд��ĸ����
		int bigcount=0;  //��д��ĸ����
		int digcount=0;   //���ָ���
		Scanner sc=new Scanner(System.in);
	    System.out.println("������һ���ַ�:");
	    String str=sc.nextLine();
	    //���ַ���ת��Ϊ�ַ�����
	    char[] arr=str.toCharArray();
	    for(int i=0;i<arr.length;i++)
	    {
	    	char ch=arr[i];
	    	if(Character.isUpperCase(ch))  //�Ǵ�д��ĸ
	    	{
	    		bigcount++;
	    	}
	    	else if(Character.isLowerCase(ch))
	    	{
	    		smallcount++;
	    	}
	    	else if(Character.isDigit(ch))
	    	{
	    		digcount++;
	    	}
	    }
	    System.out.println("��д��ĸ��"+bigcount+"��");
	    System.out.println("Сд��ĸ��"+smallcount+"��");
	    System.out.println("������"+digcount+"��");
	}
}
