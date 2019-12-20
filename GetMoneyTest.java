package pakage1;

public class GetMoneyTest 
{

	public static void main(String[] args) 
	{
		Getmoney get=new Getmoney("123456",1000);
		drawMoney draw=new drawMoney(get,700);
		Thread myThread1=new Thread((Runnable) draw);
		Thread myThread2=new Thread((Runnable) draw);
		myThread1.start();
		myThread2.start();
	}

}
