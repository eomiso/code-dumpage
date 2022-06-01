package com.codechobo.book;

import com.codechobo.book.*;

//import com.codechobo.book;

public class TVCR extends TV implements IVCR {
  VCR vcr = new VCR();

  public void play() {
    vcr.play();
  }

  public void stop() {
    vcr.stop();
  }

  public void reset() {
    vcr.reset();
  }

  public int getCounter() {
    return vcr.getCounter();
  }

  public void setCounter(int c) {
    vcr.setCounter(c);
  }
}
