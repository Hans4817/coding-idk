 
 
    import java.io.*;
    
public class Eingabe  {
  
  public static void main(String[] args) 
  throws IOException
  {
    String name ="Leck mich am Arsch";
    String k ="Ich heissee superman und ich bin 3 jahre alt";
    char z='A';
    double a,b,c,d,e,f,g;
    BufferedReader din = new BufferedReader( 
    new InputStreamReader (System.in));
    System.out.println("Bitte a eingeben");
    a = Integer.parseInt(din.readLine());
    System.out.println("Bitte b eingeben");
    b = Integer.parseInt(din.readLine());
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    System.out.println("a+b="+c);
    System.out.println("a-b="+d);
    System.out.println("a*b="+e);
    System.out.println("a/b="+f);
    System.out.println("a%b="+f);
    System.out.println("z="+z);
    System.out.println("String="+name);
    System.out.println("String="+name.length());
    System.out.println("String="+k);
    
    
    
    
    
  }    
}                                  
