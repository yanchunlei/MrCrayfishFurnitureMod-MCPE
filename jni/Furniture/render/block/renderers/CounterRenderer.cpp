#include "CounterRenderer.h"

void CounterRenderer::render(const BlockPos& pos, FurnitureBlock& tile, BlockTessellator* tess) {
	tess->useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;
	
	BlockSource* ts = tess->region;
	int data = ts->getData({x, y, z});

	tess->forcedUV = tile.getTexture(0, 0);
	
	if(this->getRelativeTileId(ts, x, y, z, data, DOWN) == CounterBlock::_id)
	{
		if(this->getRelativeRotation(ts, x, y, z, data, DOWN) == LEFT)
		{
			this->setRotatedBounds(tess, data, 0.0F, 0.0F, 0.125F, 1.0F, 0.875F, 1.0F);
			tess->tessellateBlockInWorld(tile, pos);
		}
		else if (this->getRelativeRotation(ts, x, y, z, data, DOWN) == RIGHT)
		{
			this->setRotatedBounds(tess, data, 0.0F, 0.0F, 0.0F, 1.0F, 0.875F, 0.875F);
			tess->tessellateBlockInWorld(tile, pos);
		}
	}
	if(this->getRelativeTileId(ts, x, y, z, data, this->UP) == CounterBlock::_id)
	{
		if(this->getRelativeRotation(ts, x, y, z, data, UP) == LEFT 
		&& this->getRelativeTileId(ts, x, y, z, data, LEFT) != CounterBlock::_id)
		{
			this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.125F, 1.0F, 0.875F, 1.0F);
			tess->tessellateBlockInWorld(tile, pos);
		}
		else if(this->getRelativeRotation(ts, x, y, z, data, UP) == RIGHT 
		&& this->getRelativeTileId(ts, x, y, z, data, RIGHT) != CounterBlock::_id)
		{
			this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.0F, 1.0F, 0.875F, 0.875F);
			tess->tessellateBlockInWorld(tile, pos);
		}
		else
		{
			this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.0F, 1.0F, 0.875F, 1.0F);
			tess->tessellateBlockInWorld(tile, pos);
		}
	}
	else
	{
		this->setRotatedBounds(tess, data, 0.125F, 0.0F, 0.0F, 1.0F, 0.875F, 1.0F);
		tess->tessellateBlockInWorld(tile, pos);
	}

    tess->forcedUV = tile.getTexture(1, 0);
    this->setRotatedBounds(tess, data, 0.0F, 0.875F, 0.0F, 1.0F, 1.0F, 1.0F);
    tess->tessellateBlockInWorld(tile, pos);
	
	tess->useForcedUV = false;
}
