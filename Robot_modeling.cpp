#include <GL/glut.h>

void DrawQuad()
{
	glBegin(GL_QUADS);
	glVertex2f(-1, -1);
	glVertex2f(1, -1);
	glVertex2f(1, 1);
	glVertex2f(-1, 1);
	glEnd();
}

void Display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glColor3f(0, 7, 0);
	glTranslatef(0.0, 8.0, -10.0);   //공통적으로 적용
	glPushMatrix();
	DrawQuad(); //최초머리

	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0, -5.0, 0.0);
	glScalef(3, 4, 1);
	DrawQuad();  //몸통

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-3.5, -3.5, 0.0);
	glScalef(0.5, 1.5, 1);
	DrawQuad(); //왼팔 윗부분

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-3.5, -6, 0.0);
	glScalef(0.25, 1.5, 1);
	DrawQuad(); //왼팔 아랫부분

	glPopMatrix();
	glPushMatrix();
	glTranslatef(3.5, -3.5, 0.0);
	glScalef(0.5, 1.5, 1);
	DrawQuad(); //오른팔 윗부분

	glPopMatrix();
	glPushMatrix();
	glTranslatef(3.5, -6, 0.0);
	glScalef(0.25, 1.5, 1);
	DrawQuad(); //오른팔 아랫부분

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.5, -11, 0.0);
	glScalef(1, 2, 1);
	DrawQuad(); //왼발 윗부분

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.5, -15, 0.0);
	glScalef(0.5, 2, 1);
	DrawQuad(); //왼발 아랫부분


	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5, -11, 0.0);
	glScalef(1, 2, 1);
	DrawQuad(); //오른발 윗부분

	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5, -15, 0.0);
	glScalef(0.5, 2, 1);
	DrawQuad(); //오른발 아랫부분
	glPopMatrix();
	glFlush();
}

int main() {
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("hw_2_6");
	glFrustum(-5.0, 5.0, -5.0, 5.0, 5.0, 100.0);
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;
}
