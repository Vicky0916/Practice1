interface CalcArea
{
  double getArea();	
}
 class Circle implements  CalcArea
{
	 double R;
	 public Circle(double R1)
	 {
		 R=R1;
	 }
	public double getArea()
	{
		double area1;
		area1=3.14*R*R;
		return area1;
	}
}
 class Rectangle implements  CalcArea
 {
	 double length;
	 double wildth;
	 public Rectangle(double l,double w)
	 {
		 length=l;
		 wildth=w;
	 }
	 public double getArea()
	 {
		 double area2=length*wildth;
		 return area2;
	 }
 }
 
public class GetArea 
{
    static CalcArea[] shapes={new Circle(1.0),new Rectangle(3.0,4.0),new Circle(8.0)};
    public static double sumArea(CalcArea[] shapes)
    {
    	double sum = 0;
		for(CalcArea c: shapes)
		{
			sum = sum + c.getArea();
		}
		return sum;
    }
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
          Circle c=new Circle(3.1);
          Rectangle R=new Rectangle(3.2,4.3);
          System.out.println("圆的面积是："+c.getArea());
          System.out.println("矩形的面积是："+R.getArea());
          System.out.println("total area ="+sumArea(shapes));
	}

}
