#pragma once

#define WIN32_LEAN_AND_MEAN

// Windows Header Files
#define NOMINMAX
#define NOGDI
#define NOGDICAPMASKS
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// Common headers
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <cassert>
#include <functional>
#include <unordered_map>
#include <unordered_set>
#include <time.h>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#include "IMGUI/imgui.h"
#include "IMGUI/imgui-SFML.h"

#include "Utility.h"
#include "Handle.h"