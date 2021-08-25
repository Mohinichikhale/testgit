package Bank;

import java.util.Scanner;
 

public class BankAccount {
	int balance;
	int previousTransaction;
	String customerName;
	String customerId;
	
	BankAccount(String cname , String cid)
	{
		customerName = cname;
		customerId = cid;
		
	}
	
	
	
	void deposite(int amount)
	{
		if(amount != 0)
		{
			balance = balance + amount;
			previousTransaction = amount;
			
		}
		
	}
	void withdraw(int amount)
	{
		if(amount != 0)
		{
			balance = balance - amount;
			previousTransaction = -amount;
			
		}
		
	}
	void getpreviousTransaction()
	{
		if(previousTransaction > 0)
		{
			System.out.println("Deposited: "+previousTransaction);
			
		}
		else if(previousTransaction < 0)
		{
			System.out.println("withdraw: "+Math.abs(previousTransaction));
			
		}
		else
		{
			System.out.println("no transaction occured");
			
		}
	}
	void showMenu()
	{
		char option ='\0';
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("welcome "+customerName);
		System.out.println("your id is"+customerId);
		System.out.println("\n");
		System.out.println("A.check balance ");
		System.out.println("b.Deposite");
		System.out.println("c.withdraw");
		System.out.println("d.previousTransaction");
		System.out.println("e.exit");
		
		do
		{
			System.out.println("***********************************************************************");
			System.out.println("enter an option");
			System.out.println("***********************************************************************");
		    option = scanner.next().charAt(0);
		    System.out.println("\n");
		    
		    switch(option)
		    {
		    case 'A':
		    	System.out.println("---------------------------------------------------------------------");
		    	System.out.println("Balance = "+balance);
		    	System.out.println("---------------------------------------------------------------------");
		    	System.out.println("\n");
		    	break;
		    	
		    case 'b':
		    	System.out.println("enter an amount to deposite");
		    	System.out.println("--------------------------------------------------------------------- ");
		    	int amount = scanner.nextInt();
		    	deposite(amount);
		    	System.out.println("\n");
		    	break;
		    	
		    case 'c':
		    	System.out.println("--------------------------------------------------------------------- ");
		    	System.out.println("Enter an amount to withdraw");
		    	System.out.println("---------------------------------------------------------------------");
		    	int amount2 = scanner.nextInt();
		    	withdraw(amount2);
		    	System.out.println("\n");
		    	break;
		    	
		    case 'd':
		    	System.out.println("--------------------------------------------------------------------");
		    	getpreviousTransaction();
		    	System.out.println("--------------------------------------------------------------------");
		    	System.out.println("\n");
		    	break;
		    case 'e':
		    	System.out.println("*******************************************************************");
		    	break;
		    	
		    default:
		    	System.out.println("invalid option please try again ");
		    	break;
		    	
		    }
		}while(option != 'e');
		
		System.out.println("Thank you for using our service");   
		
		    	
		
	}
	
	

}
