import java.util.Enumeration;

public class MainClass {

	public static void main(String[] args) {
	
		LexGen l = new LexGen(3); 
		Enumeration e = l.elements();
		while (e.hasMoreElements()){
			System.out.println(e.nextElement());
		}
	}

}
