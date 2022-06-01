public class InnerExTest1 {

  InnerEx1 ex = new InnerEx1();
  System.out.println(""+ex.CONST);
}

class InnerEx1 {
  class InstanceInner {
    int iv = 100;
    final static int CONST = 100;
  }
}
