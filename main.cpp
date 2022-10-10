#include <iostream>
#include <cassert>

#include <GLFW/glfw3.h>


const int Width = 800;

const int Height = 600;

int main() {
	
	// Inicializar a biblioteca GLFW
	assert(glfwInit());

	// Criar uma janela
	GLFWwindow* Window = glfwCreateWindow(Width, Height, "Blue Marble", nullptr, nullptr);

	assert(Window);

	// Entrar no loop de eventos da aplicação

	while (!glfwWindowShouldClose(Window)) {

		// Processa todos os eventos da fila de eventos do GLFW
		// Eventos podem ser eventos do teclado, mouse, gamepad
		glfwPollEvents();

		// Envia o conteudo do framebuffer da janela para ser desenhado na tela
		glfwSwapBuffers(Window);
	}

	// Encerra a biblioteca GLFW
	glfwTerminate();

	return 0;
}