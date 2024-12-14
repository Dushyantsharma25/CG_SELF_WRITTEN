#include<iostream>
#include<GL/glut.h>

using namespace std;

void ram(){

	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_TRIANGLE_STRIP);
	
		glColor3f(1,0,0);
		glVertex2f(500,-500);
		
		glColor3f(0,1,0);
		glVertex2f(500,500);
		
		glColor3f(0,0,1);
		glVertex2f(-500,500);
		
		glColor3f(1,1,1);
		glVertex2f(-500,-500);
		
	
	glEnd();
	
	glFlush();

}

void size(){

	glViewport(0,0,800,800);
	
	glOrtho(0,800,0,800,-1,1);

}



int main(int argc,char** argv){

	glutInit(&argc,argv);
	
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(800,800);

	
	glutCreateWindow("JAI SHREE RAM");
	size();
	glutDisplayFunc(ram);

	glutMainLoop();



	return 0;

}
