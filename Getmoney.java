package pakage1;

public class Getmoney 
{
	private String accountNo;  //Ҫȡ��Ǯ
	private double balance;//ʣ���Ǯ
	public Getmoney() 
	{
		// TODO Auto-generated constructor stub
	}
	public Getmoney( String accountNo,double balance)
	{
		this.accountNo=accountNo;
		this.balance=balance;
	}
	public String getAccountNo()
	{
		return accountNo;
	}
	public void setAccountNo()
	{
		this.accountNo=accountNo;
	}
	public void setBalance(double balance)
	{
		this.balance=balance;
	}
	public double getBalance()
	{
		return balance;
	}
}
class drawMoney implements Runnable
{
	private Getmoney account;
	private double drawAcount;  //Ҫȡ��Ǯ
	public drawMoney(Getmoney account,double drawAcount)
	{
		super();
		this.account=account;
		this.drawAcount=drawAcount;
	}
	public void run()
	{
		//ʣ���Ǯ������Ҫȡ�ߵ�Ǯ
		if(account.getBalance()>drawAcount)
		{
			System.out.println("��Ҫȡ�ߵ�Ǯ��:"+drawAcount);
			double banlance=account.getBalance()-drawAcount;
			account.setBalance(banlance);
			System.out.println("ʣ���Ǯ��:"+banlance);
		}
	}
}