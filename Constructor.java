package TCS;

public class Constructor {
	int length,width;
	Constructor(int a,int b)
	{
		length=a;
		width=b;
	}
	int RectArea()
	{
		return(length*width);
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Constructor R1 = new Constructor(15,11);
		int a1 = R1.RectArea();
		System.out.println("area1="+a1);

	}

}
