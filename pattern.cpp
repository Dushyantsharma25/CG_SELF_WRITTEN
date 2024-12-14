#include<iostream>
#include<GL/glut.h>
#include<algorithm>
#include<cmath>
using namespace std;


void plot(float x,float y){
	glBegin(GL_POINTS);
	glColor3f(0,1,1);
	glVertex2f(x,y);
	glEnd();
}

void circle(){

	float x = 0,R1 = 150,R2 = 100;
	float y = R1;
	float D = 5/4 - R1;
	plot(x,y);
	while(x<y){
		
		if(D<0){
			D+=2*x + 1;
			x++;
		
		}else{
		
			D+=2*(x-y) + 1;
			x++;
			y--;	
		
		}
		
		plot(400+x,400+y);
		plot(400-x,400+y);
		plot(400+x,400-y);
		plot(400-x,400-y);
		plot(400+y,400+x);
		plot(400-y,400+x);
		plot(400+y,400-x);
		plot(400-y,400-x);
	
	
	}
	x=0;
	y = R2;
	D = 5/4 - R2;
	plot(x,y);
	while(x<y){
		
		if(D<0){
			D+=2*x + 1;
			x++;
		
		}else{
		
			D+=2*(x-y) + 1;
			x++;
			y--;	
		
		}
		
		plot(400+x,400+y);
		plot(400-x,400+y);
		plot(400+x,400-y);
		plot(400-x,400-y);
		plot(400+y,400+x);
		plot(400-y,400+x);
		plot(400+y,400-x);
		plot(400-y,400-x);
	
	
	}


}

void triangle(){
	float a = 250/pow(3,0.5);

	glBegin(GL_LINE_LOOP);
		
		glColor3f(0,1,1);
		
		glVertex2f(400-a,400-100);
		glVertex2f(400+a,400-100);
		glVertex2f(400,400+250-100);

	glEnd();

}


void display(){
	
	glClear(GL_COLOR_BUFFER_BIT);

	circle();
	triangle();

	glFlush();

}

void setup(){

	glViewport(0,0,800,800);
	
	glOrtho(0,800,0,800,-1,1);


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
