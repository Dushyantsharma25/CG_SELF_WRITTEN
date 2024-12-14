#include<iostream>
#include<GL/glut.h>

using namespace std;


void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	
		glBegin(GL_POINTS);
			glColor3f(1,1,1);
			glVertex2f(15,15);
		glEnd();
	
	
	glFlush();

}



int main(int argc,char** argv){
	glutInit(&argc,argv);
	
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(800,800);
	
	glutCreateWindow("Jai_Shree_Ram");
	
	glutDisplayFunc(display);
	
	glutMainLoop();

	return 0;
}
