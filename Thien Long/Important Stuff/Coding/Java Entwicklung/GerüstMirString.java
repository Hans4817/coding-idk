/*
* hi
*/
         import java.util.Scanner;
public class GerüstMirString {
  public static void main(String[] args) {
    
    System.out.print("Hallo, wie heißt du? ");
    Scanner scanner = new Scanner(System.in);
    String str = scanner.next();
    System.out.print("Grüß dich " + str + ".");
    
  }
}