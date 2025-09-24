#include <iostream>

#include "glad.h"
#include "glfw3.h"


void framebufferSizeCallback(GLFWwindow* window, int width, int heigth)
{
	glViewport(0, 0, width, heigth);
}


void processInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, true);
	}
}

void initGLFW(const int contextVersionMajor, const int contextVersionMinor)
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, contextVersionMajor);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, contextVersionMinor);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

GLFWwindow* createWindow(const char* windowTitle)
{
	GLFWwindow* window = glfwCreateWindow(800, 600, windowTitle, NULL, NULL);
	if (window == nullptr)
	{
		std::cout << "Failed to instantiate a window" << std::endl;

		glfwTerminate();
		return nullptr;
	}

	return window;
}

void checkLoadGLAD()
{
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "failed to initialize GLAD" << std::endl;
		return;
	}
}