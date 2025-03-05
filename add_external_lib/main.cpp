#include<bits/stdc++.h>
#include<GLFW/glfw3.h>
int main() {
  GLFWwindow *window;
  if (!glfwInit()) {
    fprintf(stderr, "Failed to initialize GLFW3\n");
    exit(EXIT_FAILURE);
  }
  window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
  // Main loop
  while( !glfwWindowShouldClose(window) )
  {

    // Swap buffers
    glfwSwapBuffers(window);
    glfwPollEvents();
  }
  glfwTerminate();
  return 0;
}