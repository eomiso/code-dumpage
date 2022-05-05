import java.lang.Math;
import java.util.Arrays;
import java.util.List;
import java.util.Collections;
import java.util.LinkedList;

public class GetAnswer {
  public static void main(String[] args) {
    String[] strArr = { "CHANGE", "LOVE", "HOPE", "VIEW" };

    String answer = getAnswer(strArr);
    String question = getScrambledWord(answer);

    System.out.println("Question:" + question);
    System.out.println("Answer:" + answer);
  } // main

  public static String getAnswer(String[] arr) {
    int i = (int) Math.random() % 4;

    return arr[i];
  }

  public static String getScrambledWord(String str) {
    char[] ansCharArr = str.toCharArray();
    List<Character> ansCharList = new LinkedList<>();
    for (char c : ansCharArr) {
      ansCharList.add(c);
    }

    Collections.shuffle(ansCharList);

    StringBuilder sb = new StringBuilder();

    for (char c : ansCharList) {
      sb.append(c);
    }

    return sb.toString();
  }
}
