#include<iostream>
#include<GL/glut.h>
#include<cmath>

using namespace std;

float X1,Y1;
float X2,Y2;


void display(){

	glClear(GL_COLOR_BUFFER_BIT);
	
		
		
			
			
			
			float dx = X2 - X1;
			float dy = Y2 - Y1;
			
			float x_inc = dx / max(dx,dy);
			float y_inc = dy / max(dx,dy);
			
			int x=X1 , y=Y1;
			
			glBegin(GL_POINTS);
				while(x!=X2 && y!=Y2){
					
					glColor3f(1,1,0);
					glVertex2f(x,y);
					x += x_inc;
					y += y_inc;
				
				}			
			
			glEnd();
	
	
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
	
	cout<<"Enter the x ans y coordinates of starting of line\n";
	cin>>X1>>Y1;
	cout<<"Enter the x and y coordinates of ending of line\n";
	cin>>X2>>Y2;
	
	glutCreateWindow("JAI_SHREE_RAM");
	
	setup();
	
	
	glutDisplayFunc(display);
	
	glutMainLoop();


	return 0;
}
