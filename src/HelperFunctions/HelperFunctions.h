#pragma once

#include "glad.h"
#include "glfw3.h"


void framebufferSizeCallback(GLFWwindow* window, int width, int heigth);

void processInput(GLFWwindow* window);

void initGLFW(const int contextVersionMajor, const int contextVersionMinor);

GLFWwindow* createWindow(const char* windowTitle);

void checkLoadGLAD();