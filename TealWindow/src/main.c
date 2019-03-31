#include <emscripten/emscripten.h>
#define GLFW_INCLUDE_ES3
#include <GLFW/glfw3.h>

GLFWwindow *window;

// NOT DONE YET, GETTING CONSOLE ERROR

static void generate_frame()
{
  float ratio;
  int width, height;
  glfwGetFramebufferSize(window, &width, &height);
  ratio = width / (float)height;
  glViewport(0, 0, width, height);
  glClear(GL_COLOR_BUFFER_BIT);

  glfwSwapBuffers(window);
  glfwPollEvents();
}

int main()
{
  window = glfwCreateWindow(320, 240, "Hello World", NULL, NULL);

  if (!glfwInit())
    return -1;

  if (!window)
  {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  glClearColor(0.0f, 1.0f, 1.0f, 1.0f);

  while (!glfwWindowShouldClose(window))
  {
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  emscripten_set_main_loop(generate_frame, 0, 0);

  return 0;
}