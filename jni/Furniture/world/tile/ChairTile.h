#pragma once

#include "FurnitureTile.h"
#include "attributes/FurnitureTileAttributes.h"

class ChairTile : public FurnitureTile {
public:
	static int _woodId;
	static int _stoneId;

	ChairTile(int, std::string, FurnitureTileAttributes, int);

	virtual const TextureUVCoordinateSet& getTexture(signed char, int);
	virtual int getResource(int, Random*);
	virtual bool use(Player*, int, int, int);

private:
	TextureUVCoordinateSet secondary_tex;
	int droppedItem;
};