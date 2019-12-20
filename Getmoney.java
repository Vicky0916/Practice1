package pakage1;

public class Getmoney 
{
	private String accountNo;  //要取的钱
	private double balance;//剩余的钱
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
	private double drawAcount;  //要取得钱
	public drawMoney(Getmoney account,double drawAcount)
	{
		super();
		this.account=account;
		this.drawAcount=drawAcount;
	}
	public void run()
	{
		//剩余的钱大于你要取走的钱
		if(account.getBalance()>drawAcount)
		{
			System.out.println("你要取走的钱是:"+drawAcount);
			double banlance=account.getBalance()-drawAcount;
			account.setBalance(banlance);
			System.out.println("剩余的钱是:"+banlance);
		}
	}
}