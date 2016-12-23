#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

void draw();
int pick = 0;
int option = 0;
int points;
double x_initial = 0.00;
double y_initial = 0.00;
void drawPoint(float x, float y);

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
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
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	glColor3f(1.0, 0.0,0.0);
    
	typedef GLfloat point2[2];
	int l;
	glClear(GL_COLOR_BUFFER_BIT);
	for(l=0;l<5;l++)
	{
		if(l==0)
		{	
			glColor3f(0.86, 0.3,0.0);
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
		}
		else if(l == 1)
		{		
			glColor3f(0.0, 0.86,0.44);
			point2 vertices[5] = { { 440, 660 }, { 345, 729 }, { 381, 841 }, { 499, 841 }, { 535, 729 } };
			int j, k;
			point2 p = { 10.0, 20.0 };
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
		}
		else if(l == 2)
		{		
			glColor3f(0.0, 0.77,1.0);
			point2 vertices[5] = { { 760, 660 }, { 665, 729 }, { 701, 841 }, { 819, 841 }, { 855, 729 } };
			int j, k;
			point2 p = { 10.0, 20.0 };
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
		}
		else if(l == 3)
		{		
			glColor3f(1.0, 0.2,0.0);
			point2 vertices[5] = { { 440, 340 }, { 345, 409 }, { 381, 521 }, { 499, 521 }, { 535, 409 } };
			int j, k;
			point2 p = { 10.0, 20.0 };
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
		}
		else if(l == 4)
		{		
			glColor3f(0.0, 1.0,0.55);
			point2 vertices[5] = { { 760, 340 }, { 665, 409 }, { 701, 521 }, { 819, 521 }, { 855, 409 } };
			int j, k;
			point2 p = { 10.0, 20.0 };
			for (k = 0; k<points; k++)
			{
				j = rand() % 5;
				p[0] = (p[0] + vertices[j][0]) / 3;
				p[1] = (p[1] + vertices[j][1]) / 3;
				drawPoint(p[0]-x_initial,p[1]-y_initial);
			}
		}
	}
	
	glutSwapBuffers();
}

void drawPoint(float x, float y)
{
	glBegin(GL_POINTS);
	glVertex2f(x, y);
	glEnd();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(900, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Fractal");
	init();
	glutDisplayFunc(drawFractal);
    glutMainLoop();
}

