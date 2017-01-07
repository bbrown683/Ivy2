/*
MIT License

Copyright (c) 2017 Ben Brown

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef IVY_SHADER_H
#define IVY_SHADER_H

#include <string>

#include "Symbols.h"
#include "File.h"
#include "Renderer.h"

class IVY_API Shader {
public:
    Shader(std::string path, GLenum shaderType) {
        this->m_ShaderPath = path;
        this->m_ShaderType = shaderType;
    }
    ~Shader();

    bool Create();
    void Destroy();

    GLuint GetShaderID();
    GLenum GetShaderType();

    std::string GetShaderPath();
    std::string GetShaderSource();

private:

    GLuint m_ShaderID;
    GLenum m_ShaderType;

    std::string m_ShaderPath;
    std::string m_ShaderSource;

    bool m_Disposed;
};

#endif // IVY_SHADER_H