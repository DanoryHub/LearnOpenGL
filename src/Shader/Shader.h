#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <iostream>
#include <filesystem>
#include "glm.hpp"


class Shader {
public:
    // Program id
    unsigned int ID;

    Shader(const char* vertexPath, const char* fragmentPath);
    ~Shader();

    // Use/Activate shader
    void use() const;

    // Setters for uniforms
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;
    void setMat4(const std::string& name, glm::mat4 value) const;
};


#endif
