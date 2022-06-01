package com.codechobo.book;

public class VCR implements IVCR {
  protected int counter;

  public void play() {
    System.out.println("Play!");
  }

  public void stop() {
    System.out.println("Stop!");
  }

  public void reset() {
    counter = 0;
  }

  public int getCounter() {
    return counter;
  }

  public void setCounter(int c) {
    counter = c;
  }
}
