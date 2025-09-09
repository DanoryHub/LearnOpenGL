#include <iostream>

#include "glad.h"
#include "glfw3.h"

#include "HelperFunctions.h"


int RenderTriangle()
{
	initGLFW(4, 4);
	GLFWwindow* window = createWindow("HelloWindow");


	glfwMakeContextCurrent(window);

	checkLoadGLAD();

	glViewport(0, 0, 800, 600);
	glfwSetFramebufferSizeCallback(window, framebufferSizeCallback);

	while (!glfwWindowShouldClose(window))
	{
		processInput(window);

		// rendering here


		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}