#include <iostream>
#define GLEW_STATIC 
#include "3rd\include\glew\include\GL\glew.h"
#include "3rd\include\glfw\glfw3.h"
#include "3rd\include\glm\glm.hpp"
#include "3rd\include\glm\gtc\type_ptr.hpp"
#include "3rd\include\glm\gtc\matrix_transform.hpp"

#pragma comment (lib,"opengl32.lib")
#pragma comment (lib,"./3rd/lib/glew/glew32s.lib")
#pragma comment (lib,"./3rd/lib/glfw/glfw3.lib")

GLint screenWidth = 800.0f, screenHeight = 600.0f;

void main(){
	//init glfw
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
	glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
	GLFWwindow *window = glfwCreateWindow(screenWidth,screenHeight,"RenderPanorama",NULL,NULL);
	if (window == NULL)
	{
		printf("failed to create window");
		glfwTerminate();
	}
	glfwMakeContextCurrent(window);

	//init glew
	glewExperimental = true;
	glewInit();

	//init script

	//draw
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();//check touch events
		//draw

		glfwSwapBuffers(window);
	}
}