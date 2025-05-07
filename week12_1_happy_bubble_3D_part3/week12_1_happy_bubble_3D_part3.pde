//week12_1_happy_bubble_3D_part3
//用mousePressed按下去,要對應列陣 在畫
void setup(){
  size(300,300,P3D); 
}
int[][] state = new int[6][6]; //state狀況 0沒按 1按下
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
        if(state[i][j]==0) sphere(23); //沒按
        else sphere(10); //有按
        popMatrix(); 
      }
    }
}
void mousePressed(){
  int j =(mouseX)/50, i = (mouseY)/50; // 座標換算;按哪一個
  state[i][j] =1 - state[i][j];
}
