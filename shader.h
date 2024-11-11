//
// Created by foth on 24-10-31.
//

#ifndef SHADER_H
#define SHADER_H


#include "glm/glm.hpp"
#include <glad/glad.h>
#include <string>

class Shader {
public:
    unsigned int ID;
    Shader() = delete;
    Shader(const char* vuertexPath, const char* fragmentPath);

    void use() const;

    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void setMat4(const std::string &name, const glm::mat4 &mat) const;
private:
    static void checkCompileErrors(GLuint shader, std::string type);

};

#endif //SHADER_H
