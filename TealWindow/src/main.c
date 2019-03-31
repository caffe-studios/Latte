#include <emscripten/emscripten.h>
#define GLFW_INCLUDE_ES3
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <stdlib.h>

GLFWwindow *window;

static void generate_frame()
{
  float ratio;
  int width, height;
  glfwGetFramebufferSize(window, &width, &height);
  glfwSwapBuffers(window);
  glfwPollEvents();
}

int main()
{
  if (!glfwInit())
  {
    fputs("Faileid to initialize GLFW", stderr);
    emscripten_force_exit(EXIT_FAILURE);
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

  window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);

  glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);

  if (!window)
  {
    fputs("Failed to create GLFW window", stderr);
    glfwTerminate();
    emscripten_force_exit(EXIT_FAILURE);
  }

  glfwMakeContextCurrent(window);

  emscripten_set_main_loop(generate_frame, 0, 0);
}