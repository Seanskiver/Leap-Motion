/**
    A program for designing and playing virutal musical instruments
    using the mouse, keyboard, or Leap Motion device.
*/

import controlP5.*;
import java.util.*;
import ddf.minim.*;
import ddf.minim.analysis.*;
import ddf.minim.effects.*;
import ddf.minim.signals.*;
import ddf.minim.spi.*;
import ddf.minim.ugens.*;
import com.leapmotion.leap.processing.*;

// Global variables
ControlP5 cp5;
Instrument instrument = null;

void setup(){
  size(300, 400);
  gui();
}

void draw(){
  background(51);
  if (instrument != null) instrument.run();
}

void gui() {
  cp5 = new ControlP5(this);
  
  List instList = Arrays.asList("Piano", "Theramin");
  
  cp5.addScrollableList("slInst")
      .setPosition(0, 0)
      .setLabel("Load Instrument")
      .setSize(200, 100)
      .setBarHeight(20)
      .setItemHeight(20)
      .addItems(instList);
}

void slInst(int n){
  String selection = (String)cp5.get(ScrollableList.class, "slInst").getItem(n).get("text");
  if (selection == "Piano") {
    println("You chose Piano");
    // instrument = new Piano();
  }
  else if (selection == "Theramin"){
    println("You chose Theramin");
    instrument = new Theramin();
  }
}