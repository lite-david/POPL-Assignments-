import java.util.Enumeration;
public class LexGen{
	
	static int len;
	static int count = 0;
	static String str,f;
	public LexGen(int len){
		this.len = len;
		str = new String();
		for(int i = 0;i<len;i++)
			str = str+'a';
	}
	
	private static void update(){
		int i = str.length()-1;
		char[] arr = str.toCharArray();
		while(i>=0 && arr[i] == 'd'){
			arr[i--] = 'a';
		}
		if(i>= 0){
			arr[i]++;
		}
		str = String.valueOf(arr);
	}
	
	public Enumeration elements(){
		return new Enumeration(){
			
			public boolean hasMoreElements(){
				if(count == Math.pow(4, len))
					return false;
				else
					return true;
							
			}
	
			public Object nextElement(){
				count++;
				f = str;
				update();
				return f;
			}
		};
	}
}



