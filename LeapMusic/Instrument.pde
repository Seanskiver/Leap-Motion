abstract class Instrument {
  String name = "Instrument", dir;
  JSONObject config;
  PImage bg;
  PShape shape;
  boolean active = false, fullscreen = false;
  
  Instrument(String name){
    this.name = name;
    this.dir = "instruments/" + name;
    this.config = loadJSONObject(this.dir + "/instrument.json");
    this.shape = loadShape(this.dir + "/models/model.svg");
    this.bg = loadImage(this.dir + "/models/background.png");
  }
  
  void run(){
    if (!this.active){
      surface.setSize(config.getInt("width"), config.getInt("height"));
      this.active = true;
    }
    
    step();
  }
  
  abstract void step(); // Instrument logic goes here
}