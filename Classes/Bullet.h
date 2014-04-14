#pragma once
#ifndef __FishingJoy__Bullet__
#define __FishingJoy__Bullet__
#include "cocos2d.h"
class Bullet : public cocos2d::CCNode
{
public:
	CREATE_FUNC(Bullet);
	bool init();
protected:
	cocos2d::CCSprite* _bulletSprite;
};
#endif
