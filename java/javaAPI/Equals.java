import java.util.HashMap;
import java.util.Map;

public class Equals {

  public static void main(String[] args) {
    int[] nums1 = new int[] { 1, 2, 3, 4, 5 };

    Map<Integer, Integer> map = new HashMap<>();

    for (int n : nums1) {
      map.put(n, map.getOrDefault(n, 0) + 1);
    }

    Integer cnt = map.getOrDefault(3, 0);
    Integer cnt2 = map.get(3);

    System.out.println(cnt.equals(cnt2));
    cnt--;
    System.out.println(cnt2);

  }
}
