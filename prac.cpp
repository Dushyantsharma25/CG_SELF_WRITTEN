#include<iostream>
#include<GL/glut.h>

using namespace std;


void setup(){

	glClearColor(0,0,0,0);
	



}

void display(){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
		glBegin(GL_LINE_LOOP);
			glColor3f(1,0,0);
			glVertex2f(0.5,0.5);
			
			glColor3f(0,1,0);
			glVertex2f(-0.5,0.5);
			
			glColor3f(0,0,1);
			glVertex2f(-0.5,-0.5);
			
			glColor3f(1,0,1);
			glVertex2f(0.5,-0.5);
		glEnd();
	
	
	glFlush();
	

}




int main(int argc,char** argv){
	
	glutInit(&argc,argv);
	
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(600,600);
	
	
	glutCreateWindow("JAI_SHREE_RAM");
	
	setup();
	
	
	glutDisplayFunc(display);
	
	glutMainLoop();

	
	return 0;
}
