#pragma once

#include "glad/glad.h"
#include "GLFW/glfw3.h"


void framebufferSizeCallback(GLFWwindow* window, int width, int heigth);

void processInput(GLFWwindow* window);

void initGLFW(const int contextVersionMajor, const int contextVersionMinor);

GLFWwindow* createWindow(const char* windowTitle);

void checkLoadGLAD();