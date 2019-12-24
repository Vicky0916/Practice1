package pakage1;

public class RotateArray 
{
	//Êı×é×óÒÆnÎ»
	void leftRotatebyOne(int arr[],int n)
	{
		int i,temp;
		temp=arr[0];
		for(i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];
			arr[i]=temp;
		}
	}
	
	
	void leftRotate(int arr[],int d,int n)
	{
		for(int i=0;i<d;i++)
			leftRotatebyOne(arr,n);
	}
	
	public RotateArray() 
	{
		// TODO Auto-generated constructor stub
	}
	
	void pritArray(int arr[],int n)
	{
		for(int i=0;i<n;i++)
		{
			System.out.println(arr[i]+" ");
		}
	}
}
