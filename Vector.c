public class Vector {
	
	private int tab[];
	
	public Vector (int taille)
	{
		 this.tab=new int[taille];
	}
	
	public void insert(int tab[])
	{
		this.tab=tab;		
	}
	public static void sommer(int tab1[],int tab2[],int tab3[]) {
     if (tab1.length!=tab2.length) System.out.println("Error! Vectors With Different Size!");
     else for(int i=0;i<tab1.length;i++ ){
    	 tab3[i]=tab1[i]+tab2[i];     }
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
	
	public void affichar()
	{
		int i;
		System.out.print("| ");
		for (i=0;i<tab.length;i++)
		{
			System.out.print(tab[i]+" |");
		}
		System.out.println("");
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
	
	public int Min()
	{
		int i,minimum;
		minimum=tab[0];
		
		for (i=0;i<tab.length;i++)
		{
			if (tab[i]<minimum)
				minimum=tab[i];
		}
		return minimum;
	}
	
	public int Max()
	{
		int i,maximum;
		maximum=tab[0];
		
		for (i=0;i<tab.length;i++)
		{
			if (tab[i]>maximum)
				maximum=tab[i];
		}
		return maximum;
	}

		
}
