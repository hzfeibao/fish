#pragma once
#ifndef __FishingJoy__Fish__
#define __FishingJoy__Fish__
#include "cocos2d.h"

typedef enum{
	k_Fish_Type_Red = 0,
	k_Fish_type_Yellow,
	k_Fish_type_Count
}FishType;

class Fish : public cocos2d::CCNode
{
public:
	static Fish* create(FishType type=k_Fish_Type_Red);
	bool init(FishType type=k_Fish_Type_Red);
	CC_SYNTHESIZE_READONLY(cocos2d::CCSprite*, _fishSprite, FishSprite);//???
	CC_SYNTHESIZE_READONLY(int, _type, Type);//???
	//Fish(void);
	//~Fish(void);
};
#endif
