package TCS;

import java.util.Scanner;

public class Palindrome {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int r,sum=0,temp;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("enter number \n");
		int n = sc.nextInt();
		temp=n;
		while(n>0) {
			r=n%10;
			sum=(sum*10)+r;
			n=n/10;
			
		}
		if(temp==sum)
			System.out.println("palindrom number");
		else
			System.out.println("not palindrom");
		

	}

}
