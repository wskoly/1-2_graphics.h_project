#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
    POINT mouse;
    int page=0;
    initwindow(1550,850);
    for(;;)
    {
        setactivepage(page);
        setvisualpage(1-page);
        GetCursorPos(&mouse);
        setcolor(4);
        settextstyle(SIMPLEX_FONT,HORIZ_DIR,6);
        outtextxy(300,300,"click anywhere to start the game");
        // setactivepage(page);
        // setvisualpage(1-page);
        cleardevice();
        mouse.x=mouse.x-50;
        mouse.y=mouse.y-70;
        setcolor(4);
        circle(50+mouse.x,50+mouse.y,30);
        setfillstyle(SOLID_FILL,RED);
        floodfill(50+mouse.x, 78+mouse.y, 4);
        setcolor(15);
        circle(50+mouse.x,50+mouse.y,25);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(50+mouse.x, 73+mouse.y, 15);
        setcolor(4);
        circle(50+mouse.x,50+mouse.y,20);
        setfillstyle(SOLID_FILL,RED);
        floodfill(50+mouse.x, 68+mouse.y, 4);
        setcolor(15);
        circle(50+mouse.x,50+mouse.y,15);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(50+mouse.x, 63+mouse.y, 15);
        setcolor(0);
        circle(50+mouse.x,50+mouse.y,15);



        line(50+mouse.x,35+mouse.y,53+mouse.x,45+mouse.y);
        line(55+mouse.x,52+mouse.y,58+mouse.x,62+mouse.y);

        line(41+mouse.x,62+mouse.y,44+mouse.x,50+mouse.y);

        line(50+mouse.x,35+mouse.y,47+mouse.x,45+mouse.y);
        line(49+mouse.x,55+mouse.y,41+mouse.x,62+mouse.y);
        line(55+mouse.x,52+mouse.y,64+mouse.x,45+mouse.y);

        line(64+mouse.x,45+mouse.y,53+mouse.x,45+mouse.y);
        line(47+mouse.x,45+mouse.y,35+mouse.x,45+mouse.y);

        line(35+mouse.x,45+mouse.y,44+mouse.x,52+mouse.y);
        line(49+mouse.x,55+mouse.y,58+mouse.x,62+mouse.y);

        setfillstyle(SOLID_FILL,1);
        floodfill(49+mouse.x, 36+mouse.y, 0);

        setfillstyle(SOLID_FILL,1);
        floodfill(51+mouse.x, 36+mouse.y, 0);

        setfillstyle(SOLID_FILL,1);
        floodfill(36+mouse.x, 50+mouse.y, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(62+mouse.x, 50+mouse.y, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(50+mouse.x, 63+mouse.y, 0);
        delay(10);
        // page=1-page;
        setcolor(4);
        settextstyle(SIMPLEX_FONT,HORIZ_DIR,6);
        outtextxy(300,300,"click anywhere to start the game");
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            break;
        }
    }
    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();
    int i=-90,j=300;
    for(int k=0; k<=360; k++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        setcolor(4);
        settextstyle(10,HORIZ_DIR,8);
        outtextxy(100,0,"COLLECT THE VIBRANIUM SHIELDS");
        circle(500+j,500+i,300);
        setfillstyle(SOLID_FILL,RED);
        floodfill(500+j, 790+i, 4);
        setcolor(15);
        circle(500+j,500+i,250);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500+j, 745+i, 15);
        setcolor(4);
        circle(500+j,500+i,200);
        setfillstyle(SOLID_FILL,RED);
        floodfill(500+j, 695+i, 4);
        setcolor(15);
        circle(500+j,500+i,150);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500+j, 645+i, 15);
        setcolor(0);
        circle(500+j,500+i,150);



        line(500+j,350+i,530+j,454+i);
        line(554+j,520+i,588+j,621+i);

        line(412+j,621+i,446+j,520+i);

        line(500+j,350+i,470+j,454+i);
        line(498+j,556+i,412+j,621+i);
        line(554+j,520+i,642+j,454+i);

        line(642+j,454+i,530+j,454+i);
        line(470+j,454+i,358+j,454+i);

        line(358+j,454+i,446+j,522+i);
        line(498+j,556+i,588+j,621+i);
        setfillstyle(SOLID_FILL,1);
        floodfill(502+j, 355+i, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(498+j, 355+i, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(360+j, 470+i, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(420+j, 621+i, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(588+j, 618+i, 0);

        setcolor(7);
        arc(500+j,500+i,0,1+k,304);
        arc(500+j,500+i,0,1+k,305);
        arc(500+j,500+i,0,1+k,306);
        arc(500+j,500+i,0,1+k,307);
        arc(500+j,500+i,0,1+k,308);
        arc(500+j,500+i,0,1+k,309);
        arc(500+j,500+i,0,1+k,310);
        arc(500+j,500+i,0,1+k,311);
        arc(500+j,500+i,0,1+k,312);
        arc(500+j,500+i,0,1+k,313);
        arc(500+j,500+i,0,1+k,314);
        arc(500+j,500+i,0,1+k,315);

        delay(10);

        setcolor(4);
        circle(500+j,500+i,300);
        setfillstyle(SOLID_FILL,RED);
        floodfill(500+j, 790+i, 4);
        setcolor(15);
        circle(500+j,500+i,250);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500+j, 745+i, 15);
        setcolor(4);
        circle(500+j,500+i,200);
        setfillstyle(SOLID_FILL,RED);
        floodfill(500+j, 695+i, 4);
        setcolor(15);
        circle(500+j,500+i,150);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(500+j, 645+i, 15);
        setcolor(0);
        circle(500+j,500+i,150);



        line(500+j,350+i,530+j,454+i);
        line(554+j,520+i,588+j,621+i);

        line(412+j,621+i,446+j,520+i);

        line(500+j,350+i,470+j,454+i);
        line(498+j,556+i,412+j,621+i);
        line(554+j,520+i,642+j,454+i);

        line(642+j,454+i,530+j,454+i);
        line(470+j,454+i,358+j,454+i);

        line(358+j,454+i,446+j,522+i);
        line(498+j,556+i,588+j,621+i);
        setfillstyle(SOLID_FILL,1);
        floodfill(502+j, 355+i, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(498+j, 355+i, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(360+j, 470+i, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(420+j, 621+i, 0);
        setfillstyle(SOLID_FILL,1);
        floodfill(588+j, 618+i, 0);
        setcolor(YELLOW);
        settextstyle(5,HORIZ_DIR,8);
        outtextxy(680,730,"loading");

    }
    delay(2000);
    setactivepage(page);
    setvisualpage(page);
    cleardevice();

    POINT mouse1;
    //int page=0,i=0;
    //initwindow(1550,850);
    while(1)
    {
        setactivepage(page);
        setvisualpage(page);
        cleardevice();
        delay(2000);
        int x,y,count_speed=0, count_life=0,count_click=0,decrease_speed=0,c=0;
        while(1)
        {
            setactivepage(page);
            setvisualpage(page);
            setcolor(4);
            settextstyle(SIMPLEX_FONT,HORIZ_DIR,5);
            outtextxy(getmaxx()-200,100,"LIVES:");
            if(c>=1)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,300,getmaxx(),200);
            }
            else
            {
                setfillstyle(SOLID_FILL,1);
                bar(getmaxx()-200,300,getmaxx(),200);
            }
            if(c>=2)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,400,getmaxx(),300);
            }
            else
            {
                setfillstyle(SOLID_FILL,2);
                bar(getmaxx()-200,400,getmaxx(),300);
            }
            if(c>=3)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,500,getmaxx(),400);
            }
            else
            {
                setfillstyle(SOLID_FILL,3);
                bar(getmaxx()-200,500,getmaxx(),400);
            }
            if(c>=4)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,600,getmaxx(),500);
            }
            else
            {
                setfillstyle(SOLID_FILL,4);
                bar(getmaxx()-200,600,getmaxx(),500);
            }
            if(c>=5)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,700,getmaxx(),600);
            }
            else
            {
                setfillstyle(SOLID_FILL,5);
                bar(getmaxx()-200,700,getmaxx(),600);
            }
            if(c>=6)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,800,getmaxx(),700);
            }
            else
            {
                setfillstyle(SOLID_FILL,14);
                bar(getmaxx()-200,800,getmaxx(),700);
            }

            x=rand()%(getmaxx()-300);
            y=rand()%getmaxy();
            setcolor(4);
            circle(x,y,30);
            setfillstyle(SOLID_FILL,RED);
            floodfill(x, 28+y, 4);
            setcolor(15);
            circle(x,y,25);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x, 23+y, 15);
            setcolor(4);
            circle(x,y,20);
            setfillstyle(SOLID_FILL,RED);
            floodfill(x, 18+y, 4);
            setcolor(15);
            circle(x,y,15);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x, 13+y, 15);
            setcolor(0);
            circle(x,y,15);



            line(x,y-15,3+x,y-5);
            line(5+x,2+y,8+x,12+y);

            line(x-9,12+y,x-6,y);

            line(x,y-15,x-3,y-5);
            line(x-1,5+y,x-9,12+y);
            line(5+x,2+y,14+x,y-5);

            line(14+x,y-5,3+x,y-5);
            line(x-3,y-5,x-15,y-5);

            line(x-15,y-5,x-6,2+y);
            line(x-1,5+y,8+x,12+y);

            setfillstyle(SOLID_FILL,1);
            floodfill(x-1, y-14, 0);

            setfillstyle(SOLID_FILL,1);
            floodfill(1+x, y-14, 0);

            setfillstyle(SOLID_FILL,1);
            floodfill(x-14, y, 0);
            setfillstyle(SOLID_FILL,1);
            floodfill(12+x, y, 0);
            setfillstyle(SOLID_FILL,1);
            floodfill(x, 13+y, 0);
            delay(1500-decrease_speed);

            if(GetAsyncKeyState(VK_LBUTTON))
            {
                GetCursorPos(&mouse1);
                if((mouse1.x <(x+50) && mouse1.x >(x-50)) && (mouse1.y <(y+50) && mouse1.y >(y-50)))
                {
                    ++count_click;
                }

            }
            ++count_life;
            ++count_speed;
            if(count_speed==2 && decrease_speed<=2700)
            {
                decrease_speed=decrease_speed+100;
                count_speed=0;
            }
            c=count_life-count_click;
            if(count_life-count_click>5)
            {
                cleardevice();
                break;
            }
            cleardevice();
            setcolor(4);
            settextstyle(SIMPLEX_FONT,HORIZ_DIR,5);
            outtextxy(getmaxx()-200,100,"LIVES:");
            if(c>=1)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,300,getmaxx(),200);
            }
            else
            {
                setfillstyle(SOLID_FILL,1);
                bar(getmaxx()-200,300,getmaxx(),200);
            }
            if(c>=2)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,400,getmaxx(),300);
            }
            else
            {
                setfillstyle(SOLID_FILL,2);
                bar(getmaxx()-200,400,getmaxx(),300);
            }
            if(c>=3)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,500,getmaxx(),400);
            }
            else
            {
                setfillstyle(SOLID_FILL,3);
                bar(getmaxx()-200,500,getmaxx(),400);
            }
            if(c>=4)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,600,getmaxx(),500);
            }
            else
            {
                setfillstyle(SOLID_FILL,4);
                bar(getmaxx()-200,600,getmaxx(),500);
            }
            if(c>=5)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,700,getmaxx(),600);
            }
            else
            {
                setfillstyle(SOLID_FILL,5);
                bar(getmaxx()-200,700,getmaxx(),600);
            }
            if(c>=6)
            {
                setfillstyle(SOLID_FILL,0);
                bar(getmaxx()-200,800,getmaxx(),700);
            }
            else
            {
                setfillstyle(SOLID_FILL,14);
                bar(getmaxx()-200,800,getmaxx(),700);
            }
            delay(1000-(decrease_speed/2));

        }
        setcolor(4);
        settextstyle(SIMPLEX_FONT,HORIZ_DIR,8);
        outtextxy(500,500,"GAME OVER");
        delay(1000);
        char ae[50];
        sprintf(ae,"YOUR SCORE: %d",count_click*100);
        outtextxy(100,100,ae);
        setcolor(1);
        settextstyle(SIMPLEX_FONT,HORIZ_DIR,6);
        outtextxy(100,700,"Click right mouse button to exit");
        outtextxy(100,750,"or wait for 5 seconds to start over");
        delay(5000);
        if(GetAsyncKeyState(VK_RBUTTON))
        {
            cleardevice();
            setcolor(4);
            int i=-90,j=100;
            circle(500+j,500+i,300);
            setfillstyle(SOLID_FILL,RED);
            floodfill(500+j, 790+i, 4);
            setcolor(15);
            circle(500+j,500+i,250);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(500+j, 745+i, 15);
            setcolor(4);
            circle(500+j,500+i,200);
            setfillstyle(SOLID_FILL,RED);
            floodfill(500+j, 695+i, 4);
            setcolor(15);
            circle(500+j,500+i,150);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(500+j, 645+i, 15);
            setcolor(0);
            circle(500+j,500+i,150);



            line(500+j,350+i,530+j,454+i);
            line(554+j,520+i,588+j,621+i);

            line(412+j,621+i,446+j,520+i);

            line(500+j,350+i,470+j,454+i);
            line(498+j,556+i,412+j,621+i);
            line(554+j,520+i,642+j,454+i);

            line(642+j,454+i,530+j,454+i);
            line(470+j,454+i,358+j,454+i);

            line(358+j,454+i,446+j,522+i);
            line(498+j,556+i,588+j,621+i);
            setfillstyle(SOLID_FILL,1);
            floodfill(502+j, 355+i, 0);
            setfillstyle(SOLID_FILL,1);
            floodfill(498+j, 355+i, 0);
            setfillstyle(SOLID_FILL,1);
            floodfill(360+j, 470+i, 0);
            setfillstyle(SOLID_FILL,1);
            floodfill(420+j, 621+i, 0);
            setfillstyle(SOLID_FILL,1);
            floodfill(588+j, 618+i, 0);
            setcolor(4);
            settextstyle(SIMPLEX_FONT,HORIZ_DIR,8);
            outtextxy(700,700,"THANK YOU");
            break;

        }
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
