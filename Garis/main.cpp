#include <windows.h>
#ifdef _APPLE_
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
    glutInitWindowSize(280, 230);
    glutInitWindowPosition(120, 110);
    glutCreateWindow("line");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.5, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,8.0,0.0,7.0,-10.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5.0);
    glBegin(GL_LINES);

    glColor3f(1.0, 0.0, 0.0);   //Warna Merah
    glVertex3f(5.0, 5.0, 0.0);  // Koordinat Titik 1
    glVertex3f(7.0, 3.0, 0.0);  // Koordinat Titik 2

    glEnd();

    glutSwapBuffers();
}
