#include <stdio.h> //header files
#include <glut.h>
#include "tower.cpp"

int flag = 0, a; //to create and destroy window
int b;
void *currentfont = GLUT_BITMAP_TIMES_ROMAN_24; //font style
void display(void);								//function declaration
void mydisplay(void);
void myinit();
void keys(unsigned char key, int x, int y);

// function drawstring(), it should contain four arguments - x, y, z coordinates and a string. While the coordinate assumed to be the space where string to be placed and the string is the value to be display.
void drawstring(float x, float y, float z, char *string)
{
	char *c;
	glRasterPos3f(x, y, z);
	for (c = string; *c != '\0'; c++)
	{
		glColor3f(0.0, 0.0, 0.0);
		glutBitmapCharacter(currentfont, *c); //display string
	}
}

//FOR TITLE PAGE
void frontscreen(void)
{
	glClear(GL_COLOR_BUFFER_BIT); 
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON); //background color
	glColor3f(1, 1, 1);
	glVertex2f(0, 0);
	
	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(0, 640);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(640, 640);
	
	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(640, 0);
	glEnd();
	glColor3f(0, 0, 1);											  //string color
	drawstring(165.0, 450.0, 0.0, "SDM INSTITUTE OF TECHNOLOGY"); //position and string
	glColor3f(0.7, 0, 1);
	drawstring(110, 400, 0.0, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3f(1, 0.5, 0);
	drawstring(196, 350, 0.0, "MINI PROJECT ON");
	glColor3f(0.9, 0.1, 0.3);
	drawstring(118, 300, 0.0, "**********SIMULATION OF TOWER OF HANOI**********");
	glColor3f(0.7, 0, 0.5);
	drawstring(50, 250, 0.0, "SUBMITTED BY:");
	glColor3f(0.0, 0, 1);
	drawstring(50, 150, 0.0, "KAVYA NAIK \t \t(4SU15CS030)");
	glColor3f(0.0, 0, 1);
	drawstring(50, 100, 0.0, "PRARTHANA U SHANBHAG (4SU15CS053)");
	glColor3f(0.7, 0, 0.5);
	drawstring(350, 250, 0.0, "GUIDED BY:");
	glColor3f(0.0, 0, 1);
	drawstring(350, 200, 0.0, "MR.ARJUN.K");
	glColor3f(0.0, 0, 1);
	drawstring(350, 100, 0.0, "PROF.ASHWITHA");
	glColor3f(0.0, 0, 1);
	drawstring(350, 150, 0.0, "PROF.CHINTESH");
	glColor3f(0.3, 0.4, 0.2);
	drawstring(196, 50, 0.0, "[PRESS ENTER TO START]");
	glFlush();
}

void myinit() //initialization
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
}
void k(unsigned char key, int x, int y) //to destroy window
{
	switch (key)
	{
	case 'b':
		glutDestroyWindow(b);
		break;
	case 'q':
		exit(0);
	}
}
void display() //HELP PAGE
{
	glBegin(GL_POLYGON); //background color
	glColor3f(1, 1, 1);
	glVertex2f(0, 0);
	//	glColor3f(0.6,1.0,0.9);
	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(0, 640);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(640, 640);
	//glColor3f(0.6,1,0.9);
	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(640, 0);
	glEnd();
	currentfont = GLUT_BITMAP_TIMES_ROMAN_24;
	glBegin(GL_POLYGON); //background color
	glColor3f(1, 1, 1);
	glVertex2f(0, 0);
	//	glColor3f(0.6,1.0,0.9);
	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(0, 640);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(640, 640);
	//glColor3f(0.6,1,0.9);
	glColor3f(0.6, 0.6, 0.6);
	glVertex2f(640, 0);
	glEnd();
	glColor3f(0, 0, 1);								//string color
	drawstring(196.0, 350.0, 0.0, "HELP FOR USER"); //position and string
	glColor3f(0.7, 0, 1);
	//source
	glBegin(GL_POLYGON); //background color
	glColor3f(0, 0.4, 0.4);
	glVertex2f(50, 280);
	glColor3f(0, 0.4, 0.4);
	glVertex2f(65, 280);
	glColor3f(0, 0.4, 0.4);
	glVertex2f(65, 265);
	glColor3f(0, 0.4, 0.4);
	glVertex2f(50, 265);
	glEnd();
	//destination
	glBegin(GL_POLYGON); //background color
	glColor3f(0.1, 0.1, 0.4);
	glVertex2f(50, 250);
	glColor3f(0.1, 0.1, 0.4);
	glVertex2f(65, 250);
	glColor3f(0.1, 0.1, 0.4);
	glVertex2f(65, 235);
	glColor3f(0.1, 0.1, 0.4);
	glVertex2f(50, 235);
	glEnd();

	drawstring(110, 400, 0.0, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3f(1, 0.5, 0);
	//drawstring(196,350,0.0,"MINI PROJECT ON");
	glColor3f(0.9, 0.1, 0.3);
	drawstring(118, 300, 0.0, "**********SIMULATION OF TOWER OF HANOI**********");
	glColor3f(0.7, 0, 0.5);
	drawstring(70, 270, 0.0, " : Source");
	glColor3f(0.7, 0, 0.5);
	drawstring(70, 240, 0.0, " : Destination");
	glColor3f(1.0, 0, 1);
	drawstring(50, 200, 0.0, "Controls : ");
	glColor3f(1, 0, 0.4);
	drawstring(50, 180, 0.0, "* s		: Increase the speed");
	glColor3f(1, 0, 0.4);
	drawstring(50, 150, 0.0, "* x		: Decrease the speed");

	glColor3f(1, 0, 0.4);
	drawstring(50, 120, 0.0, "* f		: Fullscreen view/back");
	glColor3f(1, 0, 0.4);
	drawstring(50, 90, 0.0, "* q/esc		: Quit");
	glColor3f(1, 0, 0.4);
	drawstring(300, 180, 0.0, "* 3		: Set number of disks to 3");
	glColor3f(1, 0, 0.4);
	drawstring(300, 150, 0.0, "* 4		: Set number of disks to 4");
	glColor3f(1, 0, 0.4);
	drawstring(300, 120, 0.0, "* 5		: Set number of disks to 5");
	glColor3f(1, 0, 0.4);
	drawstring(300, 90, 0.0, "* arrows		: Rotated viesws");
	glFlush();
}

void mous(int btn, int state, int x, int y)
{

	int y1 = 900 - y;
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN) //button clicked
	{
		if (x >= 510 && x <= 805 && y1 >= 701 && y1 <= 759) //button 1
		{													//calls tower function in xyz.cpp file
			tower();
		}
		if (x >= 510 && x <= 805 && y1 >= 568 && y1 <= 632) //button 2
		{
			glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
			glutInitWindowSize(1300, 900);
			glutInitWindowPosition(0, 0);
			b = glutCreateWindow("Help");
			myinit();
			glutKeyboardFunc(k);
			display();
		}
		if (x >= 510 && x <= 805 && y1 >= 435 && y1 <= 505) //button 3
		{
			exit(EXIT_SUCCESS);
		}
	}
}
void mydisplay(void)
{
	if (flag == 0)
		frontscreen(); //FIRST PAGE
	if (flag == 1)
	{
		//3 BUTTONS second page
		glClearColor(1.0, 1.0, 1.0, 0.0);
		glClear(GL_COLOR_BUFFER_BIT); //|GL_DEPTH_BUFFER_BIT);
		glBegin(GL_POLYGON);		  //background color
		glColor3f(1, 1, 1);
		glVertex2f(0, 0);
		glColor3f(0.3, 0.6, 0.5);
		glVertex2f(0, 640);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(640, 640);
		glColor3f(0.3, 0.6, 0.5);
		glVertex2f(640, 0);
		glEnd();
		glColor3f(0, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2f(196, 400 - 2);
		glVertex2f(196, 356 - 2);
		glVertex2f(308, 356 - 2);
		glVertex2f(308, 400 - 2);
		glEnd();

		glBegin(GL_POLYGON); //button 2
		glColor3f(1, 1, 1);
		glVertex2f(200, 360);
		glColor3f(0.1, 0.9, 0.9);
		glVertex2f(200, 402);
		glColor3f(1, 1, 1);
		//glColor3f(0.698,0.133,0.133);
		glVertex2f(310, 402);
		glColor3f(0.1, 0.9, 0.9);
		//    glColor3f(0.545,0,0);
		glVertex2f(310, 360);
		glEnd();
		glColor3f(0, 0.2, 1);
		currentfont = GLUT_BITMAP_HELVETICA_18;
		drawstring(222, 380, 0.0, "NEW SIMULATION");
		glColor3f(0, 0, 0);
		glBegin(GL_POLYGON); //button 3
		glVertex2f(196, 290 + 18);
		glVertex2f(196, 246 + 18);
		glVertex2f(308, 246 + 18);
		glVertex2f(308, 290 + 18);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(200, 250 + 20);
		glColor3f(0.1, 0.9, 0.9);
		glVertex2f(200, 292 + 20);
		glColor3f(1, 1, 1);
		//glColor3f(0.698,0.133,0.133);
		glVertex2f(310, 292 + 20);
		glColor3f(0.1, 0.9, 0.9);
		glVertex2f(310, 250 + 20);
		glEnd();
		glColor3f(0, 0.2, 1);
		currentfont = GLUT_BITMAP_HELVETICA_18;
		drawstring(240, 289, 0.0, "HELP");
		glColor3f(0, 0, 0);
		glBegin(GL_POLYGON);
		glVertex2f(196, 170 + 48);
		glVertex2f(196, 126 + 48);
		glVertex2f(308, 126 + 48);
		glVertex2f(308, 170 + 48);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glVertex2f(200, 130 + 50);
		glColor3f(0.1, 0.9, 0.9);
		glVertex2f(200, 172 + 50);
		glColor3f(1, 1, 1);
		//glColor3f(0.698,0.133,0.133);
		glVertex2f(310, 172 + 50);
		glColor3f(0.1, 0.9, 0.9);
		glVertex2f(310, 130 + 50);
		glEnd();
		glColor3f(0, 0.2, 1);
		currentfont = GLUT_BITMAP_HELVETICA_18;
		drawstring(240, 195, 0.0, "QUIT");
		glutMouseFunc(mous);
		glFlush();
	}
}

void keys(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 13: //if enter is pressed goto mydisplay()
		if (flag == 0)
			flag = 1;
		mydisplay();
		break;
	//case 'b':glutDestroyWindow(b);
	//break;
	case 'q':
		exit(0);
	}
}

//main function
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1200, 900);
	glutInitWindowPosition(0, 0);
	a = glutCreateWindow("TITLE");
	myinit();
	glutKeyboardFunc(keys);
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return 0;
}
