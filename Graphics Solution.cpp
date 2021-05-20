// Graphics Solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include "GL/glut.h"
#include  "Conio.h"
#include "Stdio.h"




void DrawLine() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(8);
	glBegin(GL_LINES);
	
	glVertex2d(0.0, 0.0);
	glVertex2d(20.0, 0.0);
	glVertex2d(20.0, 20.0);
	glVertex2d(0.0, 20.0);
	glVertex2d(10.0, 25.0);
	glEnd();
	glFlush();

}
void Initial() {
	glClearColor(0.0, 1.0, 1.0, 0.0);
	glColor3f(0, 1, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 600, 0, 800);

}

int main() {
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Lines Assignment");
	Initial();
	glutDisplayFunc(DrawLine);
	glutMainLoop();
	return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
