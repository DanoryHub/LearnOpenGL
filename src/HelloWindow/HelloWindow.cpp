#include <iostream>

#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include "HelperFunctions.h"


int CreateWindow()
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
		
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}