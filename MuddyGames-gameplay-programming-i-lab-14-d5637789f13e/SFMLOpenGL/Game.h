#ifndef GAME_H
#define GAME_H

#include <string>
#include <sstream>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

using namespace std;
using namespace sf;
using namespace glm;

class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();
private:
	RenderWindow window;
	Clock clock;
	Time time;
	bool animate = false;
	bool keyPressed = false;
	bool cubeFired = false;
	vec3 animation = vec3(0.0f);

	vec3 player = vec3(0.0, 0.0, 0.0);
	float score = 0.0f;
	float xPos = 0.0f;
	float zPos = 0.0f;

	float rotationX = 0.0f;
	float rotationY = 0.0f;

	float m_height = 0.0f;
	bool isRunning = false;
	void initialize();
	void initializeNPCCube();
	void update();
	void render();
	void renderNPC();
	void unload();
};

#endif  // ! GAME_H