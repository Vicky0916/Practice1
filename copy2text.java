package pakage1;

public class copy2text 
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		copy2 chengrui=new copy2("����","Ů",21);
		chengrui.setExperience("�����ƾ���ѧ", "��ͨc++");
		chengrui.display();
		
		copy2 chengrui2=(copy2)chengrui.clone();
		chengrui2.setExperience("�����ƾ���ѧ", "��ͨc++");
		chengrui2.display();
	}

}
