#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#define KEY_ESC 32


int increment1=0, increment2 = 0, increment3=0, increment4=0, increment5=0;
void draw();
int pick = 0;
int option = 0;
int points;
int angle_rotation=0, angle_rotation1=0, angle_rotation2=0, angle_rotation3=0, angle_rotation4=0, angle_rotation5=0;
double warna=0.86, warna2=0.3, warna3=0.0 ;
int increment=0;
double x_initial = 0.00;
double y_initial = 0.00;
void drawPoint(float x, float y);
int a =0;

double myrandom(int m) {
	return rand()%m;
}

void init(void)
{
	glClearColor(0,0,0,0);
	gluOrtho2D(0.0,  600.0, 0.0, 600.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}

void drawFractal(void)
{
	points = 10000;
	draw();
}

void draw()
{
	glEnable(GL_BLEND);
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	glColor3f(1.0, 0.0,0.0);
    
	typedef GLfloat point2[2];
	int l;
	glClear(GL_COLOR_BUFFER_BIT);
			
	for(l=0;l<6;l++)
	{
		if(l==0)
		{	
			glPushMatrix();
			glRotated(angle_rotation,0,0,1);
			glColor3f(warna, warna2,warna3);
			point2 vertices[5] = { { 600, 500 }, { 505, 569 }, { 541, 681 }, { 659, 681 }, { 695, 569 } };
			int j, k;
			point2 p = { 10.0, 20.0 };	
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
			glPopMatrix();
		}
		else if(l == 1)
		{	
			glPushMatrix();
			glRotated(72,0,0,1);
			glTranslatef(0.0,0.4,0.0);
			glRotated(angle_rotation1,0,0,1);
			glColor3f(warna, warna2,warna3);
			point2 vertices[5] = { { 600, 500 }, { 505, 569 }, { 541, 681 }, { 659, 681 }, { 695, 569 } };
			int j, k;
			point2 p = { 10.0, 20.0 };	
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
			glPopMatrix();
		}
		else if(l == 2)
		{	
			glPushMatrix();
			glRotated(144,0,0,1);
			glTranslatef(0.0,0.4,0.0);
			glRotated(angle_rotation2,0,0,1);
			glColor3f(warna, warna2,warna3);
			point2 vertices[5] = { { 600, 500 }, { 505, 569 }, { 541, 681 }, { 659, 681 }, { 695, 569 } };
			int j, k;
			point2 p = { 10.0, 20.0 };	
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
			glPopMatrix();
		}
		else if(l == 3)
		{
			glPushMatrix();
			glRotated(216,0,0,1);
			glTranslatef(0.0,0.4,0.0);
			glRotated(angle_rotation3,0,0,1);
			glColor3f(warna, warna2,warna3);
			point2 vertices[5] = { { 600, 500 }, { 505, 569 }, { 541, 681 }, { 659, 681 }, { 695, 569 } };
			int j, k;
			point2 p = { 10.0, 20.0 };	
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
			glPopMatrix();
		}
		else if(l == 4)
		{	
			glPushMatrix();
			glRotated(288,0,0,1);
			glTranslatef(0.0,0.4,0.0);
			glRotated(angle_rotation4,0,0,1);
			glColor3f(warna, warna2,warna3);
			point2 vertices[5] = { { 600, 500 }, { 505, 569 }, { 541, 681 }, { 659, 681 }, { 695, 569 } };
			int j, k;
			point2 p = { 10.0, 20.0 };	
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
			glPopMatrix();
		}
		else if(l==5)
		{
			glPushMatrix();
			glRotated(0,0,0,1);
			glTranslatef(0.0,0.4,0.0);
			glRotated(angle_rotation5,0,0,1);
			glColor3f(warna, warna2,warna3);
			point2 vertices[5] = { { 600, 500 }, { 505, 569 }, { 541, 681 }, { 659, 681 }, { 695, 569 } };
			int j, k;
			point2 p = { 10.0, 20.0 };	
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
			glPopMatrix();
		}
	}
	angle_rotation5= angle_rotation5+increment5;
	angle_rotation4= angle_rotation4+increment4;
	angle_rotation3= angle_rotation3+increment3;
	angle_rotation2= angle_rotation2+increment2;
	angle_rotation1= angle_rotation1+increment1;
	angle_rotation= angle_rotation+increment;
	//a= a+1;
	glutSwapBuffers();
}

void drawPoint(float x, float y)
{
	glBegin(GL_POINTS);
	glVertex2f(x, y);
	glEnd();
}

static void key(unsigned char key, int x, int y)
{
    switch (key) 
    {
        //case 27 : 
        case 'o':
            increment-=5;
            break;
        case 'p':
            increment+=5;
            break;
            
         case 'v':
			increment1+=5;    
            break;
        case 'c':
        	increment1-=5;
        	break;
        	
        case 'a':
			increment2 +=5;    
            break;
        case 's':
        	increment2 -=5;
        	break;
        	
        case 'r':
			increment3 +=5;    
            break;
        case 'e':
        	increment3 -=5;
        	break;
        	
        case 'x':
			increment4 +=5;    
            break;
        case 'z':
        	increment4 -=5;
        	break;
        	
        case 'w':
			increment5 +=5;    
            break;
        case 'q':
        	increment5 -=5;
        	break;

		case 'k':
			increment1+=5;
			increment2+=5;
			increment3+=5;
			increment4+=5;
			increment5+=5;
	    	increment+=5;
	    	break;
	    case 'j':
	    	increment1-=5;
			increment2-=5;
			increment3-=5;
			increment4-=5;
			increment5-=5;
	    	increment-=5;
	    	break;
	    	
	    case 'g':
	    	increment1=0;
			increment2=0;
			increment3=0;
			increment4=0;
			increment5=0;
	    	increment=0;
	    	break;
	    	
	    case 't':
	    	warna=myrandom(255)/255;
	    	warna2=myrandom(255)/255;
	    	warna3=myrandom(255)/255;    	
			break;

    	glutPostRedisplay();
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(900, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Fractal");
	init();
	glutKeyboardFunc(key);
	glutDisplayFunc(drawFractal);
	glutIdleFunc(drawFractal);
    glutMainLoop();
}

