package pakage1;

public class SaleTickets implements Runnable
{
	public void run()
	{
		int i=0;
		while(true)
		{
			System.out.println("T:"+i);
			i++;
			if(i>100)
			{
				break;
			}
		}
	}
	
	public SaleTickets() 
	{
		// TODO Auto-generated constructor stub
	}

}
