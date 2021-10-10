package TCS;

import java.io.DataInputStream;
import java.io.IOException;

public class Read1 {

	public static void main(String[] args)throws IOException
	
	{
		// TODO Auto-generated method stub
		try {
		int n,f=1,i;
		DataInputStream ds = new DataInputStream(System.in);
		System.out.println("enter number");
		n=Integer.parseInt(ds.readLine());
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
			System.out.println("Factorial="+f);
			
		}
		catch(Exception e)
		{
			System.out.println("Message:"+e);
		}
		

	}

}
