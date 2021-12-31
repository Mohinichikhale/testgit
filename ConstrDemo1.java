package TCS;

public class ConstrDemo1 {
	int a,b,c;
	ConstrDemo1()
	{
		a=10;
		b=20;
		c=30;
	}
	ConstrDemo1(int a,int b,int c)
	{
		this.a=a;
		this.b=b;
		this.c=c;
	}
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ConstrDemo1 o1 = new ConstrDemo1();
		System.out.println(o1.a+" "+o1.b+" "+o1.c);
		ConstrDemo1 o2 = new ConstrDemo1(11,22,33);
		System.out.println(o2.a+" "+o2.b+" "+o2.c);
		
		
				

	}

}
