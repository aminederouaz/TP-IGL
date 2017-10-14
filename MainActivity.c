public class MainActivity {
	public static void main(String[] args)
	{
		int[] nbrPremiers= {2, 3, 5, 7}; 
		Vector a=new Vector(4);
		a.insert(nbrPremiers);
		a.affichar();
		
		a.Inverer(); 
		System.out.println("After Inverting Elemenets :");
		a.affichar();
		System.out.println("After Multiplying by 2:");
		a.mul2();
		a.affichar();
		System.out.println("After Tri :");
		a.triTab();
		a.affichar();
		System.out.println("Max: " +a.Max());
		System.out.println("Min: "+ a.Min());
		
		
		
		
	}

}
