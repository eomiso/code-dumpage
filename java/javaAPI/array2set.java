import java.lang.*;
import java.util.List;
import java.util.HashSet;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class array2set {
  public static void main(String[] args) {
    int[] arrOrg = new int[] { 1, 2, 3, 4, 5 };

    Integer[] arr = Arrays.stream(arrOrg).boxed().toArray(Integer[]::new);
    Set<Integer> bag = new HashSet<Integer>(Arrays.asList(arr));

    System.out.println(bag.toString());

    Set<Integer> bag2 = Set.of(arr);
    System.out.println(bag2.toString());

  }
}
