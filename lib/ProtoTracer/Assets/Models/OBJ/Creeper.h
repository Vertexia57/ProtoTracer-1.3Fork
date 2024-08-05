#pragma once

#include "..\..\..\Scene\Materials\Static\SimpleMaterial.h"
#include "..\..\..\Scene\Materials\Static\UVMap.h"
#include "..\..\..\Scene\Objects\Object3D.h"
#include "..\..\..\Renderer\Utils\IndexGroup.h"

class CreeperTex : public UVMap{
private:
	static const uint8_t rgbMemory[];
	static const uint8_t rgbColors[];

public:
	CreeperTex(Vector2D size, Vector2D offset) : UVMap(rgbMemory, rgbColors, 64, 64, 255) {
		SetSize(size);
		SetPosition(offset);
	}
};

const uint8_t CreeperTex::rgbMemory[] PROGMEM = {14,14,14,14,14,14,14,14,3,6,1,1,1,15,1,0,0,1,0,0,15,1,10,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,3,3,0,0,0,2,4,15,7,1,0,2,1,15,1,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,7,8,15,0,2,4,0,0,10,4,2,1,2,0,0,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,0,0,15,0,2,4,0,0,1,1,4,4,4,0,2,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,2,7,10,1,2,4,0,2,4,0,0,4,4,0,2,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,3,0,1,15,4,2,4,2,1,0,2,4,2,2,2,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,1,1,3,2,4,15,15,15,15,2,4,15,15,1,0,0,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,2,0,3,3,4,15,10,15,0,0,2,8,0,2,0,2,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,8,2,1,0,2,2,0,0,1,3,2,1,4,6,0,15,0,0,1,3,3,2,0,2,4,2,2,4,1,0,0,2,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,2,2,6,15,7,1,7,6,3,0,7,0,15,0,2,4,2,15,1,3,3,1,0,4,15,10,0,3,3,0,0,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,15,4,1,1,1,7,7,6,8,5,5,1,15,5,5,4,2,4,1,3,3,2,15,4,0,0,1,3,3,0,1,0,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,0,4,0,0,1,1,1,1,8,5,9,0,7,9,9,0,0,4,0,0,4,1,4,4,0,2,1,3,3,1,3,8,13,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,2,1,0,3,3,0,8,6,1,2,1,5,5,4,2,0,2,4,6,2,4,0,0,1,1,2,4,0,2,1,15,0,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,0,1,7,3,3,0,7,1,1,15,5,9,9,5,0,1,0,4,15,0,4,0,0,1,1,2,1,0,15,0,0,4,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,3,1,0,3,15,3,6,1,10,2,9,9,9,9,2,15,15,4,1,15,15,2,4,4,10,15,2,2,4,0,2,15,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,0,4,4,1,1,2,1,15,0,6,9,1,1,5,3,0,0,1,1,1,4,0,4,15,0,0,15,1,10,0,15,0,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,15,1,1,6,5,11,11,5,14,14,14,14,14,14,14,14,15,4,1,4,2,1,1,1,1,15,1,0,2,1,0,0,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,4,2,0,1,9,5,11,5,14,14,14,14,14,14,14,14,6,3,1,1,15,15,1,0,0,15,1,3,3,3,6,7,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,2,0,0,1,5,5,5,5,14,14,14,14,14,14,14,14,3,8,0,4,0,0,15,0,2,1,0,3,3,3,2,4,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,4,0,2,1,5,5,9,5,14,14,14,14,14,14,14,14,6,8,2,4,0,0,7,8,2,1,0,3,2,1,6,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,10,0,0,1,3,3,2,10,2,7,6,1,7,6,7,7,0,8,8,6,6,0,2,4,5,2,0,6,2,1,2,2,1,0,8,6,1,5,5,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,6,8,7,1,3,3,15,4,2,0,1,3,0,15,0,3,2,5,5,2,5,0,15,4,5,12,1,3,1,15,4,2,1,0,3,2,5,5,15,0,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,15,0,1,3,3,1,0,0,4,1,15,3,0,3,3,3,3,7,6,3,5,2,0,8,3,3,5,1,1,15,15,15,2,2,2,5,15,1,0,8,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,0,0,4,0,0,15,0,0,4,0,0,3,6,3,6,3,8,8,6,0,0,5,3,3,2,3,3,5,1,15,1,15,0,3,2,0,0,3,3,2,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,6,2,4,0,5,9,5,9,4,2,2,1,1,8,7,3,8,7,0,0,2,2,5,5,3,3,3,2,2,3,5,5,3,5,6,0,7,3,3,5,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,0,15,4,5,9,5,9,5,5,1,2,6,3,8,7,6,7,3,6,15,2,1,0,6,3,3,7,6,7,8,7,6,7,3,6,7,7,15,3,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,3,6,0,1,6,3,3,6,8,3,2,6,15,2,1,6,3,1,6,1,2,5,15,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,5,2,7,7,2,4,1,1,8,2,2,5,2,1,15,0,0,4,0,3,2,1,1,6,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,2,3,3,2,2,3,0,1,6,2,1,5,5,2,5,3,5,2,5,5,1,0,0,0,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,3,3,3,3,6,5,5,1,6,3,0,2,2,0,8,1,7,1,7,7,1,0,7,6,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,3,3,0,3,3,7,2,2,1,15,15,7,1,0,7,7,15,1,6,15,15,7,1,1,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,8,1,6,6,6,7,1,5,0,0,15,1,1,2,3,0,0,1,6,1,1,7,6,7,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14};

const uint8_t CreeperTex::rgbColors[] PROGMEM = {104,204,88,165,213,157,94,166,84,37,156,32,210,217,208,41,94,34,131,209,118,68,170,57,74,200,58,5,13,5,193,219,188,73,92,69,70,124,60,2,155,0,0,0,0,82,148,79};


class Creeper{
private:
	Vector3D basisVertices[48] = {Vector3D(-101.6000f,-177.8000f,50.8000f),Vector3D(101.6000f,-177.8000f,50.8000f),Vector3D(-101.6000f,-177.8000f,-50.8000f),Vector3D(101.6000f,-177.8000f,-50.8000f),Vector3D(-101.6000f,127.0000f,50.8000f),Vector3D(101.6000f,127.0000f,50.8000f),Vector3D(-101.6000f,127.0000f,-50.8000f),Vector3D(101.6000f,127.0000f,-50.8000f),Vector3D(-101.6000f,127.0000f,101.6000f),Vector3D(101.6000f,127.0000f,101.6000f),Vector3D(-101.6000f,127.0000f,-101.6000f),Vector3D(101.6000f,127.0000f,-101.6000f),Vector3D(-101.6000f,330.2000f,101.6000f),Vector3D(101.6000f,330.2000f,101.6000f),Vector3D(-101.6000f,330.2000f,-101.6000f),Vector3D(101.6000f,330.2000f,-101.6000f),Vector3D(-101.6000f,-330.2000f,152.4000f),Vector3D(-0.0000f,-330.2000f,152.4000f),Vector3D(-101.6000f,-330.2000f,50.8000f),Vector3D(-0.0000f,-330.2000f,50.8000f),Vector3D(-101.6000f,-177.8000f,152.4000f),Vector3D(-0.0000f,-177.8000f,152.4000f),Vector3D(-101.6000f,-177.8000f,50.8000f),Vector3D(-0.0000f,-177.8000f,50.8000f),Vector3D(0.0000f,-330.2000f,152.4000f),Vector3D(101.6000f,-330.2000f,152.4000f),Vector3D(0.0000f,-330.2000f,50.8000f),Vector3D(101.6000f,-330.2000f,50.8000f),Vector3D(0.0000f,-177.8000f,152.4000f),Vector3D(101.6000f,-177.8000f,152.4000f),Vector3D(0.0000f,-177.8000f,50.8000f),Vector3D(101.6000f,-177.8000f,50.8000f),Vector3D(-101.6000f,-330.2000f,-50.8000f),Vector3D(-0.0000f,-330.2000f,-50.8000f),Vector3D(-101.6000f,-330.2000f,-152.4000f),Vector3D(-0.0000f,-330.2000f,-152.4000f),Vector3D(-101.6000f,-177.8000f,-50.8000f),Vector3D(-0.0000f,-177.8000f,-50.8000f),Vector3D(-101.6000f,-177.8000f,-152.4000f),Vector3D(-0.0000f,-177.8000f,-152.4000f),Vector3D(0.0000f,-330.2000f,-50.8000f),Vector3D(101.6000f,-330.2000f,-50.8000f),Vector3D(0.0000f,-330.2000f,-152.4000f),Vector3D(101.6000f,-330.2000f,-152.4000f),Vector3D(0.0000f,-177.8000f,-50.8000f),Vector3D(101.6000f,-177.8000f,-50.8000f),Vector3D(0.0000f,-177.8000f,-152.4000f),Vector3D(101.6000f,-177.8000f,-152.4000f)};
	IndexGroup basisIndexes[72] = {IndexGroup(2,3,1),IndexGroup(5,7,6),IndexGroup(1,5,4),IndexGroup(3,7,5),IndexGroup(2,6,7),IndexGroup(0,4,6),IndexGroup(10,11,9),IndexGroup(13,15,14),IndexGroup(9,13,12),IndexGroup(11,15,13),IndexGroup(10,14,15),IndexGroup(8,12,14),IndexGroup(18,19,17),IndexGroup(21,23,22),IndexGroup(17,21,20),IndexGroup(19,23,21),IndexGroup(18,22,23),IndexGroup(16,20,22),IndexGroup(26,27,25),IndexGroup(29,31,30),IndexGroup(25,29,28),IndexGroup(27,31,29),IndexGroup(26,30,31),IndexGroup(24,28,30),IndexGroup(34,35,33),IndexGroup(37,39,38),IndexGroup(33,37,36),IndexGroup(35,39,37),IndexGroup(34,38,39),IndexGroup(32,36,38),IndexGroup(42,43,41),IndexGroup(45,47,46),IndexGroup(41,45,44),IndexGroup(43,47,45),IndexGroup(42,46,47),IndexGroup(40,44,46),IndexGroup(0,2,1),IndexGroup(4,5,6),IndexGroup(0,1,4),IndexGroup(1,3,5),IndexGroup(3,2,7),IndexGroup(2,0,6),IndexGroup(8,10,9),IndexGroup(12,13,14),IndexGroup(8,9,12),IndexGroup(9,11,13),IndexGroup(11,10,15),IndexGroup(10,8,14),IndexGroup(16,18,17),IndexGroup(20,21,22),IndexGroup(16,17,20),IndexGroup(17,19,21),IndexGroup(19,18,23),IndexGroup(18,16,22),IndexGroup(24,26,25),IndexGroup(28,29,30),IndexGroup(24,25,28),IndexGroup(25,27,29),IndexGroup(27,26,31),IndexGroup(26,24,30),IndexGroup(32,34,33),IndexGroup(36,37,38),IndexGroup(32,33,36),IndexGroup(33,35,37),IndexGroup(35,34,39),IndexGroup(34,32,38),IndexGroup(40,42,41),IndexGroup(44,45,46),IndexGroup(40,41,44),IndexGroup(41,43,45),IndexGroup(43,42,47),IndexGroup(42,40,46)};
	Vector2D uvVertices[39] = {Vector2D(0.5627f,0.6875f),Vector2D(0.5625f,0.7500f),Vector2D(0.4375f,0.7500f),Vector2D(0.0000f,1.0000f),Vector2D(0.3125f,0.7500f),Vector2D(0.4375f,0.6875f),Vector2D(0.3125f,0.6875f),Vector2D(0.4375f,0.5000f),Vector2D(0.5000f,0.6875f),Vector2D(0.5000f,0.5000f),Vector2D(0.6250f,0.6875f),Vector2D(0.6250f,0.5000f),Vector2D(0.2500f,0.6875f),Vector2D(0.3125f,0.5000f),Vector2D(0.3750f,0.8750f),Vector2D(0.3750f,1.0000f),Vector2D(0.2500f,1.0000f),Vector2D(0.1250f,1.0000f),Vector2D(0.2500f,0.8750f),Vector2D(0.1250f,0.8750f),Vector2D(0.2500f,0.7500f),Vector2D(0.3750f,0.7500f),Vector2D(0.5000f,0.8750f),Vector2D(0.5000f,0.7500f),Vector2D(0.0000f,0.8750f),Vector2D(0.1250f,0.7500f),Vector2D(0.1875f,0.6875f),Vector2D(0.1875f,0.7500f),Vector2D(0.0625f,0.7500f),Vector2D(0.1250f,0.6875f),Vector2D(0.0625f,0.6875f),Vector2D(0.1250f,0.5938f),Vector2D(0.1875f,0.5938f),Vector2D(0.2500f,0.5938f),Vector2D(0.0000f,0.6875f),Vector2D(0.0625f,0.5938f),Vector2D(0.2500f,0.5000f),Vector2D(0.0000f,0.7500f),Vector2D(0.0000f,0.5938f)};
	IndexGroup uvIndexGroup[72] = {IndexGroup(2,1,0),IndexGroup(5,2,4),IndexGroup(7,5,6),IndexGroup(9,8,5),IndexGroup(11,10,8),IndexGroup(13,6,12),IndexGroup(16,15,14),IndexGroup(18,16,17),IndexGroup(20,18,19),IndexGroup(21,14,18),IndexGroup(23,22,14),IndexGroup(25,19,24),IndexGroup(25,27,26),IndexGroup(29,25,28),IndexGroup(31,29,30),IndexGroup(32,26,29),IndexGroup(33,12,26),IndexGroup(35,30,34),IndexGroup(25,27,26),IndexGroup(29,25,28),IndexGroup(31,29,30),IndexGroup(32,26,29),IndexGroup(33,12,26),IndexGroup(35,30,34),IndexGroup(25,27,26),IndexGroup(29,25,28),IndexGroup(31,29,30),IndexGroup(32,26,29),IndexGroup(33,12,26),IndexGroup(35,30,34),IndexGroup(25,27,26),IndexGroup(29,25,28),IndexGroup(31,29,30),IndexGroup(32,26,29),IndexGroup(33,12,26),IndexGroup(35,30,34),IndexGroup(5,2,0),IndexGroup(6,5,4),IndexGroup(13,7,6),IndexGroup(7,9,5),IndexGroup(9,11,8),IndexGroup(36,13,12),IndexGroup(18,16,14),IndexGroup(19,18,17),IndexGroup(25,20,19),IndexGroup(20,21,18),IndexGroup(21,23,14),IndexGroup(37,25,24),IndexGroup(29,25,26),IndexGroup(30,29,28),IndexGroup(35,31,30),IndexGroup(31,32,29),IndexGroup(32,33,26),IndexGroup(38,35,34),IndexGroup(29,25,26),IndexGroup(30,29,28),IndexGroup(35,31,30),IndexGroup(31,32,29),IndexGroup(32,33,26),IndexGroup(38,35,34),IndexGroup(29,25,26),IndexGroup(30,29,28),IndexGroup(35,31,30),IndexGroup(31,32,29),IndexGroup(32,33,26),IndexGroup(38,35,34),IndexGroup(29,25,26),IndexGroup(30,29,28),IndexGroup(35,31,30),IndexGroup(31,32,29),IndexGroup(32,33,26),IndexGroup(38,35,34)};
	TriangleGroup triangleGroup = TriangleGroup(basisVertices, basisIndexes, uvIndexGroup, uvVertices, 48, 72, 39);
	CreeperTex material = CreeperTex(Vector2D(1.0f, 1.0f), Vector2D());
	Object3D basisObj = Object3D(&triangleGroup, &material);

public:
	Creeper(){}

	Object3D* GetObject(){
		return &basisObj;
	}
};
