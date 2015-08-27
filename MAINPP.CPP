#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>


union REGS in,out;
int x,y,cl,mx,my,check=0,a=0,max,may,nxtxheck=0;
FILE *data,*data1;

char ch[20000];
char studentname[50],studentid[40];

//merit list...................
void meritlist();
void rank();

//Result
 FILE *fp;
  FILE *fp1;
  FILE *fp2;
 char name[100],id[30],subname1[50],subname2[50],subname3[50],subname4[50],subname5[50];
  float atmarks1,qzmarks1,fnmarks1,credit1,atmarks2,qzmarks2,fnmarks2,credit2,
  atmarks3,qzmarks3,fnmarks3,credit3,atmarks4,qzmarks4,fnmarks4,credit4,
  atmarks5,qzmarks5,fnmarks5,credit5,total1=0,total2=0,total3=0,total4=0,
  total5=0,gp1=0,gp2=0,gp3=0,gp4=0,gp5=0,tcgpa=0,lcgpa=0,cgpa=0,allcgpa=0,meancgpa=0,gpa11=0,count=0;



//Stucture  For Student Academic Information......

struct tazim
{
      char id1[30],name[50],id2[30];
      float num;
}var[30];

struct student{

char dp[50],id[50],name[50],sec[15],year[12],sem[20];

}std;

//Stucture  For Student Personal Information......
struct student1{

char name[50], id[50],sex[40],bday[40],blood[15],address[100],contact[50],mail[50],interest[200];

}std1;


void load_mouse_driver();
void unload_mouse_driver();

//result
void stresult();
void tgpa();
void savetresult();
void theorylab();
void lgpa();
void savelresult();
void add_result();
void search_result();
void rf_stresult();
void totalcgpa();

void aust();

void asi();   //ADD STUDENT INFORMATION
void sai();  //STUDENT ACADEMIC INFORMATION
void input_sai();
void save_sai();
void dis_sai();
void dis_spi();

void ref_sai();
void ref_spi();
void total_cgpa();
void dsi();
void spi();  //STUDENT  PERSONAL INFORMATION
void input_spi();
void save_spi();
void back();  //BACK IS CALLING  MAIN MENU
void print();
void next();


//graphics
void book_start();
void book_move();
void front1();
void forward_animation();
void back_animation();
void book_close();
void book_open();
void book_goaway();
void credit();
void quite();
void bookopen_image();



//Main Function Start...............................................................

void main()
  {

     int gd,gm,errorcode;
     gd=DETECT;
     initgraph(&gd,&gm,"C:\\tc\\bgi");
     errorcode=graphresult();
     if(errorcode!=grOk)
       {
	 printf("Error intializing\n");
	 exit(1);
       }

  max=getmaxx();
  may=getmaxy();
  mx=max/2;
  my=may/2;

   aust();
   book_start();
   book_move();
   book_open();
  // bookopen_image();
   front1();

}// Main Function End......





void aust()
{
 int i,x,y,cl,mx,my,check=0;
   mx=getmaxx()/2;
   my=getmaxy()/2;


      setcolor(WHITE);
      line(150,50,500,50);  // upore-
      line(250,400,400,400);//niche -
      line(150,50,150,300); //bame|
      line(500,50,500,300);  //dane|

      line(150,300,250,400);  //under \
      line(500,300,400,400); // under /

      setfillstyle(1,WHITE);
      floodfill(250,70,WHITE);

       setcolor(BLACK);
      line(160,130,490,130);// single line up...

      //up logo..

      line(300,55,350,55);//up _
      line(300,55,260,75);// /
      line(350,55,390,75); // \
      line(260,75,160,80);// /
      line(390,75,490,80);// \
      line(160,80,160,100);// left |
      line(490,80,490,100);// Right |
      line(160,100,490,100);//down  _

       setfillstyle(1,GREEN);
       floodfill(325,90,BLACK);


       //midle logo.....
	setcolor(BLACK);
       line(210,135,315,165);// left \
       line(210,135,210,280);// |
       line(315,165,315,250);//   |
       line(210,280,315,250);//  /

	setfillstyle(1,GREEN);
       floodfill(220,180,BLACK);


	setcolor(BLACK);
       line(335,165,440,135);// Right /
       line(335,165,335,250);// |
       line(440,135,440,280);//   |
       line(335,250,440,280);//  \

	setfillstyle(1,GREEN);
       floodfill(350,180,BLACK);

	 //AUST.......(midle)
	setcolor(6); //6
       line(160,135,205,135);// Left -
       line(160,135,160,290);// |
       line(205,135,205,285);//   |
       line(160,290,260,390);//  \
       line(205,285,265,345);//      \

       line(265,345,385,345);// down up-
       line(260,390,390,390);//  down down_


       line(445,135,490,135);//  Right -
       line(445,135,445,285);// |
       line(490,135,490,290);//    |
       line(445,285,385,345);//  /
       line(490,290,390,390);//     /

	setcolor(BLACK);
	settextstyle(16,0,16);
	outtextxy(177,146,"A");
	outtextxy(177,160,"H");
	outtextxy(177,174,"S");
	outtextxy(177,188,"A");
	outtextxy(177,202,"N");
	outtextxy(177,216,"U");
	outtextxy(177,230,"L");
	outtextxy(177,244,"L");
	outtextxy(177,258,"H");

	outtextxy(177,288,"U");
	outtextxy(186,296,"N");
	outtextxy(195,304,"I");
	outtextxy(204,313,"V");
	outtextxy(213,321,"E");
	outtextxy(222,329,"R");
	outtextxy(231,338,"S");
	outtextxy(240,346,"I");
	outtextxy(249,355,"T");
	outtextxy(258,365,"Y");




	outtextxy(320,365,"O F");



	outtextxy(385,365,"S");
	outtextxy(395,355,"C");
	outtextxy(405,345,"I");
	outtextxy(415,335,"E");
	outtextxy(425,325,"N");
	outtextxy(435,315,"C");
	outtextxy(445,305,"E");
	outtextxy(460,285,"&");



	outtextxy(460,260,"T");
	outtextxy(460,248,"E");
	outtextxy(460,236,"C");
	outtextxy(460,224,"H");
	outtextxy(460,212,"N");
	outtextxy(460,200,"O");
	outtextxy(460,188,"L");
	outtextxy(460,176,"O");
	outtextxy(460,164,"G");
	outtextxy(460,152,"Y");


	settextstyle(8,0,3);
	outtextxy(290,280,"1995");
	settextstyle(8,0,4);
	outtextxy(225,90,"A  U  S  T");



    setcolor(15);
    settextstyle(4,0,4);
    outtextxy(200,10,"Welcome to AUST");

    getch();
    cleardevice();


}





void book_start()
{
   int i,j;
   setbkcolor(0);

   for(i=0;i<=10;i++)
   {
    setcolor(0);
    rectangle(mx-((i*14)-15),my-((i*21)+12),mx+((i*14)+20),my+((i*21)-10));

    if(i!=0)
    {
    setfillstyle(1,4);
    bar(mx-((i*14)-14),my-((i*21)+11),mx+((i*14)+19),my+((i*21)-9));
    }
    setcolor(8);
    setlinestyle(0,0,1);
    bar3d(mx-(i*14),my-(i*21),mx+(i*14),my+(i*21),15,1);
    setfillstyle(1,15);
    if(i!=0)
    {
    floodfill(mx+((i*14)+1),my+((i*21)-5),8);
    floodfill(mx-((i*14)-5),my-((i*21)+3),8);
    delay(100);
    }

    setcolor(0);
    rectangle(mx-(i*14),my-(i*21),mx+(i*14+5),my+(i*21));
    if(i!=0)
    {
    setfillstyle(1,4);
    bar(mx-(i*14)+1,my-(i*21)+1,mx+(i*14+4),my+(i*21)-1);
    }

   }

   while(1)
   {
    setcolor(0);
    settextstyle(4,0,4);
    outtextxy(mx-65,my-150,"STUDENT");
    outtextxy(mx-120,my-110,"INFORMATION");
    outtextxy(mx-60,my-70,"SYSTEM");

    setcolor(15);
    settextstyle(0,0,1);
    outtextxy(mx-90,my+190,"Press any key to continue");
    delay(200);
    setcolor(4);
    outtextxy(mx-90,my+190,"Press any key to continue");
    delay(200);
    if(kbhit())
    {
    getchar();
    cleardevice();
    break;
    }
   }
 }





 void book_move()
 {
  int i,j;

     for(i=10,j=0;j<=10;i-=2,j+=2)
   {

     setcolor(14);
     rectangle(mx-(i*14-15),my-(210+11),mx+((140+j*14)+20),my+(210-10));
     setfillstyle(1,4);
     bar(mx-(i*14-16),my-(210+12),mx+((140+j*14)+19),my+(210-11));


    setcolor(8);
    setfillstyle(1,15);
    bar3d(mx-i*14,my-210,mx+(140+j*14),my+210,15,1);
    setfillstyle(1,15);
    floodfill(mx+(140+j*14+5),my+(210-10),8);
    floodfill(mx+(140+j*14)-2,my-210-5,8);
   // delay(100);

    setcolor(14);
   // rectangle(180,30,465,450);
    rectangle(mx-i*14,my-210,mx+(140+j*14+5),my+210);
    setfillstyle(1,4);
    bar(mx-i*14+1,my-210+1,mx+(140+j*14+4),my+209);
    line(mx+(140+j*14+6),my-210+1,mx+(140+j*14+6),my+209);
    delay(400);

     if(j!=10)
    {
    setfillstyle(1,0);
    bar(mx-i*14,my-225,mx+(140+j*14+35),my+210);
    }

  }



 }







//Main Menu.........................................................................................................

 void front1()
 {

 bookopen_image();

   int i,j,f,check=0;

   f=0;
   int ab=5;

  while(1)
  {
    setcolor(0);
    line(mx+1,my-170,mx+280,my-170);
    line(mx+50,my-209,mx+50,my+210);

    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(mx-260,my-150,"STUDENT");
    outtextxy(mx-260,my-80,"INFORMATION");
    outtextxy(mx-260,my-10,"SYSTEM");


    settextstyle(7,0,1);
    if(check==0)
    {
    if(f==2)setcolor(3);
    else  setcolor(0);
    outtextxy(mx+60,my-120,"Add student info");
    if(f==3)setcolor(3);
    else  setcolor(0);
    outtextxy(mx+60,my-90,"Dispaly student info");
    if(f==4)setcolor(3);
    else  setcolor(0);
    outtextxy(mx+60,my-60,"Edit student info");
    if(f==6)setcolor(3);
    else  setcolor(0);
    outtextxy(mx+60,my-30,"Student merit list");
    if(f==5)setcolor(3);
    else  setcolor(0);
    outtextxy(mx+60,my,"Credit");
    if(f==1)setcolor(3);
    else  setcolor(0);
    outtextxy(mx+60,my+30,"Exit");
    }
    if(ab==5)
    {
     load_mouse_driver();
     ab=10;
     }
    in.x.ax=3;
    int86(0x33,&in,&out);
    x=out.x.cx; // To get x coordinate
    y=out.x.dx; // To get y coordinate
    cl=out.x.bx; // 1/0 ; 1 for mouse click


    if(x>mx+60 && x<mx+100 && y>my+30 && y<my+55) //Exit
    {
    f=1;
    if(cl==1){
	 unload_mouse_driver();
	 cleardevice();
	 delay(200);
	 exit(1);
	}
    }

    else if(x>mx+60 && y>my-120 && x<mx+230 && y<my-95)//add
    {
    f=2;
    if(cl==1)
     {
      check=1;
      unload_mouse_driver();
      forward_animation();
      asi();
     }
    }

    else if(x>mx+60 && y>my-90 && x<mx+265 && y<my-65)//display
    {
    f=3;
    if(cl==1)
     {
       check=1;
       unload_mouse_driver();
       forward_animation();
       dsi();
	     }
    }

    else if(x>mx+60 && y>my-60 && x<mx+230 && y<my-30)//edit
    {
     f=4;
     if(cl==1)
      {
	unload_mouse_driver();
	cleardevice();
    //	 asie();

      }
     }

    else if(x>mx+60 && y>my && x<mx+110 && y<my+30)//credit
    {
     f=5;
      if(cl==1)
       {
	unload_mouse_driver();
	cleardevice();
	credit();
       }
     }
    else if(x>mx+60 && y>my-30 && x<mx+230 && y<my)//merit
    {
     f=6;
     if(cl==1)
       {
	unload_mouse_driver();
       //	cleardevice();
	forward_animation();
	meritlist();
       }

    }
     else f=0;


  }

}










//ADD STUDENT INFORMATION..............................................................................................

void asi()
{

   bookopen_image();

   int i,j,check=1;
   int f1=0;  int ab=5;

     setcolor(0);
    line(mx+1,my-170,mx+280,my-170);
    line(mx+50,my-209,mx+50,my+210);

    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(mx-260,my-150,"STUDENT");
    outtextxy(mx-260,my-80,"INFORMATION");
    outtextxy(mx-260,my-10,"SYSTEM");
    settextstyle(4,0,3);
    outtextxy(mx+80,my-200,"Add Student Info");

    while(1)
    {

    settextstyle(6,0,1);
    if(check==1)
    {
    if(f1==1) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+91,my-120+1,mx+260-1,my-75+1);
    outtextxy(mx+125,my-115,"Academic Info");


    if(f1==2) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+91,my-60+1,mx+260-1,my-15+1);
    outtextxy(mx+130,my-55,"Personal Info");


    if(f1==3) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+91,my-1,mx+260-1,my+45-1);
    outtextxy(mx+115,my+5,"Student Records");


    if(f1==4) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+91,my+60-1,mx+260-1,my+105-1);
    outtextxy(mx+115,my+65,"Academic Result");



    if(f1==5) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+230,my+155,mx+285,my+195);//back
    outtextxy(mx+240,my+160,"Back");


    setcolor(0);
    rectangle(mx+90,my-120,mx+260,my-75);
    rectangle(mx+90,my-60,mx+260,my-15);
    rectangle(mx+90,my,mx+260,my+45);
    rectangle(mx+90,my+60,mx+260,my+105);
    rectangle(mx+230,my+155,mx+285,my+195);//back

    delay(100);
    }


    in.x.ax=3;
    int86(0x33,&in,&out);
    x=out.x.cx; // To get x coordinate
    y=out.x.dx; // To get y coordinate
    cl=out.x.bx; // 1/0 ; 1 for mouse click
    if(ab==5)
    {
    load_mouse_driver();
    ab=10;
    }
    if(x>mx+90 && y>my-120 && x<mx+260 && y<my-75) //academic info
    {
    f1=1;
      if(cl==1)
      {
	unload_mouse_driver();
	cleardevice();
	      sai();
	       }
    }

    else if(x>mx+90 && y>my-60 && x<mx+260 && y<my-15)//personal info
    {
    f1=2;
       if(cl==1)
       {
	 unload_mouse_driver();
	 cleardevice();
	      spi();
		}
    }

    else if(x>mx+90 && y>my && x<mx+260 && y<my+45)//student records
    {
    f1=3;
    }

    else if(x>mx+90 && y>my+60 && x<mx+260 && y<my+105)//academic result
    {
     f1=4;
       if(cl==1){
       unload_mouse_driver();
		     forward_animation();
		     add_result();
		 }
     }

    else if(x>mx+230 && y>my+155 && x<mx+285 && y<my+195)//back
    {
     f1=5;
     if(cl==1)
     {
     unload_mouse_driver();
      back_animation();
      check=0;
      front1();
     }
    }

     else f1=0;

    //if(kbhit())break;

    }

}//function end









//DISPLAY STUDENT INFORMATION..............................................................................................

void dsi()
{

bookopen_image();
 int i,j,check=1;
   int f1=0;  int ab=5;

    setcolor(0);
    line(mx+1,my-170,mx+280,my-170);
    line(mx+50,my-209,mx+50,my+210);

    setcolor(1);
    settextstyle(4,0,4);
    outtextxy(mx-260,my-150,"STUDENT");
    outtextxy(mx-260,my-80,"INFORMATION");
    outtextxy(mx-260,my-10,"SYSTEM");
    settextstyle(7,0,1);
    settextstyle(4,0,3);
    outtextxy(mx+60,my-200,"Display Student Info");

    while(1)
    {

    settextstyle(6,0,1);
    if(check==1)
    {
    if(f1==1) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+91,my-120+1,mx+260-1,my-75+1);
    outtextxy(mx+125,my-115,"Academic Info");


    if(f1==2) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+91,my-60+1,mx+260-1,my-15+1);
    outtextxy(mx+130,my-55,"Personal Info");


    if(f1==3) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+91,my-1,mx+260-1,my+45-1);
    outtextxy(mx+115,my+5,"Result");


    if(f1==4) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+91,my+60-1,mx+260-1,my+105-1);
    outtextxy(mx+115,my+65,"Academic Result");



    if(f1==5) {setcolor(3);setfillstyle(1,1);}
    else  {setcolor(0);setfillstyle(1,3);}
    bar(mx+230,my+155,mx+285,my+195);//back
    outtextxy(mx+240,my+160,"Back");


    setcolor(0);
    rectangle(mx+90,my-120,mx+260,my-75);
    rectangle(mx+90,my-60,mx+260,my-15);
    rectangle(mx+90,my,mx+260,my+45);
    rectangle(mx+90,my+60,mx+260,my+105);
    rectangle(mx+230,my+155,mx+285,my+195);//back

    delay(100);
    }


    in.x.ax=3;
    int86(0x33,&in,&out);
    x=out.x.cx; // To get x coordinate
    y=out.x.dx; // To get y coordinate
    cl=out.x.bx; // 1/0 ; 1 for mouse click
    if(ab==5)
    {
    load_mouse_driver();
    ab=10;
    }

    if(x>mx+90 && y>my-120 && x<mx+260 && y<my-75) //academic info
    {
    f1=1;
      if(cl==1)
      {
	unload_mouse_driver();
	cleardevice();
	      dis_sai();
	       }
    }

    else if(x>mx+90 && y>my-60 && x<mx+260 && y<my-15)//personal info
    {
    f1=2;
       if(cl==1)
       {
	 unload_mouse_driver();
	 cleardevice();
	      dis_spi();
		}
    }

    else if(x>mx+90 && y>my && x<mx+260 && y<my+45)//student records
    {
    f1=3;
    total_cgpa();
    }

    else if(x>mx+90 && y>my+60 && x<mx+260 && y<my+105)//academic result
    {
     f1=4;
       if(cl==1){
		      unload_mouse_driver();
		     forward_animation();
		     search_result();
		 }
     }

    else if(x>mx+230 && y>my+155 && x<mx+285 && y<my+195)//back
    {
     f1=5;
     if(cl==1)
     {
     unload_mouse_driver();
      back_animation();
      check=0;
      front1();
     }
    }

     else f1=0;
    }

}//function end

//STUDENT ACADEMIC INFORMATION...........................................................................................

void sai()
{
int max,may,mx,my;
max=getmaxx();may=getmaxy();
mx=max/2;my=may/2;
setcolor(15);
settextstyle(4,0,5);
rectangle(75,35,595,85);
outtextxy(80,30,"Student Information System");
setcolor(15);
settextstyle(1,0,1);

outtextxy(mx-240,my-130,"Name:");
outtextxy(mx-240,my-100,"ID:");
outtextxy(mx-240,my-55,"Depertment:");
outtextxy(mx-240,my-20,"Year:");
outtextxy(mx-240,my+20,"Semestar:");
outtextxy(mx-240,my+60,"Section:");
outtextxy(mx-140,my+195,"Refresh");
outtextxy(mx-310,my+195,"Back");

//setlinestyle();

rectangle(mx-110,my-135,mx+65,my-105);
rectangle(mx-110,my-100,mx+65,my-70);
rectangle(mx-110,my-55,mx+65,my-25);
rectangle(mx-110,my-20,mx+65,my+10);
rectangle(mx-110,my+60,mx+65,my+90);
rectangle(mx-110,my+20,mx+65,my+50);

input_sai();

}




void ref_sai()
{
load_mouse_driver();
while(1)
{

int x,y,cl;


in.x.ax=3;
int86(0x33,&in,&out);

x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click


 if(kbhit())
 {
  unload_mouse_driver();
  break;
  }


else if(x>=mx-140 && x<=mx-75 && y>=my+195 && y<=my+220 && cl==1) //Refresh....
{
unload_mouse_driver();
cleardevice();
sai();
}

else if(x>=mx-310 && x<=mx-265 && y>=my+195 && y<=my+220 && cl==1)//Back...
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
asi();

}

}
}






//TAKING  DATA FOR STUDENT ACADEMIC INFORMATION..........................................................................

void input_sai()
{

//Name..............
ref_sai();

gotoxy(28,8);
gets(std.name);

ref_sai();

//ID............

gotoxy(28,10);
gets(std.id);

ref_sai();

gotoxy(28,13);
gets(std.dp);

ref_sai();


gotoxy(28,15);
gets(std.year);

ref_sai();


gotoxy(28,18);
gets(std.sem);

ref_sai();

gotoxy(28,20);
gets(std.sec);







outtextxy(mx+30,my+195,"Save");

load_mouse_driver();


while(1)
{
int x,y,cl;


in.x.ax=3;
int86(0x33,&in,&out);

x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click



if(x>=mx-140 && x<=mx-75 && y>=my+195 && y<=my+220 && cl==1) //Refreshing......
{

unload_mouse_driver();
cleardevice();
sai();

}
else if(x>=mx-310 && x<=mx-265 && y>=my+195 && y<=my+220 && cl==1)
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
asi();

}
else if(x>=mx+30 && x<=mx+70 && y>=my+195 && y<=my+220 && cl==1)
{
unload_mouse_driver();
cleardevice();
save_sai();
}

}//while loop end
}













//DATA SAVING IN FILE  FOR STUDENT ACADEMIC INFORMATION...........................................................................

void save_sai()
{


data=fopen("c:\\save.txt","a");



fprintf(data,"%s",std.id);
fprintf(data,"\n");
fprintf(data,"%s",std.name);
fprintf(data,"\n");
fprintf(data,"%s",std.id);
fprintf(data,"\n");
fprintf(data,"%s",std.dp);
fprintf(data,"\n");
fprintf(data,"%s",std.year);
fprintf(data,"\n");
fprintf(data,"%s",std.sem);
fprintf(data,"\n");
fprintf(data,"%s",std.sec);
fprintf(data,"\n");


fclose(data);
printf("\n\n\n\n\t\tDATA SAVED");
delay(400);
cleardevice();
sai();


}//function end











//DISPLAYING  STUDENT  ACADEMIC  INFORMATION...............................................................................

void dis_sai()
{

int CheckData=5;

setcolor(15);
 settextstyle(4,0,4);
 outtextxy(mx-200,my-210,"Student Academic Information");
 rectangle(mx-320,my-210,mx+325,my-160);


  settextstyle(1,0,1);
//int i=0;
rectangle(250,200,550,240);
rectangle(250,250,550,290);
//settextstyle(1,0,1);
outtextxy(100,200,"Student Name");
outtextxy(100,250,"Student ID");
rectangle(255,300,350,330);
outtextxy(275,305,"Search");
outtextxy(10,435,"Back");
outtextxy(400,435,"Menu");

load_mouse_driver();
while(1)
{
int x,y,cl;
in.x.ax=3;
int86(0x33,&in,&out);
x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click

 if(kbhit())
 {
  unload_mouse_driver();
  gotoxy(34,14);
  gets(studentname);
  gotoxy(34,17);
  gets(studentid);
  break;
  }

else if(x>=10 && x<=50 && y>=435 && y<=465 && cl==1) //Back....
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
dsi();
}

else if(x>=400 && x<=450 && y>=435 && y<=465 && cl==1)//Menu...
{
unload_mouse_driver();
cleardevice();
back();
}

}


load_mouse_driver();

while(1)
{
int x,y,cl;
in.x.ax=3;
int86(0x33,&in,&out);
x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click
if(x>=280 && x<=350 && y>=305 && y<=330 && cl==1) //Search........
 {
  unload_mouse_driver();
  cleardevice();
  break;
  }

if(x>=10 && x<=50 && y>=435 && y<=465 && cl==1) //Back....
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
dsi();
}

else if(x>=395 && x<=450 && y>=435 && y<=465 && cl==1)//Menu...
{
unload_mouse_driver();
cleardevice();
back();

}

}

data=fopen("c:\\save.txt","r");

while(!feof(data))
{

  fscanf(data,"%s",&ch);


   if(strcmp(studentid,ch)==0)
   {
      fscanf(data,"%s",&ch);




    gotoxy(50,8);
     printf("%s",ch);
     fscanf(data,"%s",ch);
    gotoxy(50,11);
     printf("%s",ch);
     fscanf(data,"%s",ch);
    gotoxy(50,15);
     printf("%s",ch);
     fscanf(data,"%s",ch);

    gotoxy(50,18);
     printf("%s",ch);
     fscanf(data,"%s",ch);
    gotoxy(50,21);
     printf("%s",ch);
      fscanf(data,"%s",ch);
    gotoxy(50,24);
     printf("%s",ch);


      CheckData=10;

  break;
  }

}

fclose(data);

if(CheckData==5)
{
printf("\n\n\n\t\tNo Data Found!!");
delay(200);
cleardevice();
dis_sai();
}
else
{
     setcolor(15);
     settextstyle(4,0,5);
     rectangle(50,35,635,85);
     outtextxy(80,30,"Student Academic Information");
     setcolor(15);
     settextstyle(4,0,5);
     rectangle(50,35,635,85);
     outtextxy(80,30,"Student Academic Information");
     setcolor(15);
     settextstyle(1,0,1);
     outtextxy(mx-200,my-130,"Student Name");
     outtextxy(mx-200,my-80,"Student ID");
     outtextxy(mx-200,my-30,"Depertment");
     outtextxy(mx-200,my+20,"Year");
     outtextxy(mx-200,my+70,"Semestar");
     outtextxy(mx-200,my+120,"Section");

     rectangle(50,100,635,400);
     rectangle(50,150,635,150);
     rectangle(50,200,635,200);
     rectangle(50,250,635,250);
     rectangle(50,300,635,300);
     rectangle(50,350,635,350);

     rectangle(325,100,325,400);



    }
outtextxy(10,435,"Back");
outtextxy(400,435,"Menu");


load_mouse_driver();
while(1)
{
int x,y,cl;
in.x.ax=3;
int86(0x33,&in,&out);
x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click

if(x>=10 && x<=50 && y>=435 && y<=465 && cl==1) //Back....
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
dsi();
}

else if(x>=395 && x<=450 && y>=435 && y<=465 && cl==1)//Menu...
{
unload_mouse_driver();
cleardevice();
back();

}

}

}









//STUDENT  PERSONAL  INFORMATION..................................................................................
void spi()
{

setcolor(15);
settextstyle(4,0,5);
rectangle(mx-245,my-205,mx+275,my-155);
outtextxy(mx-240,my-210,"Student Information System");
setcolor(15);
settextstyle(1,0,1);
outtextxy(mx-240,my-130,"Name:");
outtextxy(mx-240,my-100,"ID:");
outtextxy(mx-240,my-55,"Sex:");
outtextxy(mx-10,my-60,"Interest:");
outtextxy(mx-240,my-20,"Birthday:");
outtextxy(mx-10,my-20,"Address:");
outtextxy(mx-240,my+20,"Blood:");
outtextxy(mx-240,my+60,"Contact No:");
outtextxy(mx-240,my+100,"Email ID:");
outtextxy(mx-140,my+195,"Refresh");
outtextxy(mx-310,my+195,"Back");

rectangle(mx-180,my-135,mx-20,my-105);
rectangle(mx-180,my-100,mx-20,my-70);
rectangle(mx-125,my-55,mx-20,my-25);
rectangle(mx+90,my-56,mx+180,my-30);
rectangle(mx-125,my-20,mx-20,my+10);
rectangle(mx+90,my-20,mx+180,my+10);
rectangle(mx-110,my+20,mx+110,my+50);
rectangle(mx-110,my+60,mx+110,my+90);
rectangle(mx-110,my+105,mx+110,my+135);


input_spi();

}





void ref_spi()
{
load_mouse_driver();

while(1)
{


int x,y,cl;


in.x.ax=3;
int86(0x33,&in,&out);

x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click


if(kbhit())
 {
   unload_mouse_driver();
   break;
  }

else if(x>=mx-140 && x<=mx-75 && y>=my+195 && y<=my+220 && cl==1) //refresh
{
unload_mouse_driver();
cleardevice();
spi();
}
else if(x>=mx-310 && x<=mx-265 && y>=my+195 && y<=my+220 && cl==1)//back
{
check=0;
unload_mouse_driver();
cleardevice();
bookopen_image();
asi();

}

}

}



//kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk



//TAKING INPUT FOR STUDENT PERSONAL INFORMATION....................................................................
void input_spi()
{

ref_spi();

gotoxy(20,8);
gets(std1.name);
ref_spi();

gotoxy(20,10);
gets(std1.id);
ref_spi();
gotoxy(26,13);
gets(std1.sex);
ref_spi();
gotoxy(26,15);
gets(std1.bday);
ref_spi();
gotoxy(28,18);
gets(std1.blood);
ref_spi();
gotoxy(28,20);
gets(std1.contact);
ref_spi();
gotoxy(28,23);
gets(std1.mail);
ref_spi();
gotoxy(54,13);
gets(std1.interest);
ref_spi();
gotoxy(54,15);
gets(std1.address);


outtextxy(mx+30,my+195,"Save");

load_mouse_driver();

while(1)
{
int x,y,cl;


in.x.ax=3;
int86(0x33,&in,&out);

x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click



if(x>=mx-140 && x<=mx-75 && y>=my+195 && y<=my+220 && cl==1) //Refreshing......
{

unload_mouse_driver();
cleardevice();
spi();

}
else if(x>=mx-310 && x<=mx-265 && y>=my+195 && y<=my+220 && cl==1)
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
asi();

}
else if(x>=mx+30 && x<=mx+70 && y>=my+195 && y<=my+220 && cl==1)//save
{
unload_mouse_driver();
cleardevice();
save_spi();
}
}//while loop end
}









//DATA SAVING  FOR STUDENT PERSONAL INFORMATION................................................................

void save_spi()
{

data1=fopen("c:\\savespi.txt","a");




fprintf(data1,"%s\n",std1.id);
fprintf(data1,"%s\n",std1.name);
fprintf(data1,"%s\n",std1.id);
fprintf(data1,"%s\n",std1.sex);
fprintf(data1,"%s\n",std1.bday);
fprintf(data1,"%s\n",std1.blood);
fprintf(data1,"%s\n",std1.contact);
fprintf(data1,"%s\n",std1.mail);
fprintf(data1,"%s\n",std1.interest);
fprintf(data1,"%s\n",std1.address);

fclose(data1);
printf("\n\n\n\t\tDATA SAVED");
delay(200);
cleardevice();
spi();

}//function end










//...........................................................................................................


void dis_spi()
{
int CheckData=5;


setcolor(15);
 settextstyle(4,0,4);
 outtextxy(mx-200,my-210,"Student Personal Information");
 rectangle(mx-320,my-210,mx+325,my-160);


  settextstyle(1,0,1);
//int i=0;
rectangle(250,200,550,240);
rectangle(250,250,550,290);
//settextstyle(1,0,1);
outtextxy(100,200,"Student Name");
outtextxy(100,250,"Student ID");
rectangle(255,300,350,330);
outtextxy(275,305,"Search");
outtextxy(10,435,"Back");
outtextxy(400,435,"Menu");

load_mouse_driver();
while(1)
{
int x,y,cl;
in.x.ax=3;
int86(0x33,&in,&out);
x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click

 if(kbhit())
 {
  unload_mouse_driver();
  gotoxy(34,14);
  gets(studentname);
  gotoxy(34,17);
  gets(studentid);
  break;
  }

else if(x>=10 && x<=50 && y>=435 && y<=465 && cl==1) //Back....
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
dsi();
}

else if(x>=395 && x<=450 && y>=435 && y<=465 && cl==1)//Menu...
{
unload_mouse_driver();
cleardevice();
back();

}

}


load_mouse_driver();

while(1)
{
int x,y,cl;
in.x.ax=3;
int86(0x33,&in,&out);
x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click
 if(x>=255 && x<=350 && y>=300 && y<=330 && cl==1) //Search........
 {
  unload_mouse_driver();
  cleardevice();
  break;
  }

if(x>=10 && x<=50 && y>=430 && y<=460 && cl==1) //Back....
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
dsi();
}

else if(x>=395 && x<=450 && y>=430 && y<=460 && cl==1)//Menu...
{
unload_mouse_driver();
cleardevice();
back();

}

}

data1=fopen("c:\\savespi.txt","r");

while(!feof(data1))
{

  fscanf(data1,"%s\n",&ch);

   if(strcmp(studentid,ch)==0)
   {



     fscanf(data1,"%s\n",&ch);    //Name...
     outtextxy(370,74,ch);

     fscanf(data1,"%s\n",ch); //Id
     outtextxy(370,114,ch);

     fscanf(data1,"%s\n",ch); //sex
     outtextxy(370,154,ch);

     fscanf(data1,"%s\n",ch);   //birthday
     outtextxy(370,194,ch);

     fscanf(data1,"%s\n",ch);   //blood group
     outtextxy(370,234,ch);

      fscanf(data1,"%s\n",ch);   //contact
      outtextxy(370,274,ch);

      fscanf(data1,"%s\n",ch);   //email
       outtextxy(370,310,ch);

      fscanf(data1,"%s\n",ch);   //interest
      outtextxy(370,350,ch);



      fscanf(data1,"%s\n",ch);   //address
      outtextxy(370,390,ch);


      CheckData=10;

  break;
  }

}

fclose(data1);

if(CheckData==5)
{
printf("\n\n\n\t\tNo Data Found!!");
delay(350);
cleardevice();
dis_spi();
}


else{
     setcolor(15);
     settextstyle(4,0,5);
     rectangle(5,5,635,60);
     outtextxy(25,7,"Student Personal Information");
     setcolor(15);
     settextstyle(1,0,1);
     outtextxy(mx-235,my-170,"Student Name");
     outtextxy(mx-235,my-130,"Student ID");
     outtextxy(mx-235,my-90,"Sex");
     outtextxy(mx-235,my-50,"Birthday");
     outtextxy(mx-235,my-10,"Blood Group");
     outtextxy(mx-235,my+30,"Contact No");
     outtextxy(mx-235,my+70,"Email Address");
     outtextxy(mx-235,my+110,"Interest");
     outtextxy(mx-235,my+150,"Address:");

     rectangle(5,65,635,430);

     rectangle(5,105,635,105);
     rectangle(5,145,635,145);
     rectangle(5,185,635,185);
     rectangle(5,225,635,225);
     rectangle(5,265,635,265);
     rectangle(5,305,635,305);
     rectangle(5,345,635,345);
     rectangle(5,385,635,385);

     rectangle(315,65,315,430);

 }

outtextxy(10,435,"Back");
outtextxy(400,435,"Menu");


load_mouse_driver();
while(1)
{
int x,y,cl;
in.x.ax=3;
int86(0x33,&in,&out);
x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click

if(x>=10 && x<=50 && y>=430 && y<=460 && cl==1) //Back....
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
dsi();
}

else if(x>=395 && x<=450 && y>=430 && y<=460 && cl==1)//Menu...
{
unload_mouse_driver();
cleardevice();
back();

}

}

}







//result function.....................

void search_result()
{
	    int f2=0;check=2;


	    while(1)
	    {
	     setcolor(1);
	   settextstyle(4,0,4);
	    outtextxy(mx-260,my-150,"STUDENT");
	   outtextxy(mx-260,my-80,"INFORMATION");
	   outtextxy(mx-260,my-10,"SYSTEM");
	    settextstyle(4,0,3);
	    outtextxy(mx+100,my-200,"Display Result");


	    setcolor(0);
	    line(mx+1,my-170,mx+280,my-170);
	    line(mx+50,my-209,mx+50,my+210);
	    settextstyle(1,0,1);



	    if(check==2)
	    {
	    if(f2==1) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-150,"Year 1 Semester 1");
	    if(f2==2) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-120,"Year 1 Semester 2");
	    if(f2==3) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-90,"Year 2 Semester 1");
	    if(f2==4) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-60,"Year 2 Semester 2");
	    if(f2==5) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-30,"Year 3 Semester 1");
	    if(f2==6) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my,"Year 3 Semester 2");
	    if(f2==7) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my+30,"Year 4 Semester 1");
	    if(f2==8) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my+60,"Year 4 Semester 2");
	    if(f2==9) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+230,my+160,"Back");
	    }


	    load_mouse_driver();


			in.x.ax=3;
			int86(0x33,&in,&out);

			x=out.x.cx;      // To get x coordinate
			y=out.x.dx;      // To get y coordinate
			cl=out.x.bx;     // 1/0 ; 1 for mouse click

			setcolor(15);
			if(x>=mx+60 && x<=mx+230 && y>=my-150 && y<=my-120) //checking if the mouse inside the rectangale and the user click on it...
				{
				     f2=1;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=11;
				     print();
				}
				}
			else if(x>=mx+60 && x<=mx+230 && y>=my-120 && y<=my-90 )
				{
				     f2=2;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=12;
				    print();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-90 && y<=my-60 )
				{
				     f2=3;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=21;
				     print();
				    }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-60 && y<=my-30 )
				{
				     f2=4;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=22;
				     print();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-30 && y<=my)
				{
				     f2=5;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=31;
				     print();
				    }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my && y<=my+30)
				{
				     f2=6;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=32;
				     print();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my+30 && y<=my+60)
				{
				     f2=7;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=41;
				     print();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my+60 && y<=my+90)
				{
				     f2=8;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=42;
				     print();

				     }
				}
		else if(x>=mx+230 && y>=my+160 && x<=mx+270 && y<=my+190)
				{
				 f2=9;
				 if(cl==1)
				 {
				  check=1;
				  back_animation();
				  dsi();
				 }
				}

		else f2=0;
		}



}




void print(){
int rem=5,nxtcheck=0;
setcolor(15);
 settextstyle(4,0,4);
 outtextxy(mx-200,my-210,"Student Academic Result");
 rectangle(mx-320,my-210,mx+325,my-160);


  settextstyle(1,0,1);
//int i=0;
rectangle(250,200,550,240);
rectangle(250,250,550,290);
//settextstyle(1,0,1);
outtextxy(100,200,"Student Name");
outtextxy(100,250,"Student ID");
rectangle(255,300,350,330);
outtextxy(275,305,"Search");
outtextxy(10,435,"Back");
outtextxy(400,435,"Menu");


load_mouse_driver();
while(1)
{
int x,y,cl;
in.x.ax=3;
int86(0x33,&in,&out);
x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click

 if(kbhit())
 {
  unload_mouse_driver();
  gotoxy(34,14);
  gets(studentname);
  gotoxy(34,17);
  gets(studentid);
  break;
  }

else if(x>=10 && x<=50 && y>=435 && y<=465 && cl==1) //Back....
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
dsi();
}

else if(x>=400 && x<=450 && y>=435 && y<=465 && cl==1)//Menu...
{
unload_mouse_driver();
cleardevice();
back();
}

}

load_mouse_driver();

while(1)
{
int x,y,cl;
in.x.ax=3;
int86(0x33,&in,&out);
x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click
 if(x>=275 && x<=350 && y>=305 && y<=330 && cl==1) //Search........
 {
  unload_mouse_driver();
  cleardevice();
  break;
  }

if(x>=10 && x<=50 && y>=430 && y<=460 && cl==1) //Back....
{
check=1;
unload_mouse_driver();
cleardevice();
bookopen_image();
dsi();
}

else if(x>=395 && x<=450 && y>=430 && y<=460 && cl==1)//Menu...
{
unload_mouse_driver();
cleardevice();
back();

}

}


//cleardevice();

if(a==11)    fp=fopen("c:\\save11.txt","r");
else if(a==12)   fp=fopen("c:\\save12.txt","r");
else if(a==21)   fp=fopen("c:\\save21.txt","r");
else if(a==22)   fp=fopen("c:\\save22.txt","r");
else if(a==31)   fp=fopen("c:\\save31.txt","r");
else if(a==32)   fp=fopen("c:\\save32.txt","r");
else if(a==41)   fp=fopen("c:\\save41.txt","r");
else if(a==42)   fp=fopen("c:\\save42.txt","r");


while(!feof(fp)){

fscanf(fp,"%s",&ch);
if(strcmp(studentid,ch)==0){

   rem=10;


    gotoxy(31,2);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);



     gotoxy(5,12);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,12);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,12);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,12);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,12);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,12);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,12);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);



       gotoxy(5,15);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,15);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,15);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,15);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,15);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,15);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,15);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);



       gotoxy(5,18);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,18);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,18);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,18);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,18);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,18);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,18);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);




       gotoxy(5,21);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,21);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,21);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,21);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,21);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,21);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,21);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);


       gotoxy(5,24);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,24);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,24);
     fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,24);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,24);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,24);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,24);
    fscanf(fp,"%s",&ch);
     printf("%s",ch);


      break;
    }

}
	       fclose(fp);

if(rem==5)
{
printf("\n\n\n\tData not Found!") ;

delay(200);
cleardevice();
print();
}



else{
   settextstyle(3,0,2);
     rectangle(440,5,635,80);
     setcolor(BLUE);
     outtextxy(480,15,"RESULT  FOR");
     outtextxy(475,45,"THEORY  EXAM");

     setcolor(15);
     rectangle(5,5,425,80);
     rectangle(5,42,425,42);
     rectangle(200,5,200,80);
     settextstyle(3,0,1);
     outtextxy(30,10,"Student Name");
     outtextxy(30,45,"Student ID");


     outtextxy(12,93,"Subject");
     outtextxy(14,117,"Name");
     outtextxy(115,93,"Attendence");
     outtextxy(135,117,"Mark");
     outtextxy(245,93,"Quiz");
     outtextxy(245,117,"Mark");
     outtextxy(338,93,"Final");
     outtextxy(338,117,"Mark");
     outtextxy(418,93,"Total");
     outtextxy(422,117,"Mark");
     outtextxy(490,110,"Credit");
     outtextxy(575,110,"GPA");




     rectangle(5,90,635,400);


     rectangle(5,150,635,150);
     rectangle(5,200,635,200);
     rectangle(5,250,635,250);
     rectangle(5,300,635,300);
     rectangle(5,350,635,350);



     rectangle(110,90,110,400);
     rectangle(215,90,215,400);
      rectangle(320,90,320,400);
       rectangle(399,90,399,400);
       rectangle(477,90,477,400);
       rectangle(556,90,556,400);

     rectangle(270,420,370,460);
     settextstyle(3,0,2);
     setcolor(RED);
     outtextxy(285,425,"NEXT>>");

}

load_mouse_driver();
 while(1)
       {
	int x,y,cl;
	in.x.ax=3;
	int86(0x33,&in,&out);

	x=out.x.cx;      // To get x coordinate
	y=out.x.dx;      // To get y coordinate
	cl=out.x.bx;

	if(x>=270 && x<=370 && y>=420 && y<=460 && cl==1) //Next
	 {
	   if(nxtcheck==0)
	   {
	   unload_mouse_driver();
	   cleardevice();
	   next();
	   }
	 }
       }


}

void next()
{

int rem=5,nxtcheck=1;

if(a==11) fp1=fopen("c:\\lab11.txt","r");
else if(a==12) fp1=fopen("c:\\lab12.txt","r");
else if(a==21) fp1=fopen("c:\\lab21.txt","r");
else if(a==22) fp1=fopen("c:\\lab22.txt","r");
else if(a==31) fp1=fopen("c:\\lab31.txt","r");
else if(a==32) fp1=fopen("c:\\lab32.txt","r");
else if(a==41) fp1=fopen("c:\\lab41.txt","r");
else if(a==42) fp1=fopen("c:\\lab42.txt","r");

while(!feof(fp1)){

fscanf(fp1,"%s",&ch);
if(strcmp(studentid,ch)==0){

   rem=10;

    gotoxy(31,2);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);



     gotoxy(5,12);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,12);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,12);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,12);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,12);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,12);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,12);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);



       gotoxy(5,15);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,15);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,15);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,15);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,15);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,15);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,15);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);



       gotoxy(5,18);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,18);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,18);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,18);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,18);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,18);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,18);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);




       gotoxy(5,21);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,21);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,21);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,21);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,21);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,21);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,21);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);


       gotoxy(5,24);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(18,24);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(32,24);
     fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(43,24);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
    gotoxy(52,24);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(63,24);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);
     gotoxy(73,24);
    fscanf(fp1,"%s",&ch);
     printf("%s",ch);


      break;
}
}

fclose(fp1);

if(rem==5)
{
printf("\n\n\n\tData not Found!") ;
delay(200);
cleardevice();
print();
}

else{
   settextstyle(3,0,2);
      setcolor(15);
     rectangle(440,5,635,80);
     setcolor(BLUE);
     outtextxy(480,15,"RESULT  FOR");
     outtextxy(480,45,"LAB   EXAM");

     setcolor(15);
     rectangle(5,5,425,80);
     rectangle(5,42,425,42);
     rectangle(200,5,200,80);
     settextstyle(3,0,1);
     outtextxy(30,10,"Student Name");
     outtextxy(30,45,"Student ID");


     outtextxy(12,93,"Subject");
     outtextxy(14,117,"Name");
     outtextxy(115,93,"Attendence");
     outtextxy(135,117,"Mark");
     outtextxy(245,93,"Quiz");
     outtextxy(245,117,"Mark");
     outtextxy(338,93,"Final");
     outtextxy(338,117,"Mark");
     outtextxy(418,93,"Total");
     outtextxy(422,117,"Mark");
     outtextxy(490,110,"Credit");
     outtextxy(575,110,"GPA");



     rectangle(5,90,635,400);


     rectangle(5,150,635,150);
     rectangle(5,200,635,200);
     rectangle(5,250,635,250);
     rectangle(5,300,635,300);
     rectangle(5,350,635,350);



     rectangle(110,90,110,400);
     rectangle(215,90,215,400);
      rectangle(320,90,320,400);
       rectangle(399,90,399,400);
       rectangle(477,90,477,400);
       rectangle(556,90,556,400);

     rectangle(270,420,370,460);
     settextstyle(3,0,2);
     setcolor(RED);
     outtextxy(285,425,"NEXT>>");


}

delay(3000);
load_mouse_driver();
 while(1)
       {
	int x,y,cl;
	in.x.ax=3;
	int86(0x33,&in,&out);

	x=out.x.cx;      // To get x coordinate
	y=out.x.dx;      // To get y coordinate
	cl=out.x.bx;

	if(x>=270 && x<=370 && y>=420 && y<=460) //Next
	 {
	   if(cl==1) nxtcheck=1;
	   if(nxtcheck==1)
	   {
	   unload_mouse_driver();
	   cleardevice();
	   totalcgpa();
	   }
	 }


}

}


void totalcgpa(){

int rem=5;

if(a==11)  fp2=fopen("c:\\cgpa11.txt","r");
else if(a==12)   fp2=fopen("c:\\cgpa12.txt","r");
else if(a==21)   fp2=fopen("c:\\cgpa21.txt","r");
else if(a==22)   fp2=fopen("c:\\cgpa22.txt","r");
else if(a==31)   fp2=fopen("c:\\cgpa31.txt","r");
else if(a==32)   fp2=fopen("c:\\cgpa32.txt","r");
else if(a==41)   fp2=fopen("c:\\cgpa41.txt","r");
else if(a==42)   fp2=fopen("c:\\cgpa42.txt","r");


while(!feof(fp2)){

fscanf(fp2,"%s",&ch);
if(strcmp(studentid,ch)==0){

   rem=10;



    gotoxy(46,14);
    fscanf(fp2,"%s",&ch);
   printf("%s",ch);
    gotoxy(46,20);
   fscanf(fp2,"%s",&ch);
    printf("%s",ch);
    gotoxy(46,25);
     fscanf(fp2,"%s",&ch);
    printf("%s",ch);

   // break;
}
}
fclose(fp2);

if(rem==5)
{
printf("\n\n\n\tData not Found!") ;

delay(200);
print();
}


else{
   setcolor(15);
     rectangle(135,70,500,440);

     rectangle(135,163,500,163);
     rectangle(135,255,500,255);
     rectangle(135,347,500,347);

     rectangle(317,163,317,440);

     settextstyle(3,0,1);
     setcolor(GREEN);
     outtextxy(175,200,"Student Name");
     outtextxy(175,290,"Student ID");
     outtextxy(175,370,"CGPA");


	int f=1;
     int v=1;
    while(1){

     if(f==1)
     {
	settextstyle(10,0,1);
	 setcolor(MAGENTA);
	 outtextxy(145,100,"GRADE");
	  delay(1000);
	 setcolor(BLUE);
	 outtextxy(252,100,"POINT");
	 delay(1000);
	 setcolor(RED);
	 outtextxy(347,100,"AVARAGE");
	 delay(1000);
	 setcolor(0);
	 outtextxy(145,100,"GRADE");
	 setcolor(0);
	 outtextxy(252,100,"POINT");
	 setcolor(0);
	 outtextxy(347,100,"AVARAGE");

	 f=2;
     }
     settextstyle(10,0,1);
    setcolor(v);
     outtextxy(145,100,"GRADE POINT AVARAGE");
     delay(200);
     v++;
     if(v>14)
     v=1;
	if(kbhit())
	{
      cleardevice();
      bookopen_image();
      front1();
       }


     }




}

     while(1){
     if(kbhit())
	{
      cleardevice();
      bookopen_image();
      front1();
       }
     }


}







//Result.......................
void add_result()
{
	    bookopen_image();
	    int f2=0;check=2; int ab=5;
	    mx=getmaxx()/2;my=getmaxy()/2;

	    while(1)
	    {
	     setcolor(1);
	   settextstyle(4,0,4);
	    outtextxy(mx-260,my-150,"STUDENT");
	   outtextxy(mx-260,my-80,"INFORMATION");
	   outtextxy(mx-260,my-10,"SYSTEM");
	    settextstyle(4,0,3);
	    outtextxy(mx+100,my-200,"Add Result");


	    setcolor(0);
	    line(mx+1,my-170,mx+280,my-170);
	    line(mx+50,my-209,mx+50,my+210);
	    settextstyle(1,0,1);



	    if(check==2)
	    {
	    if(f2==1) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-150,"Year 1 Semester 1");
	    if(f2==2) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-120,"Year 1 Semester 2");
	    if(f2==3) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-90,"Year 2 Semester 1");
	    if(f2==4) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-60,"Year 2 Semester 2");
	    if(f2==5) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-30,"Year 3 Semester 1");
	    if(f2==6) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my,"Year 3 Semester 2");
	    if(f2==7) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my+30,"Year 4 Semester 1");
	    if(f2==8) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my+60,"Year 4 Semester 2");
	    if(f2==9) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+230,my+160,"Back");
	    }

	    if(ab==5)
	    {
	    load_mouse_driver();
	     ab=10;
	     }

			in.x.ax=3;
			int86(0x33,&in,&out);

			x=out.x.cx;      // To get x coordinate
			y=out.x.dx;      // To get y coordinate
			cl=out.x.bx;     // 1/0 ; 1 for mouse click



			if(x>=mx+60 && x<=mx+230 && y>=my-150 && y<=my-120) //checking if the mouse inside the rectangale and the user click on it...
				{
				   f2=1;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=11;

				     forward_animation();
				     cleardevice();
				     bookopen_image();
				     theorylab();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-120 && y<=my-90)
				{
				  f2=2;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				      a=12;

				      forward_animation();
				     theorylab();
				     delay(500);
				     exit(1);
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-90 && y<=my-60)
				{
				    f2=3;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=21;

				     theorylab();
				     delay(500);
				     exit(1);
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-60 && y<=my-30)
				{
				     f2=4;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=22;

				     theorylab();
				     delay(500);
				     exit(1);
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-30 && y<=my)
				{
				    f2=5;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=31;

				     theorylab();
				     //saveresult();
				    // fclose(fp);
				     delay(500);
				    exit(1);
				    }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my && y<=my+30)
			       {
				     f2=6;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=32;

				     theorylab();
				     //saveresult();
				     //fclose(fp);
				     delay(500);
				     exit(1);
				    }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my+30 && y<=my+60)
				{
				     f2=7;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=41;
				     theorylab();
				     delay(500);
				     exit(1);
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my+60 && y<=my+90)
				{
				     f2=8;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=42;

				     theorylab();
				    // delay(500);
				    // exit(1);
				     }
				}

		else if(x>mx+230 && y>my+160 && x<mx+270 && y<my+190)
				{
				  f2=9;
				  if(cl==1)
				   {
				   unload_mouse_driver();
				    back_animation();
				    check=1;
				    asi();
				   }
				}

		else f2=0;

		}


}




void stresult(){
setcolor(15);

     rectangle(5,5,425,80);
     rectangle(5,42,425,42);
     rectangle(200,5,200,80);
     settextstyle(3,0,1);
      setcolor(RED);
     outtextxy(30,10,"Student Name");
     outtextxy(30,45,"Student ID");

      setcolor(GREEN);
     outtextxy(12,93,"Subject");
     outtextxy(14,117,"Name");
     outtextxy(115,93,"Attendence");
     outtextxy(135,117,"Mark");
     outtextxy(245,93,"Quiz");
     outtextxy(245,117,"Mark");
     outtextxy(340,93,"Final");
     outtextxy(340,117,"Mark");
     outtextxy(450,110,"Credit");
     outtextxy(550,110,"GPA");



     rectangle(5,420,75,460);
     rectangle(270,420,370,460);
    // rectangle(565,420,635,460);
     outtextxy(20,425,"Back");
      outtextxy(285,425,"Refresh");
    //   outtextxy(580,425,"Save");


     setcolor(MAGENTA);
     rectangle(5,90,635,400);


     rectangle(5,150,635,150);
     rectangle(5,200,635,200);
     rectangle(5,250,635,250);
     rectangle(5,300,635,300);
     rectangle(5,350,635,350);



     rectangle(110,90,110,400);
     rectangle(215,90,215,400);
      rectangle(320,90,320,400);
       rectangle(425,90,425,400);
       rectangle(530,90,530,400);

       load_mouse_driver();

       while(1)
       {
	int x,y,cl;
	in.x.ax=3;
	int86(0x33,&in,&out);

	x=out.x.cx;      // To get x coordinate
	y=out.x.dx;      // To get y coordinate
	cl=out.x.bx;
	if(kbhit())
	{
	unload_mouse_driver();
	break;
	}

	else if(x>=5 && x<=75 && y>=420 && y<=460 && cl==1) //Back
	 {

	   fclose(fp);
	   fclose(fp1);
	   fclose(fp2);
	   unload_mouse_driver();
	   cleardevice();
	   bookopen_image();
	   front1();
	 }

	 else if(x>=270 && x<=370 && y>=420 && y<=460 && cl==1) //Refresh
	 {
	   unload_mouse_driver();
	   cleardevice();
	   stresult();
	 }

      }



     gotoxy(31,2);
     scanf("%s",&name);
      rf_stresult();

     gotoxy(31,4);
    scanf("%s",&id);
     rf_stresult();



     gotoxy(5,11);
    scanf("%s",&subname1);
     rf_stresult();
    gotoxy(20,11);
    scanf("%f",&atmarks1);
     rf_stresult();
    gotoxy(32,11);
    scanf("%f",&qzmarks1);
     rf_stresult();
    gotoxy(46,11);
    scanf("%f",&fnmarks1);
     rf_stresult();
    gotoxy(60,11);
    scanf("%f",&credit1);

    total1=atmarks1+qzmarks1+fnmarks1;
    if(total1>=80){
    gp1=4.00; outtextxy(550,160,"4.00");}
    else if(total1<80&&total1>=75){
    gp1=3.75;outtextxy(550,160,"3.75");}
    else if(total1<75&&total1>=70){
    gp1=3.50;outtextxy(550,160,"3.50");}
    else if(total1<70&&total1>=65){
    gp1=3.25;outtextxy(550,160,"3.25");}
    else if(total1<65&&total1>=60){
    gp1=3.00;outtextxy(550,160,"3.00");}
    else if(total1<60&&total1>=55){
    gp1=2.75;outtextxy(550,160,"2.75");}
    else if(total1<55&&total1>=50){
    gp1=2.50;outtextxy(550,160,"2.50");}
    else if(total1<50&&total1>=45){
    gp1=2.25;outtextxy(550,160,"2.25");}
    else if(total1<45&&total1>=40){
    gp1=2.00;outtextxy(550,160,"2.00");}
    else{
    gp1=0.00;outtextxy(550,160,"0.00");}

     rf_stresult();

    gotoxy(5,14);
    scanf("%s",&subname2);
     rf_stresult();


    gotoxy(20,14);
    scanf("%f",&atmarks2);
     rf_stresult();



    gotoxy(32,14);
    scanf("%f",&qzmarks2);
     rf_stresult();
    gotoxy(46,14);
    scanf("%f",&fnmarks2);
     rf_stresult();
    gotoxy(60,14);
    scanf("%f",&credit2);

    total2=atmarks2+qzmarks2+fnmarks2;
    if(total2>=80){
    gp2=4.00;outtextxy(550,210,"4.00");}
    else if(total2<80&&total2>=75){
    gp2=3.75;outtextxy(550,210,"3.75");}
    else if(total2<75&&total2>=70){
    gp2=3.50;outtextxy(550,210,"3.50");}
    else if(total2<70&&total2>=65){
    gp2=3.25;outtextxy(550,210,"3.25");}
    else if(total2<65&&total2>=60){
    gp2=3.00;outtextxy(550,210,"3.00");}
    else if(total2<60&&total2>=55){
    gp2=2.75;outtextxy(550,210,"2.75");}
    else if(total2<55&&total2>=50){
    gp2=2.50;outtextxy(550,210,"2.50");}
    else if(total2<50&&total2>=45){
    gp2=2.25;outtextxy(550,210,"2.25");}
    else if(total2<45&&total2>=40){
    gp2=2.00;outtextxy(550,210,"2.00");}
    else{
    gp2=0.00;outtextxy(550,210,"0.00");}

     rf_stresult();

    gotoxy(5,18);
    scanf("%s",&subname3);
     rf_stresult();
    gotoxy(20,18);
    scanf("%f",&atmarks3);
     rf_stresult();
    gotoxy(32,18);
    scanf("%f",&qzmarks3);
     rf_stresult();
    gotoxy(46,18);
    scanf("%f",&fnmarks3);
     rf_stresult();
    gotoxy(60,18);
    scanf("%f",&credit3);

    total3=atmarks3+qzmarks3+fnmarks3;
    if(total3>=80){
    gp3=4.00;outtextxy(550,260,"4.00");}
    else if(total3<80&&total3>=75){
    gp3=3.75;outtextxy(550,260,"3.75");}
    else if(total3<75&&total3>=70){
    gp3=3.50;outtextxy(550,260,"3.50");}
    else if(total3<70&&total3>=65){
    gp3=3.25;outtextxy(550,260,"3.25");}
    else if(total3<65&&total3>=60){
    gp3=3.00;outtextxy(550,260,"3.00");}
    else if(total3<60&&total3>=55){
    gp3=2.75;outtextxy(550,260,"2.75");}
    else if(total3<55&&total3>=50){
    gp3=2.50;outtextxy(550,260,"2.50");}
    else if(total3<50&&total3>=45){
    gp3=2.25;outtextxy(550,260,"2.25");}
    else if(total3<45&&total3>=40){
    gp3=2.00;outtextxy(550,260,"2.00");}
    else{
    gp3=0.00;outtextxy(550,260,"0.00");}

      rf_stresult();

    gotoxy(5,21);
    scanf("%s",&subname4);
     rf_stresult();
    gotoxy(20,21);
    scanf("%f",&atmarks4);
     rf_stresult();
    gotoxy(32,21);
    scanf("%f",&qzmarks4);
     rf_stresult();
    gotoxy(46,21);
    scanf("%f",&fnmarks4);
     rf_stresult();
    gotoxy(60,21);
    scanf("%f",&credit4);
    total4=atmarks4+qzmarks4+fnmarks4;
    if(total4>=80){
    gp4=4.00;outtextxy(550,310,"4.00");}
    else if(total4<80&&total4>=75){
    gp4=3.75;outtextxy(550,310,"3.75");}
    else if(total4<75&&total4>=70){
    gp4=3.50;outtextxy(550,310,"3.50");}

    else if(total4<70&&total4>=65){
    gp4=3.25;outtextxy(550,310,"3.25");}
    else if(total4<65&&total4>=60){
    gp4=3.00;outtextxy(550,310,"3.00");}
    else if(total4<60&&total4>=55){
    gp4=2.75;outtextxy(550,310,"2.75");}
    else if(total4<55&&total4>=50){
    gp4=2.50;outtextxy(550,310,"2.50");}
    else if(total4<50&&total4>=45){
    gp4=2.25;outtextxy(550,310,"2.25");}
    else if(total4<45&&total4>=40){
    gp4=2.00;outtextxy(550,310,"2.00");}
    else{
    gp4=0.00;outtextxy(550,310,"0.00");}

     rf_stresult();

    gotoxy(5,24);
    scanf("%s",&subname5);
     rf_stresult();
    gotoxy(20,24);
    scanf("%f",&atmarks5);
     rf_stresult();
    gotoxy(32,24);
    scanf("%f",&qzmarks5);
     rf_stresult();
    gotoxy(46,24);
    scanf("%f",&fnmarks5);
     rf_stresult();
    gotoxy(60,24);
    scanf("%f",&credit5);

    total5=atmarks5+qzmarks5+fnmarks5;
    if(total5>=80){
    gp5=4.00;outtextxy(550,360,"4.00");}
    else if(total5<80&&total5>=75){
    gp5=3.75;outtextxy(550,360,"3.75");}
    else if(total5<75&&total5>=70){
    gp5=3.50;outtextxy(550,360,"3.50");}
    else if(total5<70&&total5>=65){
    gp5=3.25;outtextxy(550,360,"3.25");}
    else if(total5<65&&total5>=60){
    gp5=3.00;outtextxy(550,360,"3.00");}
    else if(total5<60&&total5>=55){
    gp5=2.75;outtextxy(550,360,"2.75");}
    else if(total5<55&&total5>=50){
    gp5=2.50;outtextxy(550,360,"2.50");}
    else if(total5<50&&total5>=45){
    gp5=2.25;outtextxy(550,360,"2.25");}
    else if(total5<45&&total5>=40){
    gp5=2.00;outtextxy(550,360,"2.00");}
    else{
    gp5=0.00;outtextxy(550,360,"0.00");}




    }


   void tgpa(){

    rectangle(565,420,635,460);
    outtextxy(580,425,"Save");

    load_mouse_driver();

      while(1)
       {
	int x,y,cl;
	in.x.ax=3;
	int86(0x33,&in,&out);

	x=out.x.cx;      // To get x coordinate
	y=out.x.dx;      // To get y coordinate
	cl=out.x.bx;

	 if(x>=5 && x<=75 && y>=420 && y<=460 && cl==1) //Back
	 {

	   fclose(fp);
	   fclose(fp1);
	   fclose(fp2);
	   unload_mouse_driver();
	   cleardevice();
	   bookopen_image();
	   front1();
	 }

	 else if(x>=270 && x<=370 && y>=420 && y<=460 && cl==1) //Refresh
	 {
	   unload_mouse_driver();
	   cleardevice();
	   stresult();
	 }
	 else if(x>=565 && x<=635 && y>=420 && y<=460 && cl==1) //Save
	 {
	   unload_mouse_driver();
	   cleardevice();
	   savetresult();
	   theorylab();
	 }

      }

    }

     void lgpa(){

     rectangle(565,420,635,460);
     outtextxy(580,425,"Save");
    load_mouse_driver();

      while(1)
       {
	int x,y,cl;
	in.x.ax=3;
	int86(0x33,&in,&out);

	x=out.x.cx;      // To get x coordinate
	y=out.x.dx;      // To get y coordinate
	cl=out.x.bx;

	 if(x>=5 && x<=75 && y>=420 && y<=460 && cl==1) //Back
	 {

	   fclose(fp);
	   fclose(fp1);
	   fclose(fp2);
	   unload_mouse_driver();
	   cleardevice();
	   bookopen_image();
	   front1();
	 }

	 else if(x>=270 && x<=370 && y>=420 && y<=460 && cl==1) //Refresh
	 {
	   unload_mouse_driver();
	   cleardevice();
	   stresult();
	 }
	 else if(x>=565 && x<=635 && y>=420 && y<=460 && cl==1) //Save
	 {
	   unload_mouse_driver();
	   cleardevice();
	   savelresult();
	   theorylab();
	 }

      }


    }




    void savetresult(){
    tcgpa=0;
    fprintf(fp,"%s\n",id);
    fprintf(fp,"%s\n",name);
    fprintf(fp,"%s\n",id);
    fprintf(fp,"%s\n",subname1);
    fprintf(fp,"%.2f\n",atmarks1);
    fprintf(fp,"%.2f\n",qzmarks1);
    fprintf(fp,"%.2f\n",fnmarks1);
    fprintf(fp,"%.2f\n",total1);
    fprintf(fp,"%.2f\n",credit1);
    fprintf(fp,"%.2f\n",gp1);
    fprintf(fp,"%s\n",subname2);
    fprintf(fp,"%.2f\n",atmarks2);
    fprintf(fp,"%.2f\n",qzmarks2);
    fprintf(fp,"%.2f\n",fnmarks2);
    fprintf(fp,"%.2f\n",total2);
     fprintf(fp,"%.2f\n",credit2);
    fprintf(fp,"%.2f\n",gp2);
    fprintf(fp,"%s\n",subname3);
    fprintf(fp,"%.2f\n",atmarks3);
    fprintf(fp,"%.2f\n",qzmarks3);
    fprintf(fp,"%.2f\n",fnmarks3);
    fprintf(fp,"%.2f\n",total3);
     fprintf(fp,"%.2f\n",credit3);
    fprintf(fp,"%.2f\n",gp3);
    fprintf(fp,"%s\n",subname4);
    fprintf(fp,"%.2f\n",atmarks4);
    fprintf(fp,"%.2f\n",qzmarks4);
    fprintf(fp,"%.2f\n",fnmarks4);
    fprintf(fp,"%.2f\n",total4);
     fprintf(fp,"%.2f\n",credit4);
    fprintf(fp,"%.2f\n",gp4);
    fprintf(fp,"%s\n",subname5);
    fprintf(fp,"%.2f\n",atmarks5);
    fprintf(fp,"%.2f\n",qzmarks5);
    fprintf(fp,"%.2f\n",fnmarks5);
    fprintf(fp,"%.2f\n",total5);
     fprintf(fp,"%.2f\n",credit5);
    fprintf(fp,"%.2f\n",gp5);
    tcgpa=((gp1*credit1)+(gp2*credit2)+(gp3*credit3)+(gp4*credit4)+(gp5*credit5))/(credit1+credit2+credit3+credit4+credit5);
    fclose(fp);fclose(fp1);fclose(fp2);
    }





   void savelresult(){
     lcgpa=0,cgpa=0;
    fprintf(fp1,"%s\n",id);
    fprintf(fp1,"%s\n",name);
    fprintf(fp1,"%s\n",id);
    fprintf(fp1,"%s\n",subname1);
    fprintf(fp1,"%.2f\n",atmarks1);
    fprintf(fp1,"%.2f\n",qzmarks1);
    fprintf(fp1,"%.2f\n",fnmarks1);
    fprintf(fp1,"%.2f\n",total1);
    fprintf(fp1,"%.2f\n",credit1);
    fprintf(fp1,"%.2f\n",gp1);
    fprintf(fp1,"%s\n",subname2);
    fprintf(fp1,"%.2f\n",atmarks2);
    fprintf(fp1,"%.2f\n",qzmarks2);
    fprintf(fp1,"%.2f\n",fnmarks2);
    fprintf(fp1,"%.2f\n",total2);
     fprintf(fp1,"%.2f\n",credit2);
    fprintf(fp1,"%.2f\n",gp2);
    fprintf(fp1,"%s\n",subname3);
    fprintf(fp1,"%.2f\n",atmarks3);
    fprintf(fp1,"%.2f\n",qzmarks3);
    fprintf(fp1,"%.2f\n",fnmarks3);
    fprintf(fp1,"%.2f\n",total3);
     fprintf(fp1,"%.2f\n",credit3);
    fprintf(fp1,"%.2f\n",gp3);
    fprintf(fp1,"%s\n",subname4);
    fprintf(fp1,"%.2f\n",atmarks4);
    fprintf(fp1,"%.2f\n",qzmarks4);
    fprintf(fp1,"%.2f\n",fnmarks4);
    fprintf(fp1,"%.2f\n",total4);
     fprintf(fp1,"%.2f\n",credit4);
    fprintf(fp1,"%.2f\n",gp4);
    fprintf(fp1,"%s\n",subname5);
    fprintf(fp1,"%.2f\n",atmarks5);
    fprintf(fp1,"%.2f\n",qzmarks5);
    fprintf(fp1,"%.2f\n",fnmarks5);
    fprintf(fp1,"%.2f\n",total5);
     fprintf(fp1,"%.2f\n",credit5);
    fprintf(fp1,"%.2f\n",gp5);
   lcgpa=((gp1*credit1)+(gp2*credit2)+(gp3*credit3)+(gp4*credit4)+(gp5*credit5))/(credit1+credit2+credit3+credit4+credit5);
   cgpa=(tcgpa+lcgpa)/2;
   fprintf(fp2,"%s\n",id);
   fprintf(fp2,"%s\n",name);
    fprintf(fp2,"%s\n",id);
    fprintf(fp2,"%.2f\n",cgpa);
   fprintf(fp2,"%.2f\n",cgpa);
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    }


    void theorylab(){
     bookopen_image();

		int f3,check=3;

		while(1)
		{
		       setcolor(1);
	   settextstyle(4,0,4);
	    outtextxy(mx-260,my-150,"STUDENT");
	   outtextxy(mx-260,my-80,"INFORMATION");
	   outtextxy(mx-260,my-10,"SYSTEM");
	    settextstyle(4,0,4);
	    outtextxy(mx+110,my-210,"Catagory");


	    setcolor(0);
	    line(mx+1,my-170,mx+280,my-170);
	    line(mx+50,my-209,mx+50,my+210);




	    if(check==3)
	    {
		    settextstyle(1,0,1);
		    if(f3==1) setcolor(7);
		    else setcolor(0);
		    outtextxy(mx+130,my-100,"Theory");
		    if(f3==2) setcolor(7);
		    else setcolor(0);
		    outtextxy(mx+130,my-50,"Lab");
		    if(f3==3) setcolor(7);
		    else setcolor(0);
		    outtextxy(mx+230,my+160,"Back");
		    if(f3==4) setcolor(7);
		    else setcolor(0);
		    outtextxy(mx+60,my+160,"Menu");
	     }

		    load_mouse_driver();
			in.x.ax=3;
			int86(0x33,&in,&out);

			x=out.x.cx;      // To get x coordinate
			y=out.x.dx;      // To get y coordinate
			cl=out.x.bx;     // 1/0 ; 1 for mouse click


			if(x>=mx+130 && x<=mx+190 && y>=my-100 && y<=my-70) //checking if the mouse inside the rectangale and the user click on it...
				{
				   f3=1;
				   if(cl==1)
				   {
				     unload_mouse_driver();
				     cleardevice();
				     if(a==11){
				       fp=fopen("c:\\save11.txt","a");
				     fp1=fopen("c:\\lab11.txt","a");
				     fp2=fopen("c:\\cgpa11.txt","a");
				     }
				    else if(a==12){
				       fp=fopen("c:\\save12.txt","a");
				     fp1=fopen("c:\\lab12.txt","a");
				     fp2=fopen("c:\\cgpa12.txt","a");
				     }
				    else if(a==21){
				       fp=fopen("c:\\save21.txt","a");
				     fp1=fopen("c:\\lab21.txt","a");
				     fp2=fopen("c:\\cgpa21.txt","a");
				     }
				     else if(a==22){
				       fp=fopen("c:\\save22.txt","a");
				     fp1=fopen("c:\\lab22.txt","a");
				     fp2=fopen("c:\\cgpa22.txt","a");
				     }
				     else if(a==31){
				       fp=fopen("c:\\save31.txt","a");
				     fp1=fopen("c:\\lab31.txt","a");
				     fp2=fopen("c:\\cgpa31.txt","a");
				     }
				     else if(a==32){
				       fp=fopen("c:\\save32.txt","a");
				     fp1=fopen("c:\\lab32.txt","a");
				     fp2=fopen("c:\\cgpa32.txt","a");
				     }
				     else if(a==41){
				       fp=fopen("c:\\save41.txt","a");
				     fp1=fopen("c:\\lab41.txt","a");
				     fp2=fopen("c:\\cgpa41.txt","a");
				     }
				     else if(a==42){
				       fp=fopen("c:\\save42.txt","a");
				     fp1=fopen("c:\\lab42.txt","a");
				     fp2=fopen("c:\\cgpa42.txt","a");
				     }
				     stresult();
				     tgpa();

				   }
				}
			else if(x>=mx+130 && x<=mx+160 && y>=my-50 && y<=my-20)
				{
				    f3=2;
				    if(cl==1)
				    {
				     unload_mouse_driver();
				     cleardevice();
				     if(a==11){
				       fp=fopen("c:\\save11.txt","a");
				     fp1=fopen("c:\\lab11.txt","a");
				     fp2=fopen("c:\\cgpa11.txt","a");
				     }
				    else if(a==12){
				       fp=fopen("c:\\save12.txt","a");
				     fp1=fopen("c:\\lab12.txt","a");
				     fp2=fopen("c:\\cgpa12.txt","a");
				     }
				    else if(a==21){
				       fp=fopen("c:\\save21.txt","a");
				     fp1=fopen("c:\\lab21.txt","a");
				     fp2=fopen("c:\\cgpa21.txt","a");
				     }
				     else if(a==22){
				       fp=fopen("c:\\save22.txt","a");
				     fp1=fopen("c:\\lab22.txt","a");
				     fp2=fopen("c:\\cgpa22.txt","a");
				     }
				     else if(a==31){
				       fp=fopen("c:\\save31.txt","a");
				     fp1=fopen("c:\\lab31.txt","a");
				     fp2=fopen("c:\\cgpa31.txt","a");
				     }
				     else if(a==32){
				       fp=fopen("c:\\save32.txt","a");
				     fp1=fopen("c:\\lab32.txt","a");
				     fp2=fopen("c:\\cgpa32.txt","a");
				     }
				     else if(a==41){
				       fp=fopen("c:\\save41.txt","a");
				     fp1=fopen("c:\\lab41.txt","a");
				     fp2=fopen("c:\\cgpa41.txt","a");
				     }
				     else if(a==42){
				       fp=fopen("c:\\save42.txt","a");
				     fp1=fopen("c:\\lab42.txt","a");
				     fp2=fopen("c:\\cgpa42.txt","a");
				     }
				     stresult();
				     lgpa();

				    }
				}
			else if(x>mx+230 && y>my+160 && x<mx+270 && y<my+190)
				{
				  f3=3;
				  if(cl==1)
				   {unload_mouse_driver();
				    back_animation();
				    check=2;
				    add_result();
				   }
				}
			else if(x>mx+60 && y>my+160 && x<mx+105 && y<my+190)
				{
				  f3=4;
				  if(cl==1)
				   {
				   unload_mouse_driver();
				    back_animation();
				    check=0;
				    front1();
				   }
				}

		else f3=0;


		}
}



void rf_stresult(){
 load_mouse_driver();

  while(1)
       {
	int x,y,cl;
	in.x.ax=3;
	int86(0x33,&in,&out);

	x=out.x.cx;      // To get x coordinate
	y=out.x.dx;      // To get y coordinate
	cl=out.x.bx;
	if(kbhit())
	{
	unload_mouse_driver();
	break;
	}

	else if(x>=5 && x<=75 && y>=420 && y<=460 && cl==1) //Back
	 {
	   unload_mouse_driver();
	   cleardevice();

	   exit(1);
	 }

	 else if(x>=270 && x<=370 && y>=420 && y<=460 && cl==1) //Refresh
	 {
	   unload_mouse_driver();
	   cleardevice();
	   stresult();
	 }

      }


}




//LOADING THE MOUSE DRIVE................................................................................................

void load_mouse_driver()
{

out.x.cx=0;out.x.bx=0;
in.x.ax=1;
int86(0x33,&in,&out);

in.x.ax=7;
in.x.cx=0;
in.x.dx=639;
int86(0x33,&in,&out);
in.x.ax=8;
in.x.cx=0;
in.x.dx=479;
int86(0x33,&in,&out);

}





// UNLOAD THE MOUSE DRIVE................................................................................................

void unload_mouse_driver()
{
in.x.ax=2;
int86(0x33,&in,&out);

}





void back()
{
 check=0;
 bookopen_image();
 front1();
 }




// Graphics Work....................................................................................................

void forward_animation()
{
 int i,j;


    for(i=10,j=0;i>=-10;i-=4,j+=4)
    {

      if(i>0)
     {
     setcolor(14);
     rectangle(mx,my-210,mx+(28*i+6),my+210);
     setfillstyle(1,15);
     bar(mx+1,my-209,mx+(28*i+5),my+209);
     delay(150);
     }
     else if(i<0)
     {
     setcolor(14);
     rectangle(mx,my-210,mx+(28*i+6),my+210);
     setfillstyle(1,15);
     bar(mx-1,my-209,mx+(28*i+7),my+209);
     delay(150);
     }

     if(i!=10)
     {
      setcolor(15);
      line(mx+(28*i+6),my-210,mx+(28*i+6),my+210);
      delay(0);
     }

   }
}





void back_animation()
{
   int i,j;


    for(i=-10;i<=10;i+=4)
   {
     if(i>0)
     {
     setcolor(14);
     rectangle(mx,my-210,mx+(28*i+6),my+210);
     setfillstyle(1,15);
     bar(mx+1,my-209,mx+(28*i+5),my+209);
     delay(150);
     }
     else if(i<0)
     {
     setcolor(14);
     rectangle(mx,my-210,mx+(28*i+6),my+210);
     setfillstyle(1,15);
     bar(mx-1,my-209,mx+(28*i+7),my+209);
     delay(150);
     }

     if(i!=10)
     {
      setcolor(15);
      line(mx+(28*i+6),my-210,mx+(28*i+6),my+210);
     }
   }

}




void book_close()
{
   int i,j;
 for(i=-10;i<=10;i+=4)
  {
    if(i>0)
    {
    setcolor(14);
    rectangle(mx,my-210,mx+(28*i+5),my+210);
    setfillstyle(1,4);
    bar(mx+1,my-210+1,mx+(28*i+4),my+209);
    delay(200);
    }
    else if(i<0)
    {
    setcolor(14);
    rectangle(mx,my-210,mx+(28*i+5),my+210);
    setfillstyle(1,15);
    bar(mx-1,my-210,mx+(28*i+6),my+210);
    delay(200);

    }

    if(i<0)
    {

    setcolor(0);
    line(mx+(28*i+5),my-210,mx+(28*i+5),my+210);
    setfillstyle(1,0);
    bar(mx-1,my-210,mx+(28*i-5),my+210);
    }

   }

}




void book_goaway()
{
 int i,j;

     for(j=0;j<=24;j+=4)
   {

     setcolor(14);
     rectangle(mx+(j*14+15),my-(210+11),mx+((280+j*14)+20),my+(210-10));
     setfillstyle(1,4);
     bar(mx+(j*14+16),my-(210+12),mx+((280+j*14)+19),my+(210-11));


    setcolor(8);
    setfillstyle(1,15);
    bar3d(mx+j*14,my-210,mx+(280+j*14),my+210,15,1);
    setfillstyle(1,15);
    floodfill(mx+(j*14+3),my-(210+1),8);
    floodfill(mx+(280+j*14)+5,my+210-10,8);
   // delay(100);

    setcolor(14);
   // rectangle(180,30,465,450);
    rectangle(mx+j*14,my-210,mx+(280+j*14+5),my+210);
    setfillstyle(1,4);
    bar(mx+j*14+1,my-210+1,mx+(280+j*14+4),my+209);
    line(mx+(280+j*14+6),my-210+1,mx+(280+j*14+6),my+209);
    delay(200);

     if(j!=23)
    {
    setfillstyle(1,0);
    bar(mx+j*14,my-225,mx+(280+j*14+35),my+210);

    }

  }
}



void book_open()
{
 int i,j;
 for(i=10,j=0;i>=-10;i-=4,j+=4)
  {
    if(i>0)
    {
    setcolor(14);
    rectangle(mx,my-210,mx+(28*i+5),my+210);
    setfillstyle(1,4);
    bar(mx+1,my-210+1,mx+(28*i+4),my+209);
    delay(400);
    }
    else if(i<0)
    {
    setcolor(14);
    rectangle(mx,my-210,mx+(28*i+5),my+210);
    setfillstyle(1,15);
    bar(mx-1,my-210,mx+(28*i+6),my+210);
    delay(400);

    }

    if(i!=-10)
    {
     if(i>0)
     {
     setfillstyle(1,15);
     floodfill(mx+(28*i+1),my+210-2,14);
     delay(0);
     }
     if(i!=0)
     {
     setcolor(15);
     line(mx+(28*i+5),my-210,mx+(28*i+5),my+210);
     delay(0);
     }
    }

  }
}



void bookopen_image()
{
  int i,j;

     setcolor(14);
     rectangle(mx+15,my-(210+11),mx+((140+140)+20),my+(210-10));
     setfillstyle(1,4);
     bar(mx+16,my-(210+12),mx+((140+140)+19),my+(210-11));


    setcolor(8);
    setfillstyle(1,15);
    bar3d(mx,my-210,mx+(140+140),my+210,15,1);
    setfillstyle(1,15);
    floodfill(mx+(140+140+5),my+(210-10),8);
    floodfill(mx+(140+140)-2,my-210-5,8);


    setcolor(14);
    rectangle(mx,my-210,mx+(140+140+5),my+210);
    setfillstyle(1,15);
    bar(mx+1,my-210+1,mx+(140+140+4),my+209);


    setcolor(14);
    rectangle(mx,my-210,mx-(140+140+5),my+210);
    setfillstyle(1,15);
    bar(mx-1,my-210+1,mx-(140+140+4),my+209);



}



void credit()
{
  int i;
   book_close();
   book_goaway();

   setcolor(14);
   rectangle(mx-320,my-230,mx+321,my-170);
   settextstyle(4,0,5);
   outtextxy(mx-40,my-230,"Credit");
   settextstyle(4,0,4);
   outtextxy(mx-310,my-170,"Developed By:");

   settextstyle(7,0,1);
   for(i=0;i<=12;i++)
   {
   if(i==1)
   {
   setcolor(1);
   outtextxy(mx-260,my-120,"Tazime Haque");
   }
   if(i==2)
   {
   setcolor(12);
   outtextxy(mx-260,my-95,"ID: 11.01.04.055");
   }
   if(i==3)
   {
   setcolor(6);
   outtextxy(mx-260,my-70,"Sec: A");
   }
   if(i==4)
   {
   setcolor(13);
   outtextxy(mx-260,my-45,"Department of CSE");
   }
   if(i==5)
   {
   setcolor(1);
   outtextxy(mx-80,my,"Mohammad Wahidun Noor");
   }
   if(i==6)
   {
   setcolor(12);
   outtextxy(mx-80,my+25,"ID: 11.01.04.039");
   }
   if(i==7)
   {
   setcolor(6);
   outtextxy(mx-80,my+50,"Sec: A");
   }
   if(i==8)
   {
   setcolor(13);
   outtextxy(mx-80,my+75,"Department of CSE");
   }
   if(i==9)
   {
   setcolor(1);
   outtextxy(mx+110,my+120,"Tawaub ur Zahir");
   }
   if(i==10)
   {
   setcolor(12);
   outtextxy(mx+110,my+145,"ID: 11.01.04.038");
   }
   if(i==11)
   {
   setcolor(6);
   outtextxy(mx+110,my+170,"Sec: A");
   }
   if(i==12)
   {
   setcolor(13);
   outtextxy(mx+110,my+195,"Department of CSE");
   }

   delay(800);
   }

   cleardevice();
   bookopen_image();
   front1();
}






void meritlist()
  {
   bookopen_image();
	    int f2=0;check=2; int ab=5;
	    mx=getmaxx()/2;my=getmaxy()/2;

	    while(1)
	    {
	     setcolor(1);
	   settextstyle(4,0,4);
	    outtextxy(mx-260,my-150,"STUDENT");
	   outtextxy(mx-260,my-80,"INFORMATION");
	   outtextxy(mx-260,my-10,"SYSTEM");
	    settextstyle(4,0,3);
	    outtextxy(mx+100,my-200,"Merit List");


	    setcolor(0);
	    line(mx+1,my-170,mx+280,my-170);
	    line(mx+50,my-209,mx+50,my+210);
	    settextstyle(1,0,1);



	    if(check==2)
	    {
	    if(f2==1) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-150,"Meritlist for 1.1");
	    if(f2==2) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-120,"Meritlist for 1.2");
	    if(f2==3) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-90,"Meritlist for 2.1");
	    if(f2==4) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-60,"Meritlist for 2.2");
	    if(f2==5) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my-30,"Meritlist for 3.1");
	    if(f2==6) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my,"Meritlist for 3.2");
	    if(f2==7) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my+30,"Meritlist for 4.1");
	    if(f2==8) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+60,my+60,"Meritlist for 4.2");
	    if(f2==9) setcolor(7);
	    else setcolor(0);
	    outtextxy(mx+230,my+160,"Back");
	    }

	    if(ab==5)
	    {
	    load_mouse_driver();
	     ab=10;
	     }

			in.x.ax=3;
			int86(0x33,&in,&out);

			x=out.x.cx;      // To get x coordinate
			y=out.x.dx;      // To get y coordinate
			cl=out.x.bx;     // 1/0 ; 1 for mouse click



			if(x>=mx+60 && x<=mx+230 && y>=my-150 && y<=my-120) //checking if the mouse inside the rectangale and the user click on it...
				{
				   f2=1;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=11;
				     rank();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-120 && y<=my-90)
				{
				  f2=2;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=12;
				     rank();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-90 && y<=my-60)
				{
				    f2=3;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=21;
				     rank();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-60 && y<=my-30)
				{
				     f2=4;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=22;
				     rank();
				     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my-30 && y<=my)
				{
				    f2=5;
				     if(cl==1)
				     {
				     unload_mouse_driver();
				     cleardevice();
				     a=31;
				     rank();
                     }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my && y<=my+30)
			       {
				     f2=6;
				     if(cl==1)
				     {
                     unload_mouse_driver();
				     cleardevice();
				     a=32;
				     rank();				   
                    }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my+30 && y<=my+60)
				{
				     f2=7;
				     if(cl==1)
				     {
				    unload_mouse_driver();
				     cleardevice();
				     a=41;
				     rank();
				    }
				}
		else if(x>=mx+60 && x<=mx+230 && y>=my+60 && y<=my+90)
				{
				     f2=8;
				     if(cl==1)
				     {
				    unload_mouse_driver();
				     cleardevice();
				     a=42;
				     rank();				  }
				}

		else if(x>mx+230 && y>my+160 && x<mx+270 && y<my+190)
				{
				  f2=9;
				  if(cl==1)
				   {
				   unload_mouse_driver();
				    back_animation();
				    check=1;
				    front1();
				   }
				}

		else f2=0;

		}


}







void rank(){

setcolor(4);     
rectangle(40,20,590,80);

rectangle(40,100,590,450);

settextstyle(10,0,1);
setcolor(RED);
outtextxy(90,30,"MERIT LIST OF TOP 10");
setcolor(BLUE);
rectangle(40,150,590,150);


//opor nich...
rectangle(130,100,130,450);
rectangle(310,100,310,450);
rectangle(480,100,480,450);
settextstyle(3,0,1);
setcolor(GREEN);
outtextxy(50,110,"RANK");
outtextxy(150,110,"STUDENT  NAME");
outtextxy(350,110,"STUDENT  ID");
outtextxy(500,110,"CGPA");

setcolor(BLUE);
rectangle(40,180,590,180);
rectangle(40,210,590,210);
rectangle(40,240,590,240);
rectangle(40,270,590,270);
rectangle(40,300,590,300);
rectangle(40,330,590,330);
rectangle(40,360,590,360);
rectangle(40,390,590,390);
rectangle(40,420,590,420);
char ch[1000];
char ch1[1000];
char ch2[1000];
char ch3[1000];
char ch4[1000];
float num[30],num1[30];

int i,j,n=0,k=0;
float change;

if(a==11)fp=fopen("c:\\cgpa11.txt","r");
else if(a==12) fp=fopen("c:\\cgpa12.txt","r");
else if(a==21) fp=fopen("c:\\cgpa21.txt","r");
else if(a==22) fp=fopen("c:\\cgpa22.txt","r");
else if(a==31) fp=fopen("c:\\cgpa31.txt","r");
else if(a==32) fp=fopen("c:\\cgpa32.txt","r");
else if(a==41) fp=fopen("c:\\cgpa41.txt","r");
else if(a==42) fp=fopen("c:\\cgpa42.txt","r");


    i=0;
  while(!feof(fp)){
    fscanf(fp,"%s\n",&ch);
  fscanf(fp,"%s\n",&ch);
  fscanf(fp,"%s\n",&ch);
  fscanf(fp,"%s\n",&ch);
  fscanf(fp,"%f\n",&num[i]);
  i++;
  k++;
  }
  fclose(fp);
  n=(i-1);
  for(i=0;i<=n;i++)
    for(j=i+1;j<=n+1;j++)
	{
	if(num[i]<num[j])
	{
	    change=num[i];
	    num[i]=num[j];
	    num[j]=change;

	}
  }

	   k=0;

	    i=0;
	    j=0;
	  int rem=10;
	  while(rem--)
	  {
	  j=0;

if(a==11)fp=fopen("c:\\cgpa11.txt","r");
else if(a==12) fp=fopen("c:\\cgpa12.txt","r");
else if(a==21) fp=fopen("c:\\cgpa21.txt","r");
else if(a==22) fp=fopen("c:\\cgpa22.txt","r");
else if(a==31) fp=fopen("c:\\cgpa31.txt","r");
else if(a==32) fp=fopen("c:\\cgpa32.txt","r");
else if(a==41) fp=fopen("c:\\cgpa41.txt","r");
else if(a==42) fp=fopen("c:\\cgpa42.txt","r");

	    while(!feof(fp))
			{
			 fscanf(fp,"%s\n",&ch1);
			fscanf(fp,"%s\n",&ch2);
			fscanf(fp,"%s\n",&ch3);
			fscanf(fp,"%s\n",&ch4);
			fscanf(fp,"%f\n",&num1[j]);

				if(num1[j]==num[i])

				{
				k=k+1;
				 settextstyle(3,0,1);

				if(k==1)
				 {setcolor(5); outtextxy(65,152,"01");  setcolor(WHITE); outtextxy(155,152,ch2); outtextxy(345,152,ch3); outtextxy(510,152,ch4);}
				if(k==2)
				  {setcolor(5); outtextxy(65,182,"02");  setcolor(WHITE); outtextxy(155,182,ch2); outtextxy(345,182,ch3); outtextxy(510,182,ch4);}
				if(k==3)
				  {setcolor(5); outtextxy(65,212,"03");  setcolor(WHITE); outtextxy(155,212,ch2); outtextxy(345,212,ch3); outtextxy(510,212,ch4);}
				if(k==4)
				 {setcolor(5); outtextxy(65,242,"04");   setcolor(WHITE); outtextxy(155,242,ch2); outtextxy(345,242,ch3); outtextxy(510,242,ch4);}
			       if(k==5)
				   {setcolor(5); outtextxy(65,272,"05");  setcolor(WHITE); outtextxy(155,272,ch2); outtextxy(345,272,ch3); outtextxy(510,272,ch4);}
			      if(k==6)
				     {setcolor(5); outtextxy(65,302,"06");  setcolor(WHITE); outtextxy(155,302,ch2); outtextxy(345,302,ch3); outtextxy(510,302,ch4);}
			      if(k==7)
				 {setcolor(5); outtextxy(65,332,"07");  setcolor(WHITE); outtextxy(155,332,ch2); outtextxy(345,332,ch3); outtextxy(510,332,ch4);}
			      if(k==8)
				{setcolor(5); outtextxy(65,362,"08");  setcolor(WHITE); outtextxy(155,362,ch2); outtextxy(345,362,ch3); outtextxy(510,362,ch4);}
			      if(k==9)
				{setcolor(5); outtextxy(65,392,"09");  setcolor(WHITE); outtextxy(155,392,ch2); outtextxy(345,392,ch3); outtextxy(510,392,ch4);}
			      if(k==10)
				{setcolor(5); outtextxy(65,422,"10");  setcolor(WHITE); outtextxy(155,422,ch2); outtextxy(345,422,ch3); outtextxy(510,422,ch4);}




				i++;
				}
				j++;
			}

			fclose(fp);

		 }


outtextxy(10,435,"Exit");
outtextxy(400,435,"Menu");

load_mouse_driver();
     while(1)
{
int x,y,cl;


in.x.ax=3;
int86(0x33,&in,&out);

x=out.x.cx; // To get x coordinate
y=out.x.dx; // To get y coordinate
cl=out.x.bx; // 1/0 ; 1 for mouse click



 if(x>10 && x<50 && y>435 && y<=460 && cl==1)
{
check=1;
unload_mouse_driver();
delay(200);
exit(1);
}
else if(x>=400 && x<440 && y>=435 && y<=460 && cl==1)//menu
{
unload_mouse_driver();
cleardevice();
bookopen_image();
front1();
}


}



}

void total_cgpa()
{



		cleardevice();

		load_mouse_driver();

			setcolor(WHITE);
			setbkcolor(BLACK);
			rectangle(350,200,450,230);
rectangle(350,250,450,280);
outtextxy(200,200,"Student Name");
outtextxy(200,250,"Student ID");
rectangle(255,300,350,330);
outtextxy(280,305,"Search");
outtextxy(10,435,"exit");
gotoxy(45,14);
gets(studentname);
gotoxy(45,17);
gets(studentid);

		while(1)
		{
			int x,y,cl,a;
			allcgpa=0,meancgpa=0,gpa11=0,count=0;
			in.x.ax=3;
			int86(0x33,&in,&out);

			x=out.x.cx;      // To get x coordinate
			y=out.x.dx;      // To get y coordinate
			cl=out.x.bx;     // 1/0 ; 1 for mouse click
			if(x>=250 && x<=350 && y>=250 && y<=350 && cl==1) //checking if the mouse inside the rectangale and the user click on it...
				{

				     load_mouse_driver();
				     cleardevice();

                       rectangle(5,5,425,80);
     rectangle(5,42,425,42);
     rectangle(200,5,200,80);
     settextstyle(3,0,1);
     outtextxy(30,10,"Student Name");
     outtextxy(30,45,"Student ID");
     outtextxy(12,93,"Semester");
     outtextxy(575,93,"CGPA");
      outtextxy(245,93,"GPA");
      outtextxy(10,450,"menu");
      outtextxy(450,450,"exit");
       rectangle(5,90,635,400);
	rectangle(5,120,635,400);
	rectangle(5,150,635,400);
     rectangle(5,180,635,400);
   rectangle(5,210,635,400);
   rectangle(5,240,635,400);
   rectangle(5,280,635,400);
    rectangle(5,310,635,400);
     rectangle(5,340,635,400);
      rectangle(5,370,635,400);
     rectangle(215,90,215,400);
       rectangle(477,90,477,400);
       fp2=fopen("c:\\cgpa11.txt","r");
       while(!feof(fp2)){
       fscanf(fp2,"%s",&ch);
       if(strcmp(studentid,ch)==0){
                gotoxy(31,2);                   
	   fscanf(fp2,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp2,"%s",&ch);
     printf("%s",ch);
     fscanf(fp2,"%s",&ch);
     gotoxy(32,9);
     printf("%s",ch);
     gotoxy(5,9);
     printf("year 1 semester 1");
     gpa11=atof(ch);
     allcgpa=(allcgpa+gpa11);
     count=count+1;
     meancgpa=(allcgpa/count);
     gotoxy(63,9);
     printf("%.2f",meancgpa);
     gpa11=0;
     }
     }
     fclose(fp2);
   fp2=fopen("c:\\cgpa12.txt","r");
     while(!feof(fp2)){
       fscanf(fp2,"%s",&ch);
       if(strcmp(studentid,ch)==0){
                gotoxy(31,2);                   
	   fscanf(fp2,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp2,"%s",&ch);
     printf("%s",ch);
     gotoxy(5,11);
     printf("year 1 semester 2");
     fscanf(fp2,"%s",&ch);
     gotoxy(32,11);
     printf("%s",ch);
     gpa11=atof(ch);
     allcgpa=(allcgpa+gpa11);
      count=count+1;
      meancgpa=(allcgpa/count);
     gotoxy(63,11);
     printf("%.2f",meancgpa);
     gpa11=0;
     }
   /*  else{
     allcgpa=0,meancgpa=0,gpa11=0,count=0;
     gotoxy(  */
     }
     fclose(fp2);
     fp2=fopen("c:\\cgpa21.txt","r");
     while(!feof(fp2)){
       fscanf(fp2,"%s",&ch);
       if(strcmp(studentid,ch)==0){
                gotoxy(31,2);                   
	   fscanf(fp2,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp2,"%s",&ch);
     printf("%s",ch);
     fscanf(fp2,"%s",&ch);
     gotoxy(32,13);
     printf("%s",ch);
     gotoxy(5,13);
     printf("year 2 semester 1");
   gpa11=atof(ch);
     allcgpa=(allcgpa+gpa11);
      count=count+1;
      meancgpa=(allcgpa/count);
     gotoxy(63,13);
     printf("%.2f",meancgpa);
     gpa11=0;
     }
     }
     fclose(fp2);
     fp2=fopen("c:\\cgpa22.txt","r");
     while(!feof(fp2)){
       fscanf(fp2,"%s",&ch);
       if(strcmp(studentid,ch)==0){
                gotoxy(31,2);                   
	   fscanf(fp2,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp2,"%s",&ch);
     printf("%s",ch);
       gotoxy(5,15);
     printf("year 2 semester 2");
     fscanf(fp2,"%s",&ch);
     gotoxy(32,15);
     printf("%s",ch);
     gpa11=atof(ch);
     allcgpa=(allcgpa+gpa11);
      count=count+1;
      meancgpa=(allcgpa/count);
     gotoxy(63,15);
     printf("%.2f",meancgpa);
     gpa11=0;
     }
     }
     fclose(fp2);
     fp2=fopen("c:\\cgpa31.txt","r");
     while(!feof(fp2)){
       fscanf(fp2,"%s",&ch);
       if(strcmp(studentid,ch)==0){
                gotoxy(31,2);                   
	   fscanf(fp2,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp2,"%s",&ch);
     printf("%s",ch);
       gotoxy(5,17);
     printf("year 3 semester 1");
     fscanf(fp2,"%s",&ch);
     gotoxy(32,17);
     printf("%s",ch);
     gpa11=atof(ch);
     allcgpa=(allcgpa+gpa11);
      count=count+1;
      meancgpa=(allcgpa/count);
     gotoxy(63,17);
     printf("%.2f",meancgpa);
     gpa11=0;
     }
     }
     fclose(fp2);
     fp2=fopen("c:\\cgpa32.txt","r");
     while(!feof(fp2)){
       fscanf(fp2,"%s",&ch);
       if(strcmp(studentid,ch)==0){
                gotoxy(31,2);                   
	   fscanf(fp2,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp2,"%s",&ch);
     printf("%s",ch);
       gotoxy(5,19);
     printf("year 3 semester 2");
     fscanf(fp2,"%s",&ch);
     gotoxy(32,19);
     printf("%s",ch);
    gpa11=atof(ch);
     allcgpa=(allcgpa+gpa11);
      count=count+1;
      meancgpa=(allcgpa/count);
     gotoxy(63,19);
     printf("%.2f",meancgpa);
     gpa11=0;
     }
     }
     fclose(fp2);
     fp2=fopen("c:\\cgpa41.txt","r");
     while(!feof(fp2)){
       fscanf(fp2,"%s",&ch);
       if(strcmp(studentid,ch)==0){
                gotoxy(31,2);                   
	   fscanf(fp2,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp2,"%s",&ch);
     printf("%s",ch);
       gotoxy(5,21);
     printf("year 4 semester 1");
     fscanf(fp2,"%s",&ch);
     gotoxy(32,21);
     printf("%s",ch);
     gpa11=atof(ch);
     allcgpa=(allcgpa+gpa11);
      count=count+1;
      meancgpa=(allcgpa/count);
     gotoxy(63,21);
     printf("%.2f",meancgpa);
    gpa11=0;
     }
     }
      fclose(fp2);
     fp2=fopen("c:\\cgpa42.txt","r");
     while(!feof(fp2)){
       fscanf(fp2,"%s",&ch);
       if(strcmp(studentid,ch)==0){
                gotoxy(31,2);                   
	   fscanf(fp2,"%s",&ch);
     printf("%s",ch);


     gotoxy(31,4);
    fscanf(fp2,"%s",&ch);
     printf("%s",ch);
       gotoxy(5,23);
     printf("year 4 semester 2");
     fscanf(fp2,"%s",&ch);
     gotoxy(32,23);
     printf("%s",ch);
     gpa11=atof(ch);
     allcgpa=(allcgpa+gpa11);
      count=count+1;
      meancgpa=(allcgpa/count);
     gotoxy(63,23);
     printf("%.2f",meancgpa);
     gpa11=0;
     break;
     }
     }
     fclose(fp2);
     gotoxy(5,25);
     printf("Total CGPA");
     gotoxy(63,25);
     printf("%.2f",meancgpa);
     
      while(1)
		{
			int x,y,cl,a;
			allcgpa=0,meancgpa=0,gpa11=0,count=0;
			in.x.ax=3;
			int86(0x33,&in,&out);

			x=out.x.cx;      // To get x coordinate
			y=out.x.dx;      // To get y coordinate
			cl=out.x.bx;     // 1/0 ; 1 for mouse click
		       if(x>=0 && x<=20 && y>=400 && y<=500 && cl==1) //checking if the mouse inside the rectangale and the user click on it...
				{
		    front1();
		    }
	   else  if(x>=400 && x<=500 && y>=400 && y<=500 && cl==1){
                exit(1);
                }
                }
                }
                else if( x>=0 && x<=20 && y>=400 && y<=500 && cl==1){
                     exit(1);
                     }

		}

}

