public class StaticTest {
  public static void main(String[] args) {
    Counter a = new Counter();
    System.out.println(a.getCount());
    a.addCount();
    System.out.println(a.getCount());
    a.addCount();
    System.out.println(a.getCount());

  }
}

class Counter {
  private static int cnt = 0;

  public void addCount() {
    cnt++;
  }

  public int getCount() {
    return cnt;
  }
}
