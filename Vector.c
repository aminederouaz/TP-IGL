package Test;


public class Vector {
	
	

	private int tab[];
	private int Min;
	private int Max;
	
	
	public Vector (int taille)
	{
		 this.tab=new int[taille];
	}
	
	public int[] getTab(){
	return this.tab;
	}
	
	this is just another useless line
	public void insert(int tab[])
	{
		this.tab=tab;		
	}

	
	public void affichar()
	{
		int i;
		System.out.print("| ");
		for (i=0;i<tab.length;i++)
		{
			System.out.print(tab[i]+" |");
		}//another different comment number two
		System.out.println();
	}

	public void triTab()
	{
		int i,j,sub;
		
		for (j=0;j<this.tab.length-1;j++)
		{
			
			for (i=0;i<this.tab.length-1;i++)
			{
				if (tab[i]>tab[i+1])
				{ 
					sub=tab[i+1];
					tab[i+1]=tab[i];
					tab[i]=sub;	
				}
					
			}
			
		}
	}
	

	public void qsf sf
	{
		int i,minimum,maximum;
		minimum=tab[0];
		maximum=tab[0];
		
		for (i=0;i<tab.length;i++)
		{
			if (tab[i]<minimum)
				minimum=tab[i];
			
			if (tab[i]>maximum)
				maximum=tab[i];
		}
		this.Min=minimum;
		this.Max=maximum;
	}
	

	public int getMin() {
		return Min;
	}

	public int getMax() {
		return Max;
	}

	public static void sommer(Vector tab1,Vector tab2,Vector tab3) {
	     if (tab1.tab.length!=tab2.tab.length) throw new ArithmeticException();
	     else for(int i=0;i<tab1.tab.length;i++ ){
	    	 tab3.tab[i]=tab1.tab[i]+tab2.tab[i];     }
		}

	public void Inverer (){
			int tabTemp[]=new int[this.tab.length];
			for(int i=0;i<this.tab.length;i++ )
				tabTemp[i]=this.tab[tabTemp.length-i-1];  
			
			this.tab=tabTemp;
				
		}

	public void mul2(){
			for(int i=0;i<this.tab.length;i++ ){
				this.tab[i]=this.tab[i]*2;
				
			}			
		}

}
