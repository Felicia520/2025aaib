// week05_5_heart
size(300,300); //視窗大小
stroke(255, 0, 0); //紅色的筆
translate(150,150);
for(int i=-150; i<150; i++){ //左手i
  for(int j=-150; j<150; j++){ //右手j
    float x = j/100.0, y = -i/100.0;
    float d = x*x + y*y - 1;
    if(d*d*d-x*x*y*y*y<0) point(j,i);
  }
}
