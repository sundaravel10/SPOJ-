import java.math.*;
import java.util.Scanner;
class Spoj {
    public static void main(String[] args) throws Exception{
        Scanner sc= new Scanner(System.in);
        for(int i=0;i<10;i++)
        {
            BigInteger br=new BigInteger(sc.next());
            BigInteger b2=new BigInteger(sc.next());
 
            BigInteger b4=new BigInteger("2");
            BigInteger b5;
           BigInteger b3;
            b3 = br.subtract(b2);
            b3=b3.divide(b4);
            b5=b3.add(b2);
            System.out.println(b5);
            System.out.println(b3);
        }       
    }
}
