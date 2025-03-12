//week_04_5_float_fishX_fishY_dx_dy_dist
void setup(){
  size(600, 400);
}
int x,y;
float fishX = 300, fishY = 200;//魚的座標
void draw(){
  background(#C0ffee); //裡面是0不是字母o
  ellipse(fishX, fishY, 30, 10);
  if(x>0){ //有飼料的話
    y += 2; //往下掉
    if(y>400) x = 0;//超過畫面範圍,就把X變成0
    ellipse(x, y, 8, 8); //畫出小飼料
  float dx = x - fishX, dy = y - fishY;//向量
  float d =dist(x, y, fishX, fishY);//距離
  fishX += dx / d * 4;//往飼料靠過去
  fishY += dy / d * 4;
  }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
