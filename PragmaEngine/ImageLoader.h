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
#include "GLTexture.h"
#include "picoPNG.h"
#include "IOManager.h"
#include "Errors.h"

#include <string>

namespace PragmaEngine {

	//Loads images into GLTextures
	class ImageLoader
	{
	public:
		static GLTexture loadPNG(std::string filePath);
	};

}