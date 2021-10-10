package javaClass;
import java.io.*;
public class Array1 {

	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		int num[] = new int[5];
		DataInputStream ds = new DataInputStream(System.in);
		System.out.println("enter five element in array:");
		for(int i=0;i<5;i++)
		{
			num[i]=Integer.parseInt(ds.readLine());
			
		}
		
		

	}

}
