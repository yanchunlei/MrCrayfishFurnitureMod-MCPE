#include "FurnitureItem.h"

FurnitureItem* FurnitureItem::itemTableWood = NULL;
FurnitureItem* FurnitureItem::itemTableStone = NULL;
FurnitureItem* FurnitureItem::itemCoffeeTableWood = NULL;
FurnitureItem* FurnitureItem::itemCoffeeTableStone = NULL;
FurnitureItem* FurnitureItem::itemChairWood = NULL;
FurnitureItem* FurnitureItem::itemChairStone = NULL;
FurnitureItem* FurnitureItem::itemToilet = NULL;
FurnitureItem* FurnitureItem::itemCabinet = NULL;
FurnitureItem* FurnitureItem::itemKitchenCabinet = NULL;
FurnitureItem* FurnitureItem::itemDoorbell = NULL;
FurnitureItem* FurnitureItem::itemBin = NULL;
FurnitureItem* FurnitureItem::itemLamp = NULL;
FurnitureItem* FurnitureItem::itemChoppingBoard = NULL;
FurnitureItem* FurnitureItem::itemToaster = NULL;
FurnitureItem* FurnitureItem::itemMicrowave = NULL;
FurnitureItem* FurnitureItem::itemKnife = NULL;
FurnitureItem* FurnitureItem::itemBarStool = NULL;
FurnitureItem* FurnitureItem::itemCounter = NULL;
FurnitureItem* FurnitureItem::itemCookieJar = NULL;
FurnitureItem* FurnitureItem::itemOven = NULL;
FurnitureItem* FurnitureItem::itemPlate = NULL;

FurnitureItem::FurnitureItem(const std::string& name, int id) : Item(name, id - 256) {
	creativeCategory = 4;
}
