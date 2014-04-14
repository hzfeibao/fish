#include "Bullet.h"
#include "StaticData.h"
USING_NS_CC;
bool Bullet::init()
{
	_bulletSprite = CCSprite::createWithSpriteFrameName(STATIC_DATA_STRING("bullet"));
	_bulletSprite->setAnchorPoint(CCPointMake(0.5, 1.0));
	this->addChild(_bulletSprite);
	return true;
}
