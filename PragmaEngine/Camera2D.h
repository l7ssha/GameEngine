/*
------------------------- GAME ENGINE BY L7SSHA | ALL RIGTS RESERVED -------------------------
PragamEngine version 1.0
Copyright (c) 2016 Szymon "l7ssha" Uglis

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to no one to use this software for any purpose,
including commercial application

------------------------- GAME ENGINE BY L7SSHA | ALL RIGTS RESERVED -------------------------
*/
#pragma once

#include <SDL\SDL.h>
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <GL\glew.h>

namespace PragmaEngine {

	class Camera2D
	{
	public:
		Camera2D();
		~Camera2D();

		//sets up the orthographic matrix and screen dimensions
		void init(int screenWidth, int screenHeight);

		//updates the camera matrix if needed
		void update();

		//setters
		void setPosition(const glm::vec2& newPosition) { _position = newPosition; _needsMatrixUpdate = true; }
		void setScale(float newScale) { _scale = newScale; _needsMatrixUpdate = true; }

		//getters
		glm::vec2 getPosition() { return _position; }
		float getScale() { return _scale; }
		glm::mat4 getCameraMatrix() { return _cameraMatrix; }

	private:
		int _screenWidth, _screenHeight;
		bool _needsMatrixUpdate;
		float _scale;
		glm::vec2 _position;
		glm::mat4 _cameraMatrix;
		glm::mat4 _orthoMatrix;
	};


}