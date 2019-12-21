package pakage1;

public class SaleTicketsTest 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		SaleTickets s=new SaleTickets();
		Thread myThread1=new Thread(s);
		myThread1.start();
		for(int i=0;i<100;i++)
		{
			System.out.println("M:"+i);
		}
		
	}

}
