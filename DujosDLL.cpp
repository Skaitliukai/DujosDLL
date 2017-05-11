// This is the main DLL file.

#include "stdafx.h"

#include "DujosDLL.h"
#include "Recognition.cpp"
#include <string>

namespace DujosDLL {
	double Rodmenys::getRodmenis() {
		ContourWithData cwd = ContourWithData();
		return std::stod(cwd.init());
	}
}
