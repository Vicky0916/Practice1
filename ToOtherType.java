
public class ToOtherType 
{
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		int n=-1234567;
		String s1;
		String s2;
		String s3;
		s1=Integer.toBinaryString(n);
		s2=Integer.toHexString(n);
		s3=Integer.toOctalString(n);
		System.out.println("������ת��Ϊ��"+s1);
		System.out.println("ʮ������ת��Ϊ��"+s2);
		System.out.println("�˽���ת��Ϊ��"+s3);
	}
}
