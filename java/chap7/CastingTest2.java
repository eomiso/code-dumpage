public class CastingTest2 {
  public static void main(String[] args) {
    Car car = new FireEngine();
    Car car2 = new FireEngine();

    if (car instanceof FireEngine) 
      System.out.println("car reference variable is pointing to an instance of FireEngine");
    else
      System.out.println("car is not pointing to an instance of FireEngine");
  }
}

class Car {
  String color;
  int door;

  void drive() {
    System.out.println("drive, Brrr~");
  }

  void stop() {
    System.out.println("Stop!!");
  }
}

class FireEngine extends Car {
  void water() {
    System.out.println("water!!");
  }
}
