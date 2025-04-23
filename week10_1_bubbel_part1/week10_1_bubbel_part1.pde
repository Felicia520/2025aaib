//week10_1_bubbel_part1
PImage toy1, toy2; //變數宣告
// int a,b;
void setup(){
  size(400,495);
  toy1 = loadImage("toy1.jpg");
  toy2 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1); //把1張圖當背景,長寬要相同
  if(mousePressed) image(toy2, 0, 0);
}
