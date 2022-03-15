#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(.5);
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);

	glVertex2f(-0.50f, 0.80f);
	glVertex2f(0.50f, 0.80f);

	glVertex2f(0.50f, 0.90f);
	glVertex2f(-0.50f, 0.90f);


	glVertex2f(0.8f, -0.40f);
	glVertex2f(0.9f, -0.40f);

	glVertex2f(0.9f, 0.40f);
	glVertex2f(0.8f, 0.40f);


	glVertex2f(-0.50f, -0.8f);
	glVertex2f(0.50f, -0.8f);

	glVertex2f(0.50f, -0.9f);
	glVertex2f(-0.50f, -0.9f);


	glVertex2f(-0.8f, -0.40f);
	glVertex2f(-0.9f, -0.40f);

	glVertex2f(-0.9f, 0.40f);
	glVertex2f(-0.8f, 0.40f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);         // Yellow
    glVertex2f(-0.5f, -0.8f);
    glVertex2f(0.5f, -0.8f);
    glVertex2f(0.8f, -0.5f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(-0.5f, 0.8f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.8f, -0.5f);
    glEnd();

    float y = 0.8f;
        for (float x = 0.5f; x<= 0.9f; x+=0.1f)

         {
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);

           glVertex2f(x,y-0.1f);
           glVertex2f(x+0.1f,y-0.1f);
           glVertex2f(x+0.1f,y);
           glVertex2f(x,y);
           y-=0.1;
           glEnd();

          }
    float y1 = -0.4f;
        for (float x = -0.9f; x<= -0.4f; x+=0.1f)

         {
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);

           glVertex2f(x,y1-0.1f);
           glVertex2f(x+0.1f,y1-0.1f);
           glVertex2f(x+0.1f,y1);
           glVertex2f(x,y1);
           y1-=0.1;
           glEnd();

          }
    float y2 = 0.8f;
        for (float x = -0.6f; x>= -1.0f; x-=0.1f)

         {
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);

           glVertex2f(x,y2-0.1f);
           glVertex2f(x+0.1f,y2-0.1f);
           glVertex2f(x+0.1f,y2);
           glVertex2f(x,y2);
           y2-=0.1;
           glEnd();

          }
    float y3 = -0.4f;
        for (float x = 0.8f; x>= 0.4f; x-=0.1f)

         {
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);

           glVertex2f(x,y3-0.1f);
           glVertex2f(x+0.1f,y3-0.1f);
           glVertex2f(x+0.1f,y3);
           glVertex2f(x,y3);
           y3-=0.1;
           glEnd();

          }

          glBegin(GL_QUADS);

    // BODY
	glColor3ub(0,0,0);
    glVertex2f(-0.70f, -0.30f);
	glVertex2f(0.70f, -0.30f);
	glVertex2f(0.70f, 0.30f);
	glVertex2f(-0.70f, 0.30f);

	// HEAD

	glVertex2f(-0.1f, 0.30f);
	glVertex2f(0.1f, 0.30f);
	glVertex2f(0.1f, 0.6f);
	glVertex2f(-0.1f, 0.6f);

	glVertex2f(-0.2f, 0.30f);
	glVertex2f(0.2f, 0.30f);
	glVertex2f(0.2f, 0.4f);
	glVertex2f(-0.2f, 0.4f);

	glVertex2f(-0.1f, 0.60f);
	glVertex2f(-0.05f, 0.60f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.1f, 0.65f);

	glVertex2f(0.1f, 0.60f);
	glVertex2f(0.05f, 0.60f);
	glVertex2f(0.05f, 0.65f);
	glVertex2f(0.1f, 0.65f);



	glEnd();
	// BODY

	float yb = 0.6f;
        for (float x = 0.4f; x<= 0.7f; x+=0.1f)

         {
        glBegin(GL_QUADS);
        glColor3ub(0,1,0);

           glVertex2f(x,yb-0.1f);
           glVertex2f(x+0.1f,yb-0.1f);
           glVertex2f(x+0.1f,yb);
           glVertex2f(x,yb);
           yb-=0.1;
           glEnd();

          }
        float y1b = -0.3f;
        for (float x = -0.7f; x<= -0.3f; x+=0.1f)

         {
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);

           glVertex2f(x,y1b-0.1f);
           glVertex2f(x+0.1f,y1b-0.1f);
           glVertex2f(x+0.1f,y1b);
           glVertex2f(x,y1b);
           y1b-=0.1;
           glEnd();

          }

          float y2b = 0.7f;
        for (float x = -0.4f; x>= -0.8f; x-=0.1f)

         {
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);

           glVertex2f(x,y2b-0.1f);
           glVertex2f(x+0.1f,y2b-0.1f);
           glVertex2f(x+0.1f,y2b);
           glVertex2f(x,y2b);
           y2b-=0.1;
           glEnd();

          }

          float y3b = -0.3f;
        for (float x = 0.6f; x>= 0.3f; x-=0.1f)

         {
        glBegin(GL_QUADS);
        glColor3ub(0,0,0);

           glVertex2f(x,y3b-0.1f);
           glVertex2f(x+0.1f,y3b-0.1f);
           glVertex2f(x+0.1f,y3b);
           glVertex2f(x,y3b);
           y3b-=0.1;
           glEnd();

          }
    // left wing
          glBegin(GL_QUADS);
          glColor3f(1.0f, 1.0f, 0.0f);

        glVertex2f(-0.4f, 0.60f);
        glVertex2f(-0.3f, 0.60f);
        glVertex2f(-0.3f, 0.7f);
        glVertex2f(-0.4f, 0.7f);

        glColor3f(0.0f, 0.0f, 0.0f);

        glVertex2f(-0.4f, 0.60f);
        glVertex2f(-0.3f, 0.60f);
        glVertex2f(-0.3f, 0.7f);
        glVertex2f(-0.4f, 0.7f);

        glVertex2f(-0.4f, 0.3f);
        glVertex2f(-0.3f, 0.3f);
        glVertex2f(-0.3f, 0.4f);
        glVertex2f(-0.4f, 0.4f);

        glVertex2f(-0.6f, 0.3f);
        glVertex2f(-0.4f, 0.3f);
        glVertex2f(-0.4f, 0.4f);
        glVertex2f(-0.6f, 0.4f);

        glVertex2f(-0.6f, 0.4f);
        glVertex2f(-0.4f, 0.4f);
        glVertex2f(-0.4f, 0.5f);
        glVertex2f(-0.6f, 0.5f);

        //right

        glVertex2f(0.4f, 0.7f);
        glVertex2f(0.3f, 0.7f);
        glVertex2f(0.3f, 0.6f);
        glVertex2f(0.4f, 0.6f);

        glVertex2f(0.4f, 0.3f);
        glVertex2f(0.3f, 0.3f);
        glVertex2f(0.3f, 0.4f);
        glVertex2f(0.4f, 0.4f);

        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.4f, 0.3f);
        glVertex2f(0.4f, 0.4f);
        glVertex2f(0.6f, 0.4f);

        glVertex2f(0.6f, 0.4f);
        glVertex2f(0.4f, 0.4f);
        glVertex2f(0.4f, 0.5f);
        glVertex2f(0.6f, 0.5f);

        // DOWN PART
        // LEFT

        glVertex2f(-0.4f, -0.6f);
        glVertex2f(-0.3f, -0.6f);
        glVertex2f(-0.3f, -0.3f);
        glVertex2f(-0.4f, -0.3f);

        glVertex2f(-0.3f, -0.3f);
        glVertex2f(-0.225f, -0.3f);
        glVertex2f(-0.225f, -0.55f);
        glVertex2f(-0.3f, -0.55f);

        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-0.4f, -0.5f);
        glVertex2f(-0.4f, -0.3f);
        glVertex2f(-0.5f, -0.3f);

        glVertex2f(-0.6f, -0.4f);
        glVertex2f(-0.5f, -0.4f);
        glVertex2f(-0.5f, -0.3f);
        glVertex2f(-0.6f, -0.3f);

        // right

        glVertex2f(0.4f, -0.6f);
        glVertex2f(0.3f, -0.6f);
        glVertex2f(0.3f, -0.3f);
        glVertex2f(0.4f, -0.3f);

        glVertex2f(0.3f, -0.3f);
        glVertex2f(0.225f, -0.3f);
        glVertex2f(0.225f, -0.55f);
        glVertex2f(0.3f, -0.55f);

        glVertex2f(0.5f, -0.5f);
        glVertex2f(0.4f, -0.5f);
        glVertex2f(0.4f, -0.3f);
        glVertex2f(0.5f, -0.3f);

        glVertex2f(0.6f, -0.4f);
        glVertex2f(0.5f, -0.4f);
        glVertex2f(0.5f, -0.3f);
        glVertex2f(0.6f, -0.3f);

        glVertex2f(0.25f, -0.45f);
        glVertex2f(0.15f, -0.45f);
        glVertex2f(0.15f, -0.3f);
        glVertex2f(0.25f, -0.3f);


        glVertex2f(-0.03f, -0.7f);
        glVertex2f(0.03f, -0.7f);
        glVertex2f(0.03f, -0.3f);
        glVertex2f(-0.03f, -0.3f);

        glVertex2f(-0.06f, -0.6f);
        glVertex2f(0.06f, -0.6f);
        glVertex2f(0.06f, -0.3f);
        glVertex2f(-0.06f, -0.3f);

        glVertex2f(-0.25f, -0.45f);
        glVertex2f(-0.15f, -0.45f);
        glVertex2f(-0.15f, -0.3f);
        glVertex2f(-0.25f, -0.3f);


//L
        glVertex2f(-0.1f, -0.5f);
        glVertex2f(-0.05f, -0.5f);
        glVertex2f(-0.05f, -0.3f);
        glVertex2f(-0.1f, -0.3f);
//R
        glVertex2f(0.1f, -0.5f);
        glVertex2f(0.05f, -0.5f);
        glVertex2f(0.05f, -0.3f);
        glVertex2f(0.1f, -0.3f);
        glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("BATMAN");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
