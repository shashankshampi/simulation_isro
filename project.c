#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

float i,j,count=0,count1=0,count3=0,flag=0,flag1=0,t=0,f=0,flag3=0;
void staticrocket(void)
{
	glColor3f(0.8,0.298039 ,0.26078);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	glColor3f(0.7,0.7,0.7);
        glBegin(GL_POLYGON);//rocket space ground
                        glVertex2f(290,230);
                        glVertex2f(700, 230);
                        glVertex2f(700, 700);
                        glVertex2f(200, 700);
                        glEnd();
	 glColor3f(0.0,0.5,0.5);//rocket top
                 glBegin(GL_POLYGON);
                 glVertex2f(350,400);
                 glVertex2f(365,440);
                 glVertex2f(380,400);
                 glEnd();

        glColor3f(1.2,1.2,1.2);//rocket base
                 glBegin(GL_POLYGON);
                 glVertex2f(350,300);
                 glVertex2f(380,300);
                 glVertex2f(380,400);
                 glVertex2f(350, 400);
                 glEnd();
	glColor3f(1.0,0.0,0.0); //band color
		glBegin(GL_POLYGON);
		glVertex2f(350,390);
		glVertex2f(380,390);
		glVertex2f(350,380);
		glVertex2f(380,380);
		glEnd();
	glColor3f(0.8,0.4,0.0);// band color
		glBegin(GL_POLYGON);
		glVertex2f(350,370);
		glVertex2f(380,370);
		glVertex2f(350,360);
		glVertex2f(380,360);
		glEnd();
	glColor3f(1.0,0.0,0.0);//band color
		glBegin(GL_POLYGON);
		glVertex2f(350,350);
		glVertex2f(380,350);
		glVertex2f(350,340);
		glVertex2f(380,340);
		glEnd();


        glColor3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);//left_side_top
        glVertex2f(350,400);
        glVertex2f(330,360);
        glVertex2f(350,360);
        glEnd();
                glBegin(GL_POLYGON);//left_side_bottom
        glVertex2f(350,330);
        glVertex2f(330,300);
        glVertex2f(350,300);
        glEnd();
                glBegin(GL_POLYGON);//right_side_bottom
        glVertex2f(380,330);
        glVertex2f(400,300);
        glVertex2f(380,300);
        glEnd();
                glBegin(GL_POLYGON);//right_side_top
        glVertex2f(380,400);
        glVertex2f(400,360);
        glVertex2f(380,360);
        glEnd();
		 glBegin(GL_POLYGON);//bottom_1_exhaust
        glVertex2f(350,300);
        glVertex2f(330,290);
        glVertex2f(365,275);
	glVertex2f(400,290);
	glVertex2f(380,300);
        glEnd();
	glColor3f(1.0,1.0,0.0);
                glBegin(GL_POLYGON);//bottom_2_exhaust
        glVertex2f(355,300);
        glVertex2f(350,290);
        glVertex2f(365,280);
        glVertex2f(380,290);
        glVertex2f(375,300);
        glEnd();
	glColor3f(0.1,0.0,0.0);
        glBegin(GL_POLYGON);//left_stand_holder
        glVertex2f(350,340);
        glVertex2f(300,340);
        glVertex2f(300,260);
        glVertex2f(305,260);
        glVertex2f(305,335);
	glVertex2f(350,335);
        glEnd();
        glBegin(GL_POLYGON);
		glVertex2f(380,340);//right_stand_holder
        	glVertex2f(430,340);
        	glVertex2f(430,260);
        	glVertex2f(425,260);
        	glVertex2f(425,335);
        glVertex2f(380,335);
        glEnd();

		
		glColor3f(0.8,0.298039 ,0.26078);
		glBegin(GL_POLYGON);//house 1
		glVertex2f(0.0,0.0);
		glVertex2f(90.0,0.0);
		glVertex2f(90.0,210.0);
		glVertex2f(0.0,210.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//HOUSE 1A
			glVertex2f(10.0,20.0);
			glVertex2f(10.0,50.0);
			glVertex2f(40.0,50.0);
			glVertex2f(40.0,20.0);
			glEnd();
		glBegin(GL_POLYGON);//HOUSE 1B
			glVertex2f(10.0,70.0);
			glVertex2f(40.0,70.0);
			glVertex2f(40.0,100.0);
			glVertex2f(10.0,100);
			glEnd();

		glBegin(GL_POLYGON);//HOUSE 1C
			glVertex2f(10.0,120.0);
			glVertex2f(40.0,120.0);
			glVertex2f(40.0,150.0);
			glVertex2f(10.0,150);
			glEnd();

		glBegin(GL_POLYGON);//HOUSE 1D
			glVertex2f(10.0,170.0);
			glVertex2f(40.0,170.0);
			glVertex2f(40.0,200.0);
			glVertex2f(10.0,200);
			glEnd();
		
		glColor3f(0.8,0.298039 ,0.26078);
  
		glBegin(GL_POLYGON);//house2
		glVertex2f(310,0);
		glVertex2f(500,0);
		glVertex2f(500,210);
		glVertex2f(310,210);
		glEnd();

		glColor3f(0.7,0.7,0.7);
		 glBegin(GL_POLYGON);//HOUSE2 1A
                        glVertex2f(340.0,20.0);
                        glVertex2f(380.0,20.0);
                        glVertex2f(380.0,50.0);
                        glVertex2f(340.0,50.0);
                        glEnd();
                glBegin(GL_POLYGON);//HOUSE2 1B
                        glVertex2f(340.0,70.0);
                        glVertex2f(380.0,70.0);
                        glVertex2f(380.0,100.0);
                        glVertex2f(340.0,100);
                        glEnd();

                glBegin(GL_POLYGON);//HOUSE2 1C
                        glVertex2f(340.0,120.0);
                        glVertex2f(380.0,120.0);
                        glVertex2f(380.0,150.0);
                        glVertex2f(340.0,150);
                        glEnd();

                glBegin(GL_POLYGON);//HOUSE2 1D
                        glVertex2f(340.0,170.0);
                        glVertex2f(380.0,170.0);
                        glVertex2f(380.0,200.0);
                        glVertex2f(340.0,200);
                        glEnd();
		glColor3f(0.7,0.7,0.7);
                 glBegin(GL_POLYGON);//HOUSE2 2A
                        glVertex2f(420.0,20.0);
                        glVertex2f(460.0,20.0);
                        glVertex2f(460.0,50.0);
                        glVertex2f(420.0,50.0);
                        glEnd();
                glBegin(GL_POLYGON);//HOUSE2 2B
                        glVertex2f(420.0,70.0);
                        glVertex2f(460.0,70.0);
                        glVertex2f(460.0,100.0);
                        glVertex2f(420.0,100);
                        glEnd();

                glBegin(GL_POLYGON);//HOUSE2 2C
                        glVertex2f(420.0,120.0);
                        glVertex2f(460.0,120.0);
                        glVertex2f(460.0,150.0);
                        glVertex2f(420.0,150);
                        glEnd();

                glBegin(GL_POLYGON);//HOUSE2 2D
                        glVertex2f(420.0,170.0);
                        glVertex2f(460.0,170.0);
                        glVertex2f(460.0,200.0);
                        glVertex2f(420.0,200);
                        glEnd();


		glColor3f(0.7,0.168039 ,0.24078); //house 2
		glBegin(GL_POLYGON);
		glVertex2f(110.0,0.0);
		glVertex2f(190.0,0.0);
		glVertex2f(190.0,150.0);
		glVertex2f(110.0,150.0);
		glEnd();
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//HOUSE 2A
			glVertex2f(130.0,5.0);
			glVertex2f(144.0,5.0);
			glVertex2f(144.0,40.0);
			glVertex2f(130.0,40.0);
			glEnd();
		
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//HOUSE 2B
			glVertex2f(130.0,55.0);
			glVertex2f(144.0,55.0);
			glVertex2f(144.0,95.0);
			glVertex2f(130.0,95.0);
			glEnd();
		
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_POLYGON);//HOUSE 2C
			glVertex2f(130.0,110.0);
			glVertex2f(144.0,110.0);
			glVertex2f(144.0,145.0);
			glVertex2f(130.0,145.0);
			glEnd();

              	glColor3f(0.7,0.168039 ,0.24078); // tower 
                glBegin(GL_LINE_LOOP);
                glVertex2f(20.0,240.0);
                glVertex2f(120.0,240.0);
                glVertex2f(80.0,400.0);
                glVertex2f(60.0,400.0);
                glEnd();
	    glColor3f(0.7,0.168039 ,0.24078); // tower 
                glBegin(GL_LINE_LOOP);
                glVertex2f(17.5,240);
                glVertex2f(122.5,240);
                glVertex2f(82.5,400.0);
                glVertex2f(57.5,400.0);
                glEnd();
	glColor3f(0.7,0.168039 ,0.24078); 
		glBegin(GL_LINE_STRIP);
		glVertex2f(20.0,240);
		glVertex2f(112.5,270.0);
		glVertex2f(27.5,270.0);
                        glVertex2f(105,300.0);
                        glVertex2f(35,300.0);
			glVertex2f(97.5,330.0);
			glVertex2f(42.5,330.0);
			glVertex2f(90.5,360.0);
			glVertex2f(50.5,360.0);
			glVertex2f(80.5,400.0);
                        glEnd();

		
		 glColor3f(0.7,0.168039 ,0.24078);
                glBegin(GL_LINE_STRIP);
                glVertex2f(20.0,240);
		glVertex2f(112.5,272.5);
		glVertex2f(27.5,270);
                        glVertex2f(105,302.5);
                        glVertex2f(35,300.0);
                        glVertex2f(97.5,332.5);
                        glVertex2f(42.5,330.0);
                        glVertex2f(90.5,362.5);
                        glVertex2f(50.5,360.0);
                        glVertex2f(80.5,400.0);
                        glEnd();

		glColor3f(0.1,0.0,0.1);
	//	glBegin(GL_LINES);//area partition
	//	glVertex2f(0.0,500);
	//	glVertex2f(800,500);
	//	glEnd();
		glBegin(GL_QUADS);//Road
		glVertex2f(220,0);
		glVertex2f(300,0);
		glVertex2f(170,700);
		glVertex2f(120,700);
		glEnd();
		
		glColor3f(1.0,1.0,1.0);//road strips
		glBegin(GL_LINES);
		glVertex2f(0,0);
		glVertex2f(245,0);
		glVertex2f(240,40);
		glVertex2f(235,80);
		glVertex2f(230,120);
		glVertex2f(225,160);
		glVertex2f(220,200);
		glVertex2f(215,240);
		glVertex2f(210,280);
		glVertex2f(205,320);
		glVertex2f(200,360);
		glVertex2f(195,400);
		glVertex2f(190,440);
		glVertex2f(185,480);
		glVertex2f(180,520);
		glVertex2f(175,560);
		glVertex2f(170,600);
		glVertex2f(165,640);
		glVertex2f(160,680);
		glVertex2f(155,720);
		glVertex2f(140,760);
		glVertex2f(145,800);
		glEnd();

for(j=0;j<=1000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	
		

		glFlush();
}

void motionrocket()
{
	count++;


for(i=95;i<=100;i++)
{
     if(count>=5)
	 {
		 	glClearColor(0.0 ,0.0 ,0.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	if(flag1==0)
	{
	stars();
	flag1=1;
	}
	else
	{
		stars1();

		flag1=0;
	}

	 }
	 else
	 {
	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	 }
	 if(count>=100)
	 //mars(20.0);
glColor3f(0.0,0.5,0.5);//rocket top
                 glBegin(GL_POLYGON);
                 glVertex2f(350,400+i);
                 glVertex2f(365,440+i);
                 glVertex2f(380,400+i);
                 glEnd();

        glColor3f(1.2,1.2,1.2);//rocket base
                 glBegin(GL_POLYGON);
                 glVertex2f(350,300+i);
                 glVertex2f(380,300+i);
                 glVertex2f(380,400+i);
                 glVertex2f(350, 400+i);
                 glEnd();
	glColor3f(1.0,0.0,0.0); //band color
		glBegin(GL_POLYGON);
		glVertex2f(350,390+i);
		glVertex2f(380,390+i);
		glVertex2f(350,380+i);
		glVertex2f(380,380+i);
		glEnd();
	glColor3f(0.8,0.4,0.0);// band color
		glBegin(GL_POLYGON);
		glVertex2f(350,370+i);
		glVertex2f(380,370+i);
		glVertex2f(350,360+i);
		glVertex2f(380,360+i);
		glEnd();
	glColor3f(1.0,0.0,0.0);//band color
		glBegin(GL_POLYGON);
		glVertex2f(350,350+i);
		glVertex2f(380,350+i);
		glVertex2f(350,340+i);
		glVertex2f(380,340+i);
		glEnd();


        glColor3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);//left_side_top
        glVertex2f(350,400+i);
        glVertex2f(330,360+i);
        glVertex2f(350,360+i);
        glEnd();
                glBegin(GL_POLYGON);//left_side_bottom
        glVertex2f(350,330+i);
        glVertex2f(330,300+i);
        glVertex2f(350,300+i);
        glEnd();
                glBegin(GL_POLYGON);//right_side_bottom
        glVertex2f(380,330+i);
        glVertex2f(400,300+i);
        glVertex2f(380,300+i);
        glEnd();
                glBegin(GL_POLYGON);//right_side_top
        glVertex2f(380,400+i);
        glVertex2f(400,360+i);
        glVertex2f(380,360+i);
        glEnd();
		 glBegin(GL_POLYGON);//bottom_1_exhaust
        glVertex2f(350,300+i);
        glVertex2f(330,290+i);
        glVertex2f(365,275+i);
	glVertex2f(400,290+i);
	glVertex2f(380,300+i);
        glEnd();
	glColor3f(1.0,1.0,0.0);
                glBegin(GL_POLYGON);//bottom_2_exhaust
        glVertex2f(355,300+i);
        glVertex2f(350,290+i);
        glVertex2f(365,280+i);
        glVertex2f(380,290+i);
        glVertex2f(375,300+i);
        glEnd();

for(j=0;j<=10000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
}




void rocket_cam()
{
	count++;
count3++;

for(i=0;i<=200;i++)
{

	glClearColor(0.196078  ,0.6 ,0.8,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

glColor3f(0.0,0.5,0.5);//rocket top
                 glBegin(GL_POLYGON);
                 glVertex2f(350,400+i);
                 glVertex2f(365,440+i);
                 glVertex2f(380,400+i);
                 glEnd();

        glColor3f(1.2,1.2,1.2);//rocket base
                 glBegin(GL_POLYGON);
                 glVertex2f(350,300+i);
                 glVertex2f(380,300+i);
                 glVertex2f(380,400+i);
                 glVertex2f(350, 400+i);
                 glEnd();
	glColor3f(1.0,0.0,0.0); //band color
		glBegin(GL_POLYGON);
		glVertex2f(350,390+i);
		glVertex2f(380,390+i);
		glVertex2f(350,380+i);
		glVertex2f(380,380+i);
		glEnd();
	glColor3f(0.8,0.4,0.0);// band color
		glBegin(GL_POLYGON);
		glVertex2f(350,370+i);
		glVertex2f(380,370+i);
		glVertex2f(350,360+i);
		glVertex2f(380,360+i);
		glEnd();
	glColor3f(1.0,0.0,0.0);//band color
		glBegin(GL_POLYGON);
		glVertex2f(350,350+i);
		glVertex2f(380,350+i);
		glVertex2f(350,340+i);
		glVertex2f(380,340+i);
		glEnd();


        glColor3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);//left_side_top
        glVertex2f(350,400+i);
        glVertex2f(330,360+i);
        glVertex2f(350,360+i);
        glEnd();
                glBegin(GL_POLYGON);//left_side_bottom
        glVertex2f(350,330+i);
        glVertex2f(330,300+i);
        glVertex2f(350,300+i);
        glEnd();
                glBegin(GL_POLYGON);//right_side_bottom
        glVertex2f(380,330+i);
        glVertex2f(400,300+i);
        glVertex2f(380,300+i);
        glEnd();
                glBegin(GL_POLYGON);//right_side_top
        glVertex2f(380,400+i);
        glVertex2f(400,360+i);
        glVertex2f(380,360+i);
        glEnd();
		 glBegin(GL_POLYGON);//bottom_1_exhaust
        glVertex2f(350,300+i);
        glVertex2f(330,290+i);
        glVertex2f(365,275+i);
	glVertex2f(400,290+i);
	glVertex2f(380,300+i);
        glEnd();
	glColor3f(1.0,1.0,0.0);
                glBegin(GL_POLYGON);//bottom_2_exhaust
        glVertex2f(355,300+i);
        glVertex2f(350,290+i);
        glVertex2f(365,280+i);
        glVertex2f(380,290+i);
        glVertex2f(375,300+i);
        glEnd();

for(j=0;j<=10000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
}



void stars()
{

	glColor3f(1.0,1.0,1.0);
	glPointSize(0.37);
	glBegin(GL_POINTS);
	glVertex2i(10,20);
	glVertex2i(20,100);
	glVertex2i(30,10);
	glVertex2i(15,150);
	glVertex2i(17,80);
	glVertex2i(200,200);
	glVertex2i(55,33);
	glVertex2i(400,300);
	glVertex2i(330,110);
	glVertex2i(125,63);
	glVertex2i(63,125);
	glVertex2i(20,10);
	glVertex2i(110,330);
	glVertex2i(440,430);
	glVertex2i(32,65);
	glVertex2i(110,440);
	glVertex2i(210,230);
	glVertex2i(390,490);
	glVertex2i(12,90);
	glVertex2i(400,322);
	glVertex2i(420,366);
	glVertex2i(455,400);
	glVertex2i(20,20);
	glVertex2i(111,120);
	glVertex2i(401,200);
	glVertex2i(230,30);
	glVertex2i(220,20);
	glVertex2i(122,378);
	glVertex2i(133,340);
	glVertex2i(345,420);
	glVertex2i(130,360);
	glVertex2i(333,120);
	glVertex2i(250,22);
	glVertex2i(242,11);
	glVertex2i(280,332);
	glVertex2i(233,40);
	glVertex2i(210,418);
	glVertex2i(256,12);
	glVertex2i(288,232);
	glVertex2i(247,36);
	glVertex2i(229,342);
	glVertex2i(257,47);
	glVertex2i(290,63);
	glVertex2i(232,72);
	glVertex2i(243,143);
	glVertex2i(100,200);
	glVertex2i(90,250);
	glVertex2i(80,225);
	glVertex2i(50,333);
	glVertex2i(60,350);
	glVertex2i(243,143);
	glVertex2i(243,143);
	glEnd();
}

void stars1()
{
	int l;
	glColor3f(1.0,1.0,1.0);
	glPointSize(0.3);
	glBegin(GL_POINTS);
	glVertex2i(50,20);
	glVertex2i(70,100);
	glVertex2i(80,10);
	glVertex2i(65,150);
	glVertex2i(67,80);
	glVertex2i(105,33);
	glVertex2i(450,300);
	glVertex2i(380,110);
	glVertex2i(175,63);
	glVertex2i(113,125);
	glVertex2i(70,10);
	glVertex2i(160,330);
	glVertex2i(490,430);
	glVertex2i(82,65);
	glVertex2i(160,440);
	glVertex2i(440,490);
	glVertex2i(62,90);
	glVertex2i(450,322);
	glVertex2i(420,366);
	glVertex2i(455,400);
	glVertex2i(60,20);
	glVertex2i(111,120);
	glVertex2i(451,200);
	glVertex2i(280,30);
	glVertex2i(220,20);
	glVertex2i(132,378);
	glVertex2i(173,340);
	glVertex2i(325,420);
	glVertex2i(180,360);
	glVertex2i(383,120);
	glVertex2i(200,22);
	glVertex2i(342,11);
	glVertex2i(330,332);
	glVertex2i(283,40);
	glVertex2i(210,418);
	glVertex2i(256,12);
	glVertex2i(288,232);
	glVertex2i(247,36);
	glVertex2i(229,342);
	glVertex2i(257,47);
	glVertex2i(290,63);
	glVertex2i(232,72);
	glVertex2i(243,143);
	glVertex2i(100,200);
	glVertex2i(90,250);
	glVertex2i(80,225);
	glVertex2i(50,333);
	glVertex2i(60,350);
	glVertex2i(243,143);
	glVertex2i(243,143);
	glEnd();
	for(l=0;l<=10000;l++)
		;
}


void display1()
{

count1++;
 if(count1==250)
      flag=1;
   if(flag==0)
       staticrocket();
 else if((count1==151)| (count1==152))
       rocket_cam();
  else
      motionrocket();
}







void myinit()

    {

        glClearColor(1.0,1.0,1.0,1.0);
        glPointSize(5.0);
        gluOrtho2D(0.0,550.0,0.0,550.0);
    }

    void main(int argc,char **argv)
    {

        glutInit(&argc,argv);
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(800,800);
        glutInitWindowPosition(-5.0,-5.0);
        glutCreateWindow("points");
        glutDisplayFunc(display1);
        myinit();
        glutMainLoop();
    }

