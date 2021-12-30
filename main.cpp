
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

bool lampOn = false;
GLdouble left = 5.0;
GLdouble right = 13.0;
GLdouble bottom = 9.0;
GLdouble top = 3.0;
GLdouble nearValue = -10.0;
GLdouble farValue = 10.0;

void drawLeftWall(){
    if(lampOn){
        glColor3f (0.00, 0.65, 0.50);
    }
    else{
        glColor3f (0.00, 0.35, 0.40);
    }
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(5.0f, 3.0f, 0.0f);
	glVertex3f(5.0f, 9.0f, 0.0f);
	glVertex3f(6.0f, 7.0f, 0.0f);
	glVertex3f(6.0f, 3.75f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void drawRightWall(){
    if(lampOn){
        glColor3f (0.00, 0.65, 0.50);
    }
    else{
        glColor3f (0.00, 0.35, 0.40);
    }
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(13.0f, 3.0f, 0.0f);
	glVertex3f(13.0f, 9.0f, 0.0f);
	glVertex3f(12.0f, 7.0f, 0.0f);
	glVertex3f(12.0f, 3.75f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void drawTopWall(){
    if(lampOn){
        glColor3f (0.00, 0.75, 0.45);
    }
    else{
        glColor3f (0.00, 0.40, 0.50);
    }
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(13.0f, 3.0f, 0.0f);
	glVertex3f(5.0f, 3.0f, 0.0f);
	glVertex3f(6.0f, 3.75f, 0.0f);
	glVertex3f(12.0f, 3.75f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void drawMiddleWall(){
    if(lampOn){
        glColor3f (0.00, 0.80, 0.45);
    }
    else{
        glColor3f (0.00, 0.35, 0.45);
    }
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(6.0f, 7.0f, 0.0f);
	glVertex3f(12.0f, 7.0f, 0.0f);
	glVertex3f(12.0f, 3.75f, 0.0f);
	glVertex3f(6.0f, 3.75f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void drawFloor(){
    glColor3f (1.0, 1.0, 1.0);
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(13.0f, 9.0f, 0.0f);
	glVertex3f(5.0f, 9.0f, 0.0f);
	glVertex3f(6.0f, 7.00f, 0.0f);
	glVertex3f(12.0f, 7.00f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void drawLamp(){
    if(lampOn){
        glColor3f (1.0, 1.0, 1.0);
    }
    else{
        glColor3f (0.3, 0.3, 0.3);
    }
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
    glVertex3f(6.75f, 4.50f, 0.0f);
	glVertex3f(7.25f, 4.50f, 0.0f);
	glVertex3f(7.50f, 5.25f, 0.0f);
	glVertex3f(6.50f, 5.25f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void drawLampStand(){
    glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
    glVertex3f(7.00f, 5.25f, 0.0f);
    glVertex3f(7.05f, 5.25f, 0.0f);
    glVertex3f(7.05f, 7.00f, 0.0f);
	glVertex3f(7.00f, 7.00f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void drawTable(){
    if(lampOn){
        glColor3f (0.30, 0.10, 0.00);
    }
    else{
        glColor3f (0.10, 0.05, 0.00);
    }
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(8.0f, 6.0f, 0.0f);
	glVertex3f(10.0f, 6.0f, 0.0f);
	glVertex3f(10.0f, 7.00f, 0.0f);
	glVertex3f(8.0f, 7.00f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void drawTV(){
    glColor3f (0.0, 0.50, 1.00);
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(7.75f, 4.50f, 0.0f);
	glVertex3f(10.25f, 4.50f, 0.0f);
	glVertex3f(10.25f, 5.75f, 0.0f);
	glVertex3f(7.75f, 5.75f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	glColor3f (0.0, 0.0, 0.0);
	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	//Trapezoid
	glVertex3f(9.25f, 5.75f, 0.0f);
	glVertex3f(9.25f, 6.00f, 0.0f);
	glVertex3f(8.75f, 6.00f, 0.0f);
	glVertex3f(8.75f, 5.75f, 0.0f);

	glEnd(); //End quadrilateral coordinates
}
void turnOnLamp(){
    lampOn = true;
}
void turnOffLamp(){
    lampOn = false;
}

void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(left,right,bottom,top,nearValue,farValue);
}
void mouseInput(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            turnOnLamp();
         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
			turnOffLamp();
         break;
      default:
         break;
   }
}
void lookRight(){
    left = 9.0;
    right = 13.0;
}
void lookLeft(){
    left = 5.0;
    right = 9.0;
}
void lookFront(){
    left = 5.0;
    right = 13.0;
}
void specialKeyInput(int key, int x, int y)
{
	switch (key) {
	    case GLUT_KEY_LEFT:
            lookLeft();
            glutPostRedisplay();
            break;
        case GLUT_KEY_RIGHT:
            lookRight();
            glutPostRedisplay();
            break;
        case GLUT_KEY_UP:
            lookFront();
            glutPostRedisplay();
            break;
        default:
			break;
	}
}
void display(void)
{

    init ();
    glClear (GL_COLOR_BUFFER_BIT);

    drawLeftWall();
    drawRightWall();
    drawTopWall();
    drawFloor();
    drawMiddleWall();
    drawLamp();
    drawLampStand();
    drawTable();
    drawTV();

    glFlush ();
}

/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("My Room - 180101221");
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeyInput);
    glutMouseFunc(mouseInput);
    glutMainLoop();

    return 0; /* ISO C requires main to return int. */
}

