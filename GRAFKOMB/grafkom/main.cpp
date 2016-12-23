/*
* Main file that contains the main() method. Takes care of
* instantiating the Scene class.
*
* This file has all of the callback functions that GLUT calls.
*
* The Initialiser class is defined here too. It had to be inlined
* here to save on the number of files to upload.
*
* Igor Kromin 40125374
*/

#include <GL/glut.h>
#include <iostream>

#include "Scene.h"
#include "Textures.h"

static Scene *scene;	/// the scene we render

static bool init(int argc, char *argv[]);	/// initialises the application
static void setupGL(void);	/// initialises OpenGL
static void resizeWindow(int w, int h);	/// resizes the window
static void keyboardInput(unsigned char key, int x, int y);	/// handles keyboard input
static void drawScene(void);	/// draws the scene
static void setupViewVolume(void);	/// sets up the viewing volume
static void getTextures(void);	/// initiates all textures
static void getSandTexture(void);	/// loads the sand texture

using namespace std;

/// Program starts here
int main(int argc, char *argv[])
{
	srand(time(NULL));
	init(argc, argv);

	// register our call-back functions
	glutDisplayFunc(drawScene);
	glutReshapeFunc(resizeWindow);
	glutKeyboardFunc(keyboardInput);

	// generate/load textures
	getTextures();

	// create the scene and set perspective projection as default
	scene = new Scene();
	scene->perspectiveMode = true;

	// create all quads for the floor of the aquarium
	Quad *quad;
	for (GLfloat i = -9.5; i <= 9.5; i++)
	{
		for (GLfloat j = -9.5; j <= 9.5; j++)
		{
			quad = new Quad();
			quad->ry = 0.0f;	// we don't want random rotation
			quad->rx = 90.0f;
			quad->x = 3.5f * i;
			quad->z = 3.5f * j;
			quad->scale(3.5f, 3.5f, 1.0f);
			scene->add(quad);
		}
	}

	glutMainLoop();
	
	return 0;
}

/// Resizes the current viewport to the full window size
void resizeWindow(int w, int h)
{
	glViewport(0, 0, w, h);

	// update the width and height we are using
	scene->width = w;
	scene->height = h;

	setupViewVolume();
}


/// Handles keyboard input for normal keys
void keyboardInput(unsigned char key, int x, int y)
{
	switch(key) {
	case 27:	// ESC key (Quits)
		exit(0);
		break;
	}
}


/// Draws the scene to the window
/*
* This function calls the render method of the current scene
* to render the contents of the scene onto the window created.
*/
void drawScene()
{
	scene->render();
}

/// Sets up the viewing volume to be used
void setupViewVolume(void)
{
	// work out the aspect ratio for width and height
	GLfloat aspect = (GLfloat)scene->width / (GLfloat)scene->height;
	GLfloat iaspect = (GLfloat)scene->height / (GLfloat)scene->width;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// setup new viewing volume based on the aspect ratio and projection type
	if (scene->perspectiveMode == true)
		gluPerspective(-45.0f, aspect, 1.0f, 250.0f);
	else {
		// orthographic mode correction depends on whether the ratio is greater
		// or less than 1.0 as the viewport must be scaled in different
		// directions to look right
		if (aspect >= 1.0f)
			glOrtho(-40.0f * aspect, 40.0f * aspect, -40.0f, 40.0f, 1.0f, 250.0f);
		else 
			glOrtho(-40.0f, 40.0f, -40.0f * iaspect, 40.0f * iaspect, 1.0f, 250.0f);
	}

	glMatrixMode(GL_MODELVIEW);
}


/// Initiates all textures
void getTextures(void)
{
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
	glGenTextures(2, Renderable::textures);

	getSandTexture();
}


/// Loads the sand texture
void getSandTexture(void)
{
	glBindTexture(GL_TEXTURE_2D, Renderable::textures[0]);
	gluBuild2DMipmaps(GL_TEXTURE_2D, GL_RGB, 64, 64, GL_RGB, GL_UNSIGNED_BYTE, sand_image.pixel_data);
}


/// Init GLUT and OpenGL
/*
* Creates a window that is half the size of the screen
* and then calls setupGL() to setup the initial OpenGL
* environment.
*/
bool init(int argc, char *argv[])
{
	// initialise glut
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	// setup our widnow now
    glutCreateWindow("Aquarium Scene 3D");
	glutFullScreen();

	// initialise opengl initial state
	setupGL();

	return true;
}


/// Sets up the OpenGL state machine environment
void setupGL(void)
{
	// blue green background colour
	glClearColor(0.0, 0.5, 0.55, 1.0);

	glShadeModel(GL_SMOOTH);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}
