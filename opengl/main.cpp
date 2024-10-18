#define GLEW_STATIC
#include <glew.h>
#include <GLFW/glfw3.h>
#include <glm.hpp>
#include <vec2.hpp>
#include <vec3.hpp>
#include <vec4.hpp>
#include <mat4x4.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtc/type_ptr.hpp>
#include <iostream>

int main()
{
    glfwInit();

    glewExperimental = GLU_TRUE;
    if(glewInit() != GLEW_OK){
        std::cout << "Not ok";
    }
    else{
        glfwTerminate();
        std::cout << "OK";
    }
    
    return 0;
}