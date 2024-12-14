#include<iostream>
#include<GL/glut.h>
#include<cmath>
#include<algorithm>

using namespace std;



void plot(float x,float y,float z){
	
	glVertex3f(700+x,400+y,z);


}


void cube(){

	float a = 200;
	
	glBegin(GL_LINE_LOOP);
	
	glColor3f(1,1,0);
	
	plot(a,a,a);
	plot(a,a,0);
	plot(a,0,0);
	plot(a,0,a);
	
	glEnd();
	
	
	glBegin(GL_LINE_LOOP);
	glColor3f(1,0,1);
	
	plot(0,a,a);
	plot(0,a,0);
	plot(0,0,0);
	plot(0,0,a);
	
	glEnd();
	
	
	glBegin(GL_LINE_LOOP);
	glColor3f(0,1,1);
	
	plot(a,a,a);
	plot(0,a,a);
	plot(0,0,a);
	plot(a,0,a);
	
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glColor3f(1,1,1);
	
	plot(a,a,0);
	plot(0,a,0);
	plot(0,0,0);
	plot(a,0,0);
	
	glEnd();

}



void display(){

	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	
	glPushMatrix(); ////// for stopping infinite rotations
	glRotatef(45,0,1,0);
	glRotatef(-45,1,0,0);
	cube();
	glPopMatrix();   //////  for stopping infinite rotations

	glFlush();
	glutSwapBuffers();   /////// for swapping depth and color bits
}

void setup(){

	glViewport(0,0,800,800);

	glOrtho(0,800,0,800,-1000,1000);

}



int main(int argc,char** argv){

	glutInit(&argc,argv);
	
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(800,800);
	
	glutCreateWindow("JAI_SHREE_RAM");
	
	
	setup();
	
	glutDisplayFunc(display);


	glutMainLoop();

	return 0;

}
