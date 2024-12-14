#include<iostream>
#include<GL/glut.h>
#include<cmath>

using namespace std;

int X1,Y1,X2,Y2;


void display(){

	glClear(GL_COLOR_BUFFER_BIT);
	int dx = X2 - X1;
	int dy = Y2 - Y1;
	
	int D = 2*dy - dx;
	int x=X1,y=Y1;
	
	glBegin(GL_POINTS);
	
	while(x!=X2){
		glColor3f(1,1,0);
		
		glVertex2f(x,y);
		x++;
		if(D<0){
			D += 2*dy;
		}
		if(D>0){
			D += 2*dy - 2*dx;
			y++;
		}
	
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
	
	glutCreateWindow("Sita_Ram");
	setup();
	cout<<"Enter x1 x2 y1 y2;\n";
	cin>>X1>>Y1>>X2>>Y2;
	glutDisplayFunc(display);
	
	
	
	glutMainLoop();
	
	return 0;

}
