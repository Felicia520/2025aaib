//week12_1_happy_bubble_3D_part2
//調一下色彩,放在對的位置
void setup(){
  size(300,300,P3D); 
}
void draw(){
    background(255,255,0);
    ortho(); //垂直投影(就會全部都正正的)
    lights(); //打光,可讓3D模型更立體
    noStroke(); //不要有線
    fill(#FF8EEA); //球是粉紅色
    
    for(int i=0;i<6; i++){
      for(int j=0; j<6; j++){
        pushMatrix();
        translate(25+j*50,25+i*50); 
        sphere(23); //半徑變小了
        popMatrix(); 
      }
    }
}
