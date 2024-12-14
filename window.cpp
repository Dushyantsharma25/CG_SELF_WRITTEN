#include<GL/glut.h>
#include<iostream>

using namespace std;


void display(){
	glClear(GL_COLOR_BUFFER_BIT);   //clear the previos color bit
	glFlush();    //flush the open gl command to the screen

}


int main(int argc,char** argv){
	glutInit(&argc,argv);    // init is the  window initilizer
	
	// there are two functions of init 
	
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(800,600);
	
	// rename the title of window
	
	glutCreateWindow("JAI_SHREE_RAM");
	
	// display function resitering 
	
	glutDisplayFunc(display);
	
	
	// make a loop for continue the window
	
	glutMainLoop();
	
	return 0;


}
