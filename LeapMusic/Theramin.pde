class Theramin implements Instrument{
  String name = "", dir = "";
  int stageWidth = 0, stageHeight = 0;
  boolean active = false;
  PImage stageBG = null;
  PShape shape = null;
  //JSONObject config = null;
  
  Theramin(){
    name = "Theramin";
    dir = "instruments/" + name;
    stageWidth = 1600;
    stageHeight = 900;
    
    stageBG = loadImage(dir + "/models/background.png");
    shape = loadShape(dir + "/models/model.svg");
  }
  
  String getName(){return name;}
  int getStageWidth(){return stageWidth;}
  int getStageHeight(){return stageHeight;}
  boolean isActive(){return active;}
  void activate(){active = true;}
  
  void step(ConcurrentMap<Integer, Vector> fPositions){
    image(stageBG, 0, 0, width, height);
    shape(shape, 0, 0, width, height);
  }
}