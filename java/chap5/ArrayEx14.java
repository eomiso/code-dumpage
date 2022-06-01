import java.util.*;

public class ArrayEx14 {
  public static void main(String[] args) {
    String src = "ABCDE";
    char[] chArr;

    for (int i = 0; i < src.length(); i++) {
      char ch = src.charAt(i);
      System.out.println("src.charAt(" + i + "):" + ch);
    }

    // String을 char[]로 변환
    chArr = src.toCharArray();

    // char배열(char[])을 출력
    System.out.println(chArr);
  }
}
