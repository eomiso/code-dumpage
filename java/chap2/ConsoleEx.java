import java.io.Console;

/**
 * ConsoleEx
 */
public class ConsoleEx {

  public static void main(String[] args) {
    Console console = System.console();

    System.out.print("Enter your name: ");
    String name = console.readLine();
    System.out.println("Welcome " + name);

  }
}
