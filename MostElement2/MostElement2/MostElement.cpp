package Test;
import java.util.*;
public class MostElement {
	public static void main(String[] args)
	{
		int[]count = new int[] {1, 1, 2, 3, 5};
		int[]array = { 0 };
		int max = 0; int temp = 0;
		for (int i = 0; i < count.length; i++)
		{
			System.out.print(count[i] + " ");
		}
		for (int j = 0; j < count.length; j++)
		{
			array[count[j]] += 1;
			if (array[count[j]] > max)
			{
				max = array[count[j]];
				temp = count[j];
			}
		}
		System.out.println(temp + " ");
	}

}
