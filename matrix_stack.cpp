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
	glTranslatef(0.0, 8.0, -10.0);   //∞¯≈Î¿˚¿∏∑Œ ¿˚øÎ
	glPushMatrix();
	DrawQuad(); //√÷√ ∏”∏Æ

	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0, -5.0, 0.0);
	glScalef(3, 4, 1);
	DrawQuad();  //∏ˆ≈Î

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-3.5, -3.5, 0.0);
	glScalef(0.5, 1.5, 1);
	DrawQuad(); //øﬁ∆» ¿≠∫Œ∫–

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-3.5, -6, 0.0);
	glScalef(0.25, 1.5, 1);
	DrawQuad(); //øﬁ∆» æ∆∑ß∫Œ∫–

	glPopMatrix();
	glPushMatrix();
	glTranslatef(3.5, -3.5, 0.0);
	glScalef(0.5, 1.5, 1);
	DrawQuad(); //ø¿∏•∆» ¿≠∫Œ∫–

	glPopMatrix();
	glPushMatrix();
	glTranslatef(3.5, -6, 0.0);
	glScalef(0.25, 1.5, 1);
	DrawQuad(); //ø¿∏•∆» æ∆∑ß∫Œ∫–

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.5, -11, 0.0);
	glScalef(1, 2, 1);
	DrawQuad(); //øﬁπﬂ ¿≠∫Œ∫–

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.5, -15, 0.0);
	glScalef(0.5, 2, 1);
	DrawQuad(); //øﬁπﬂ æ∆∑ß∫Œ∫–


	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5, -11, 0.0);
	glScalef(1, 2, 1);
	DrawQuad(); //ø¿∏•πﬂ ¿≠∫Œ∫–

	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5, -15, 0.0);
	glScalef(0.5, 2, 1);
	DrawQuad(); //ø¿∏•πﬂ æ∆∑ß∫Œ∫–
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
