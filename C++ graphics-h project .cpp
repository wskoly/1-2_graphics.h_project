#include<stdio.h>
#include<graphics.h>

int main(){
   initwindow(1600,850);
   settextstyle(SIMPLEX_FONT,HORIZ_DIR,8);
   int page=0;

  for(int i=-640;i<700;i++){

        outtextxy(100,0,"MARVEL-DC CROSSOVER");
  arc(320+i,440,37,103,228);
  //delay(50);
  arc(680+i,440,77,143,228);
  arc(130+i,220,0,60,139);
  arc(870+i,220,120,180,139);
  line(200+i,100,420+i,100);
  line(201+i,101,421+i,101);
  line(202+i,102,422+i,102);
  line(203+i,103,423+i,103);
  line(580+i,100,800+i,100);
  line(579+i,101,799+i,101);
  line(578+i,102,798+i,102);
  line(577+i,103,797+i,103);
  arc(500+i,60,208,250,90);
 // /*arc(499,61,207,251,90);
 // arc(498,62,206,252,90);
 // arc(497,63,205,253,90);
 arc(500+i,60,290,332,90);
 // /*arc(501,61,289,333,90);
 // arc(502,62,288,334,90);
  //arc(503,63,287,335,90);
  line(470+i,142,480+i,100);
  line(530+i,142,520+i,100);
  line(480+i,100,490+i,120);
  line(520+i,100,510+i,120);
  arc(500+i,150,70,110,32);
  //delay(10);
  setactivepage(page);
  setvisualpage(1-page);
  cleardevice();
  if(i==699){
        setactivepage(page);
        setvisualpage(page);

        setcolor(15);
  outtextxy(100,0,"MARVEL-DC CROSSOVER");
  //setfillstyle(SOLID_FILL,WHITE);
    arc(320+i,440,37,103,228);
  arc(680+i,440,77,143,228);
  arc(130+i,220,0,60,139);
  arc(870+i,220,120,180,139);
  line(200+i,100,420+i,100);
  line(201+i,101,421+i,101);
  line(202+i,102,422+i,102);
  line(203+i,103,423+i,103);
  line(580+i,100,800+i,100);
  line(579+i,101,799+i,101);
  line(578+i,102,798+i,102);
  line(577+i,103,797+i,103);
  //setcolor(8);
  arc(500+i,60,208,250,90);
 // arc(499,61,207,251,90);
 // arc(498,62,206,252,90);
 // arc(497,63,205,253,90);
 arc(500+i,60,290,332,90);
 //  arc(501,61,289,333,90);
 // arc(502,62,288,334,90);
 // arc(503,63,287,335,90);
  line(470+i,146,480+i,100);
  //delay(5000);
  line(530+i,144,520+i,100);
  line(480+i,102,490+i,122);
  line(520+i,102,510+i,122);
  arc(500+i,150,68,112,32); //2++
  delay(500);
  setfillstyle(SOLID_FILL,7);
  floodfill(310+i,140,15);
  delay(1000);
  settextstyle(SCRIPT_FONT,HORIZ_DIR,8);
  outtextxy(700,320,"We fall, so that we can");
  delay(1000);
  setcolor(14);
  settextstyle(BOLD_FONT,HORIZ_DIR,8);
  outtextxy(1040,390,"LEARN");
  delay(1000);
  setcolor(15);
  settextstyle(SCRIPT_FONT,HORIZ_DIR,8);
  outtextxy(850,460,"To pick ourselves");
  delay(1000);
  setcolor(14);
  settextstyle(BOLD_FONT,HORIZ_DIR,8);
  outtextxy(1110,530,"UP");
  delay(1000);
  setcolor(15);
  settextstyle(BOLD_FONT,HORIZ_DIR,4);
  outtextxy(1300,570,"-BATMAN BEGINS");
  delay(1000);
  }
  }
  setactivepage(page);
        setvisualpage(page);
  setcolor(4);
  arc(700,400,182,205,332);//2++
  delay(500);
  arc(100,400,335,358,332);//2++
  delay(500);
  line(368,410,380,380);
  delay(500);
  line(432,410,420,380);
  delay(500);
  arc(770,450,176,211,441);
  delay(500);
  arc(800,400,180,215,494);
  delay(500);
  line(380,380,330,420);
  delay(500);
  line(306,398,320,400);
  delay(500);
  line(320,400,370,370);// note that end point
  delay(500);
  arc(30,450,329,4,441);
  delay(500);
  arc(0,400,325,0,494);
  delay(500);
  line(420,380,470,420);
  delay(500);
  line(494,400,480,400);
  delay(500);
  line(480,400,430,370);// note that too
  delay(500);
  arc(500,480,177,211,292);
  delay(500);
  arc(460,450,176,221,277);
  delay(500);
  line(185,431,208,446);//end
  delay(500);
  line(370,370,310,370);
  delay(500);
  line(310,370,206,468);
  delay(500);
  line(208,446,300,360);
  delay(500);
  line(300,360,366,350);// note that too
  delay(500);

  arc(300,480,329,3,292);
  delay(500);
  arc(340,450,319,4,277);
  delay(500);
  line(615,431,592,446);//end
  delay(500);
  line(430,370,490,370);
  delay(500);
  line(490,370,594,468);
  delay(500);
  line(592,446,500,360);
  delay(500);
  line(500,360,434,350);
  delay(500);

  arc(460,340,140,179,290);
  delay(500);
  arc(500,300,153,185,302);
  delay(500);
  line(366,350,316,320);
  delay(500);
  line(316,320,196,350);
  delay(500);
  line(196,350,168,332);
  delay(500);
  line(198,325,318,305);
  delay(500);
  line(318,305,365,320);//endpoint
  delay(500);

  arc(530,280,148,182,290);
  delay(500);
  arc(560,240,159,188,300);
  delay(500);
  line(365,320,336,280);
  delay(500);
  line(336,280,266,300);
  delay(500);

  line(266,300,238,288);
  delay(500);
  line(264,280,328,270);
  delay(500);
  line(328,270,350,274);
  delay(500);
  line(350,274,380,304);
  delay(500);

  arc(340,340,1,40,290);
  delay(500);
  arc(300,300,355,27,302);
  delay(500);
  line(434,350,484,320);
  delay(500);
  line(484,320,604,350);
  delay(500);
  line(604,350,632,332);
  delay(500);
  line(602,325,482,305);
  delay(500);
  line(482,305,435,320);//endpoint
  delay(500);

  arc(270,280,358,32,290);
  delay(500);
  arc(240,240,352,21,300);
  delay(500);
  line(435,320,464,280);
  delay(500);
  line(464,280,534,300);
  delay(500);
  line(534,300,560,288);
  delay(500);
  line(536,280,472,270);
  delay(500);
  line(472,270,450,274);
  delay(500);
  line(450,274,420,304);
  delay(500);

  line(380,304,422,304);
  delay(1000);
  setfillstyle(SOLID_FILL,RED);
    floodfill(415, 415, RED);
    delay(1000);
    settextstyle(BOLD_FONT,HORIZ_DIR,4);
  outtextxy(150,700,"Spidy, are you home yet?");
  int j=1600,k=1;
/*for(int i=-1500; i<=0;i++){

if(j+i==100){
    setcolor(k);
    k++;
    j=j-100;
}
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
  outtextxy(500+i,780,"programmed by: Wahid Sadique Koly");
  delay(0);
} */
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
setcolor(4);
outtextxy(500,780,"programmed by: Wahid Sadique Koly");


  //}
   getch();
   closegraph();
   return 0;
}
