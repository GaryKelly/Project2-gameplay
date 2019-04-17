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

#include <GameObject.h>
#include "MyMatrix3.h"
#include "MyVector3.h"
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
	GameObject* game_object[5];
	RenderWindow window1;
	RenderWindow window2;
	Clock clock;
	Time time;
	Sensor vrSet;


	bool animate = false;
	vec3 animation = vec3(0.0f);
	float rotation = 0.0f;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	MyMatrix3 m_tbn;
	MyVector3 m_cameraTranslate; 
	float cameraChangeVal{ 0.0f };
	const int MAX_CUBES{ 5 };

};

#endif  // ! GAME_H