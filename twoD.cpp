#include<iostream>
#include<GL/glut.h>
#include<vector>
#include<cmath>
using namespace std;


vector <pair<float,float>> p;

void plot(float x,float y){

	glVertex2f(x,y);


}

float rad(float a){

	return (M_PI*a)/180;



}

void rotate(float a){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	float x,y,j,k;
	for (int i =0;i<p.size();i++){
		j = p[i].first - 300;
		k = p[i].second - 300;
		x = j * cos(a) - k * sin(a);
		y = j * sin(a) + k * cos(a);
		
		plot(x+300,y+300);
	}
	glEnd();
	glFlush();

}



void translate(float x,float y){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glColor3f(0,1,1);
	for(int i=0;i<p.size();i++){
	
		plot(p[i].first + x,p[i].second + y);
	
	}
	glEnd();
	glFlush();
}



void scale(float x,float y){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
		glColor3f(1,1,0);
	for(int i=0;i<p.size();i++){
		
	
		plot(p[i].first * x,p[i].second * y);
	
	}
	glEnd();
	glFlush();
}


void draw(){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
		glColor3f(1,0,1);
	for(int i=0;i<p.size();i++){
	
		plot(p[i].first , p[i].second);
	
	
	}
	
	
	glEnd();
	glFlush();
}


void display(){

	glClear(GL_COLOR_BUFFER_BIT);
		int d;
	while(true){
		cout<<"1. Draw\n";
		cout<<"2. Translate\n";
		cout<<"3. Scale\n";
		cout<<"4. Rotate\n";
		cout<<"5. Exit\n";
		cout<<"6. Backchodi na karo yaar\n";
		cin>>d;
		if(d==1){
			draw();
		}else if (d==2){
			cout<<"Enter translating factors x y\n";
			float x,y;cin>>x>>y;
			translate(x,y);
		}else if (d==3){
			cout<<"Enter scaling factors x y\n";
			float x,y;cin>>x>>y;
			scale(x,y);
		}else if(d==4){
			cout<<"Enter Rotation angle a \n";
			float a;cin>>a;
			rotate(rad(a));
		}else if(d==5){
			return;
		}
	
	}

	glFlush();
}



void setup(){
	glViewport(0,0,800,800);

	glOrtho(0,800,0,800,-1,1);


}






int main(int argc,char** argv){

	cout<<"Enter number of vertices\n";
	int n;cin>>n;
	float q,w;
	cout<<"Enter all vertices in order x y\n";
	for(int i=0;i<n;i++){
		cin>>q>>w;
		p.push_back(make_pair(q,w));
	
	}

	glutInit(&argc,argv);

	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(800,800);
	
	glutCreateWindow("JAI_SHREE_RAM");
	
	setup();
	
	glutDisplayFunc(display);
	
	glutMainLoop();

	return 0;
}
