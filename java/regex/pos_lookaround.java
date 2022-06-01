public class pos_lookaround {
  public static void main(String[] args) {
    String string = "004-034556-3234";
    String[] parts = string.split("(?<=-)");
    String part1 = parts[0]; // 004-
    String part2 = parts[1]; // 034556
    String part3 = parts[2]; // 034556

    System.out.println(part1);
    System.out.println(part2);
    System.out.println(part3);

    parts = string.split("(?=-)");
    part1 = parts[0]; // 004-
    part2 = parts[1]; // 034556
    part3 = parts[2]; // 034556

    System.out.println(part1);
    System.out.println(part2);
    System.out.println(part3);
  }
}
