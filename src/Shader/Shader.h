#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <iostream>
#include <filesystem>


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
};


#endif
