//Addition of two arrays

package TCS;
import java.io.*;
import java.util.Scanner;

public class Array3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a[] = new int[50];
		int b[] = new int[50];
		int c[] = new int[60];
		int n,i;
		Scanner sc = new Scanner(System.in);
		System.out.println("\n enter size of array :");
		n=sc.nextInt();
		System.out.println("\n enter element in  array A :");
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		System.out.println("\n enter element in  array B :");
		for(i=0;i<n;i++)
		{
			b[i]=sc.nextInt();
		}
		System.out.println("\n addition of array:");
		for(i=0;i<n;i++)
		{
			c[i]=a[i]+b[i];
			System.out.print(c[i]+" ");
		}


	}

}
