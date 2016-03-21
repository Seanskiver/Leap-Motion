class Instrument {
  File dir;
  int wX, wY;
  String name;
  PShape shape;
  PImage background;
  
  public Instrument(File dirIn){
    dir = dirIn;
    JSONObject config = loadJSONObject(dir.getName() + "/instrument.json");
    wX = config.getInt("width");
    wY = config.getInt("height");
    name = config.getString("name");
    shape = loadShape("instruments/" + name + "/models/model.svg");
    background = loadImage("instruments/" + name + "/gfx/image.jpg");
  }
  
  public void play(){
    size(wX, wY);
    background(background);
  }
}