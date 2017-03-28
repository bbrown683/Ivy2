// MIT License
//
// Copyright (c) 2017 Ben Brown
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef __SHADER_H__
#define __SHADER_H__

#include <string>
#include <vector>
#include "GraphicsInclude.h"

namespace Ivy {
namespace Graphics {
struct Attribute {

};

struct Uniform {

};

class Shader {
 public:
  Shader(std::string source, GLenum stage);
  void Bind();
  bool Create();
  bool Compile();
  bool Destroy();
  void Unbind();

  GLuint get_id();
  GLenum get_stage();
  std::string get_source();
  std::vector<Attribute> get_attributes();
  std::vector<Uniform> get_uniforms();

 private:
  GLuint id;
  GLenum stage;
  std::string source;
  std::vector<Attribute> attributes;
  std::vector<Uniform> uniforms;
};
}
}

#endif