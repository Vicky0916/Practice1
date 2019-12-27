package pakage1;

public class copy2text 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		copy2 chengrui=new copy2("程蕊","女",21);
		chengrui.setExperience("西安财经大学", "精通c++");
		chengrui.display();
		
		copy2 chengrui2=(copy2)chengrui.clone();
		chengrui2.setExperience("西安财经大学", "精通c++");
		chengrui2.display();
	}

}
