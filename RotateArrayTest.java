package pakage1;

public class RotateArrayTest 
{
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		 RotateArray rotate=new RotateArray();
		 int arr[]={1,2,3,4,5,6,7};
		 int i=0;
		// rotate.leftRotate(arr, 2, 7);
		
		 
		
		 for(int j=0;j<3;j++)
		 {
			 int temp=arr[0];
			 for(i=0;i<6;i++)
			 {
				 arr[i]=arr[i+1];
			 }
			 arr[i]=temp;
		 }
		 
		 rotate.pritArray(arr, 7);
	}

}
