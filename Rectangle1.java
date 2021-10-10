package TCS;

import java.io.DataInputStream;
import java.io.IOException;

public class Rectangle1 {
 int length;
	int width;
	DataInputStream ds = new DataInputStream(System.in);
	void getdata()throws IOException
	{
		System.out.println("enter length:");
		length=Integer.parseInt(ds.readLine());
		System.out.println("enter width:");
		width=Integer.parseInt(ds.readLine());
		
	}
	void Area()
	{
		int a = length*width;
		System.out.println("Area="+a);
	}
	
	public static void main(String args[])throws IOException {
		Rectangle1 R1 = new Rectangle1();
		R1.getdata();
		R1.Area();
		
		
		
		

	}

}
