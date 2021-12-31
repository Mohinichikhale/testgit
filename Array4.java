//program to accept and display element of matrix
package TCS;
import java.io.*;
import java.util.Scanner;

public class Array4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a[][] = new int[3][3];
		Scanner sc = new Scanner(System.in);
		int i,j;
		System.out.println("\n enter number in array a[3][3]\n ");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				a[i][j]=sc.nextInt();
				
			}
		}
		System.out.println("\n element in matrix");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(a[i][j]+" ");
			}
			System.out.println("");
		}
				
		

	}

}
