#include <windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init(void);
void draw(void);

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("line");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,10.0,0.0,10.0,-10.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f( 0.196078,0.6,0.8);

    glBegin(GL_POLYGON);

    glVertex2f(3.0, 4.0);   // Titik 1
    glVertex2f(4.0, 2.0);   // Titik 2
    glVertex2f(6.0, 5.0);   // Titik 3

    glEnd();


    glutSwapBuffers();
}
