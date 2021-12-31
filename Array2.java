package TCS;
import java.io.*;
import java.util.Scanner;
public class Array2 {

	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		int num[] = new int[5];
		Scanner sc = new Scanner(System.in);
		int cnt1 = 0,cnt2=0,i;
		System.out.println("enter five numbers in array\n");
		for(i=0;i<5;i++)
		{
			num[i]=sc.nextInt();
			if(num[i]%2==0)
				cnt1++;
			else
				cnt2++;
			
		}
System.out.println("\n even number =" +cnt1);
System.out.println("\n odd number =" +cnt2);
	}

}
