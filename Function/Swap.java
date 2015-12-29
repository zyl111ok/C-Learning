public class Swap{ 
	public static class Struct{ 
		public int i=5;
		public int j=6;
	}
	private static void swap(Integer a,Integer b){ 
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
	private static void exchange(Struct s){ 
		int temp;
		temp=s.i;
		s.i=s.j;
		s.j=temp;
	}
	public static void main(String args[]){ 
		Integer i=5,j=6;
		System.out.println("before swap: "+"i= "+i+"j= "+j);
		swap(i,j);
		System.out.println("after swap: "+"i= "+i+"j= "+j);
		Struct s=new Struct();
		exchange(s);
		System.out.println(s.i+"  "+s.j);
	}
}