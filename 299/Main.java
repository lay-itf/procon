import java.util.*;
import java.math.BigInteger;
 
public class Main{
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);  

	int h=sc.nextInt();
	String s=sc.next();

	BigInteger two=new BigInteger("2");
	BigInteger n=two.pow(h).subtract(BigInteger.ONE).add(new BigInteger(s));

	String bin=n.toString(2);

	BigInteger res=BigInteger.ZERO;

	for(int i=1;i<bin.length();i++){
		if(i==1 && bin.charAt(i)=='1' || i!=1 && bin.charAt(i-1)==bin.charAt(i))
		{
			res=res.add(two.pow(h-i+1));
		}
		else{
			res=res.add(BigInteger.ONE);
		}
		
	}

	System.out.println(res);

    }
}