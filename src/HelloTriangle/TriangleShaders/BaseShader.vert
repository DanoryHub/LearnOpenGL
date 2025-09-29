#version 330 core

layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

uniform float horizontalOffset;

out vec3 ourColor;
out vec3 position;

void main()
{
   vec3 newLocation = aPos.xyz * -1;
   newLocation.x += horizontalOffset;
   gl_Position = vec4(newLocation, 1.0);
   ourColor = aColor;
   position = newLocation;
}
