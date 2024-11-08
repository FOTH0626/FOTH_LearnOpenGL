//
// Created by foth on 24-10-31.
//

#ifndef SHADER_H
#define SHADER_H


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
};

#endif //SHADER_H
