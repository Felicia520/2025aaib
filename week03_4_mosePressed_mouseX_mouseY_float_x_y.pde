//week03_4_mosePressed_mouseX_mouseY_float_x_y
void setup(){
  size(400, 400);
}
float x = 200, y = 200;
void draw(){
  //if(mousePressed)ellipse(mouseX, mouseY, 50, 30);
  background(#5DD7FA);
  if(mousePressed){
    x = (x + mouseX) / 2;
    y = (y + mouseY) / 2;
    
  }
  ellipse(x, y, 50, 30);
}
