package pakage1;

import java.util.Scanner;

public class Bigdecimal 
{
   //统计每个大小写字母数字分别出现的次数
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		int smallcount=0;  //小写字母个数
		int bigcount=0;  //大写字母个数
		int digcount=0;   //数字个数
		Scanner sc=new Scanner(System.in);
	    System.out.println("请输入一串字符:");
	    String str=sc.nextLine();
	    //将字符串转化为字符数组
	    char[] arr=str.toCharArray();
	    for(int i=0;i<arr.length;i++)
	    {
	    	char ch=arr[i];
	    	if(Character.isUpperCase(ch))  //是大写字母
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
	    System.out.println("大写字母有"+bigcount+"个");
	    System.out.println("小写字母有"+smallcount+"个");
	    System.out.println("数字有"+digcount+"个");
	}
}
