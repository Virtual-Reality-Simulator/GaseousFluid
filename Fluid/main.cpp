#include "stdafx.h"
#include "display.h"
#include "displayVec.h"

int main(int argc, char* argv[])
{
	PRINT("Program Starting");

	glutInit(&argc, argv);
	//initialize the window 
	initialize();
	
	PRINT("Entering Main Loop");
	glutMainLoop(); //this starts the infinite loop
	PRINT("Exiting Program");

	//DisplayVec dpv = DisplayVec(10);
	//dpv.test("../input/test.jpg", true);
	//return 0;
}
//1.  h2;  1/ dt
//2.  Store A