import java.util.Scanner;

public class ChangeWords 
{
   public static String TurnTocase(String str)
   {
	   String s="";
	   char str1;
	   String s1=str.toUpperCase();
	   String s2=str.toLowerCase();
	   for(int i=0;i<str.length();++i)
	   {
		   if(str.substring(i,1+i).equals(str.substring(i,i+1)))
			   s+=s2.substring(i,i+1);
		   else
			   s+=s1.substring(i,i+1);
	   }
	   return s;
   }
	public static void main(String[] args) 
	{
		System.out.println("请输入字符串：");
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		String str=in.next();
		String Result=TurnTocase(str);
        System.out.println("大小写转换后的结果为："+Result);
	}
}
