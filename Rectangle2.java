package TCS;
import java.io.*;

public class Rectangle2 {
	int length , breadth ;
	void accept()throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("enter length:");
		length=Integer.parseInt(br.readLine());
		System.out.println("enter breadth:");
		breadth=Integer.parseInt(br.readLine());
	}
	void display()
	{
		System.out.println("length: " + length+ "and breadth : " + breadth);
		
	}
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		Rectangle2 r[] = new Rectangle2[3];
		for(int i = 0;i<3;i++)
		{
			r[i]=new Rectangle2();
			r[i].accept();
			
		}

	}

}
